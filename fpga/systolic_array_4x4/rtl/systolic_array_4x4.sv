module systolic_array_4x4 #(
    parameter int WIDTH     = 8,
    parameter int ACC_WIDTH = 32
) (
    input  logic                         clk,
    input  logic                         rst,
    input  logic                         en,
    input  logic signed [WIDTH-1:0]      a_in [0:3],
    input  logic signed [WIDTH-1:0]      b_in [0:3],
    output logic signed [ACC_WIDTH-1:0]  c_out [0:3][0:3]
);

    logic signed [WIDTH-1:0] a_wire [0:3][0:4];
    logic signed [WIDTH-1:0] b_wire [0:4][0:3];

    genvar i, j;
    generate
        for (i = 0; i < 4; i++) begin : g_a_in
            assign a_wire[i][0] = a_in[i];
        end
        for (j = 0; j < 4; j++) begin : g_b_in
            assign b_wire[0][j] = b_in[j];
        end
    endgenerate

    generate
        for (i = 0; i < 4; i++) begin : g_row
            for (j = 0; j < 4; j++) begin : g_col
                pe #(.WIDTH(WIDTH), .ACC_WIDTH(ACC_WIDTH)) pe_inst (
                    .clk   (clk),
                    .rst   (rst),
                    .en    (en),
                    .a_in  (a_wire[i][j]),
                    .b_in  (b_wire[i][j]),
                    .a_out (a_wire[i][j+1]),
                    .b_out (b_wire[i+1][j]),
                    .acc   (c_out[i][j])
                );
            end
        end
    endgenerate

endmodule
