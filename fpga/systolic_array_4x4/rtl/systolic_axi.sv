// AXI4-Lite slave: ARM (Zynq PS) ile 4x4 systolic array arasindaki kopru.
//
// Register haritasi (32 bit kelimeler):
//   0x00        ID      R   32'h5A44_0001
//   0x04        CTRL    W   bit0 = START (tek clock pulse; BUSY iken yok sayilir)
//   0x08        STATUS  R   bit0 = DONE (yeni START'a kadar 1 kalir), bit1 = BUSY
//   0x10..0x1C  A[i]    RW  A'nin i. satiri: [8k+7:8k] = A[i][k]
//   0x20..0x2C  B[k]    RW  B'nin k. satiri: [8j+7:8j] = B[k][j]
//   0x40..0x7C  C[4i+j] R   int32
// BUSY iken A/B yazmalari yok sayilir.
//
// Akis: IDLE -START-> CLEAR (acc = 0) -> FEED (11 clk, skew burada uretilir)
//       -> DRAIN (son veri diziye girer) -> CAPTURE (C kopyalanir, DONE = 1) -> IDLE
module systolic_axi #(
    parameter int WIDTH     = 8,   // paketleme 32 bitte 4 eleman varsayar
    parameter int ACC_WIDTH = 32
) (
    input  logic        s_axi_aclk,
    input  logic        s_axi_aresetn,
    // AW
    input  logic [6:0]  s_axi_awaddr,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [2:0]  s_axi_awprot,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    // W
    input  logic [31:0] s_axi_wdata,
    input  logic [3:0]  s_axi_wstrb,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    // B
    output logic [1:0]  s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    // AR
    input  logic [6:0]  s_axi_araddr,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [2:0]  s_axi_arprot,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    // R
    output logic [31:0] s_axi_rdata,
    output logic [1:0]  s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready
);
    localparam int N           = 4;
    localparam int FEED_CYCLES = 3 * N - 1;  // tb ile ayni: t = 0..10
    localparam logic [31:0] ID = 32'h5A44_0001;

    logic clk, rst;
    assign clk = s_axi_aclk;
    assign rst = ~s_axi_aresetn;

    // ---------------- register'lar ----------------
    logic [31:0]                 a_row [N];
    logic [31:0]                 b_row [N];
    logic signed [ACC_WIDTH-1:0] c_reg [N*N];
    logic                        start, busy, done;

    // ---------------- AXI yazma ----------------
    logic [4:0] wr_idx;
    assign wr_idx      = s_axi_awaddr[6:2];
    assign s_axi_bresp = 2'b00;  // OKAY

    always_ff @(posedge clk) begin
        if (rst) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            start         <= 1'b0;
            for (int i = 0; i < N; i++) begin
                a_row[i] <= '0;
                b_row[i] <= '0;
            end
        end else begin
            start         <= 1'b0;
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;

            if (s_axi_bvalid && s_axi_bready)
                s_axi_bvalid <= 1'b0;

            // AW ve W ikisi de geldiginde tek clock ready ver
            if (s_axi_awvalid && s_axi_wvalid && !s_axi_awready && !s_axi_bvalid) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
            end

            // handshake: yaz ve B cevabini ver
            if (s_axi_awready && s_axi_awvalid && s_axi_wready && s_axi_wvalid) begin
                s_axi_bvalid <= 1'b1;
                case (wr_idx) inside
                    5'd1:
                        start <= s_axi_wstrb[0] && s_axi_wdata[0] && !busy;
                    [5'd4:5'd7]:
                        if (!busy)
                            for (int b = 0; b < 4; b++)
                                if (s_axi_wstrb[b]) a_row[wr_idx[1:0]][8*b +: 8] <= s_axi_wdata[8*b +: 8];
                    [5'd8:5'd11]:
                        if (!busy)
                            for (int b = 0; b < 4; b++)
                                if (s_axi_wstrb[b]) b_row[wr_idx[1:0]][8*b +: 8] <= s_axi_wdata[8*b +: 8];
                    default: ;
                endcase
            end
        end
    end

    // ---------------- AXI okuma ----------------
    logic [4:0]  rd_idx;
    logic [31:0] rd_mux;
    assign rd_idx      = s_axi_araddr[6:2];
    assign s_axi_rresp = 2'b00;  // OKAY

    always_comb begin
        case (rd_idx) inside
            5'd0:           rd_mux = ID;
            5'd2:           rd_mux = {30'b0, busy, done};
            [5'd4:5'd7]:    rd_mux = a_row[rd_idx[1:0]];
            [5'd8:5'd11]:   rd_mux = b_row[rd_idx[1:0]];
            [5'd16:5'd31]:  rd_mux = 32'(c_reg[rd_idx[3:0]]);
            default:        rd_mux = '0;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
        end else begin
            s_axi_arready <= 1'b0;

            if (s_axi_rvalid && s_axi_rready)
                s_axi_rvalid <= 1'b0;

            if (s_axi_arvalid && !s_axi_arready && !s_axi_rvalid)
                s_axi_arready <= 1'b1;

            if (s_axi_arready && s_axi_arvalid) begin
                s_axi_rvalid <= 1'b1;
                s_axi_rdata  <= rd_mux;
            end
        end
    end

    // ---------------- kontrol FSM ----------------
    typedef enum logic [2:0] {S_IDLE, S_CLEAR, S_FEED, S_DRAIN, S_CAPTURE} state_t;
    state_t     state;
    logic [3:0] t;

    // skew: A[i][k] satir i'ye t = i+k'da, B[k][j] sutun j'ye t = j+k'da girer
    logic signed [WIDTH-1:0]     a_sel [0:N-1];
    logic signed [WIDTH-1:0]     b_sel [0:N-1];
    logic signed [WIDTH-1:0]     a_q   [0:N-1];
    logic signed [WIDTH-1:0]     b_q   [0:N-1];
    logic                        en_q;
    logic                        arr_rst;
    logic signed [ACC_WIDTH-1:0] c_out [0:N-1][0:N-1];

    always_comb begin
        for (int i = 0; i < N; i++) begin
            a_sel[i] = '0;
            b_sel[i] = '0;
            for (int k = 0; k < N; k++) begin
                if (int'(t) == i + k) begin
                    a_sel[i] = a_row[i][WIDTH*k +: WIDTH];
                    b_sel[i] = b_row[k][WIDTH*i +: WIDTH];
                end
            end
        end
    end

    // dizi girisleri register'dan gelir (porttan DSP'ye giden kritik yolu keser)
    always_ff @(posedge clk) begin
        for (int i = 0; i < N; i++) begin
            a_q[i] <= (state == S_FEED) ? a_sel[i] : '0;
            b_q[i] <= (state == S_FEED) ? b_sel[i] : '0;
        end
        en_q <= (state == S_FEED);
    end

    assign arr_rst = rst || (state == S_CLEAR);

    always_ff @(posedge clk) begin
        if (rst) begin
            state <= S_IDLE;
            t     <= '0;
            busy  <= 1'b0;
            done  <= 1'b0;
            for (int i = 0; i < N*N; i++) c_reg[i] <= '0;
        end else begin
            case (state)
                S_IDLE:
                    if (start) begin
                        busy  <= 1'b1;
                        done  <= 1'b0;
                        state <= S_CLEAR;
                    end
                S_CLEAR: begin
                    t     <= '0;
                    state <= S_FEED;
                end
                S_FEED:
                    if (int'(t) == FEED_CYCLES - 1) state <= S_DRAIN;
                    else                            t     <= t + 1;
                S_DRAIN:
                    state <= S_CAPTURE;
                S_CAPTURE: begin
                    for (int i = 0; i < N; i++)
                        for (int j = 0; j < N; j++)
                            c_reg[i*N + j] <= c_out[i][j];
                    busy  <= 1'b0;
                    done  <= 1'b1;
                    state <= S_IDLE;
                end
                default:
                    state <= S_IDLE;
            endcase
        end
    end

    systolic_array_4x4 #(
        .WIDTH     (WIDTH),
        .ACC_WIDTH (ACC_WIDTH)
    ) u_array (
        .clk   (clk),
        .rst   (arr_rst),
        .en    (en_q),
        .a_in  (a_q),
        .b_in  (b_q),
        .c_out (c_out)
    );

endmodule
