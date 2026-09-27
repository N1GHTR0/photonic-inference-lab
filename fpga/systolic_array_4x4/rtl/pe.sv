module pe #(
    parameter int WIDTH     = 8,
    parameter int ACC_WIDTH = 32   // 2*WIDTH, K>1 birikimde tasar
) (
    input  logic                        clk,
    input  logic                        rst,
    input  logic                        en,
    input  logic signed [WIDTH-1:0]     a_in,
    input  logic signed [WIDTH-1:0]     b_in,
    output logic signed [WIDTH-1:0]     a_out,
    output logic signed [WIDTH-1:0]     b_out,
    output logic signed [ACC_WIDTH-1:0] acc
);
    (* use_dsp = "yes" *) logic signed [2*WIDTH-1:0] mult;
    assign mult = a_in * b_in;

    always_ff @(posedge clk) begin
        if (rst) begin
            a_out <= '0;
            b_out <= '0;
            acc   <= '0;
        end else if (en) begin
            a_out <= a_in;
            b_out <= b_in;
            acc   <= acc + ACC_WIDTH'(mult);  // signed: isaret genisletilir
        end
    end
endmodule