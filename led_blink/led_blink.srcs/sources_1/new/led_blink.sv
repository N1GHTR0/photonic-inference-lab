`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/16/2026 08:17:44 PM
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
    input  logic rst,
    output logic led
);
    logic [26:0] counter;

    always_ff @(posedge clk) begin
        if (rst) begin
            counter <= 0;
            led     <= 0;
        end else begin
            counter <= counter + 1;
            if (counter == 27'd50_000_000) begin  // 0.5s @ 100MHz
                counter <= 0;
                led     <= ~led;
            end
        end
    end
endmodule
