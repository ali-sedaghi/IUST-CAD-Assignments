// 32bit 4 to 1 MUX using assign statement
`timescale 1ns / 1ps

module mux_32b_4_to_1_assign (
	input [31:0] a,
	input [31:0] b,
	input [31:0] c,
	input [31:0] d,
	input [1:0] sel, 
	output [31:0] out);
    
   assign out = sel[1] ? (sel[0] ? d : c) : (sel[0] ? b : a);  
  
endmodule