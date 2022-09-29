// 32bit 4 to 1 MUX using case statement
`timescale 1ns / 1ps

module mux_32b_4_to_1_case(
    input wire[0:4][0:31] in,
    input wire[0:1] select,
    output reg[0:31] out
    );
	 

	always @(select,in)
	begin
		case(select)
			2'b00: out <= in[0];
			2'b01: out <= in[1];
			2'b10: out <= in[2];
			2'b11: out <= in[3];
		endcase
	end
	
	
endmodule