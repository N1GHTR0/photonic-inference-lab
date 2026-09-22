module pe #(
    parameter int WIDTH = 8
) (
    input  logic                    clk,
    input  logic                    rst,
    input  logic                    en,
    input  logic signed [WIDTH-1:0] a_in,
    input  logic signed [WIDTH-1:0] b_in,
    output logic signed [WIDTH-1:0] a_out,
    output logic signed [WIDTH-1:0] b_out,
    output logic signed [2*WIDTH-1:0] acc
);
    always_ff @(posedge clk) begin
        if (rst) begin
            a_out <= '0;
            b_out <= '0;
            acc   <= '0;
        end else if (en) begin
            a_out <= a_in;
            b_out <= b_in;
            acc   <= acc + (a_in * b_in);
        end
    end
endmodule
