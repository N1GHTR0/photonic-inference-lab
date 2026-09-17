`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/17/2026 07:22:27 PM
// Design Name: 
// Module Name: led_blink
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module led_blink (
    input  logic clk,
    output logic led
);
    logic [26:0] counter;

    always_ff @(posedge clk) begin
        counter <= counter + 1;
        if (counter == 27'd50_000_000) begin
            counter <= 0;
            led     <= ~led;
        end
    end
endmodule