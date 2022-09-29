`timescale 1ns / 1ps

	module ALU(
		input [31:0] a,
		input [31:0] b,
		input [3:0] control,
		output [31:0] result,
		output flag
	);
	
	reg [31:0] resultReg;

	always @(control or a or b)
	begin
	case(control)
		4'b0000 : //ADD
			resultReg <= a + b ;
		4'b0001 : //SUB
			resultReg <= a - b ;
		4'b0010: //AND
			resultReg <= a & b ;
		4'b0011 : //OR
			resultReg <= a | b ;
		4'b0100 : //XOR
			resultReg <= a ^ b ;
		4'b0101 : //SLL
			resultReg <= a << b;
		4'b0110 : //SRL
			resultReg <= a >> b;
		4'b0111 : //SRA
			resultReg <= $signed($signed(a) >>> b);
		4'b1110 : //LUI 
			begin
				resultReg[31:16] <= b[15:0];
				resultReg[15:0] <= 16'b0000000000000000;
			end
	endcase
	end
	
	
	assign flag = (result == 32'd0) ? 1'b1 : 1'b0;
	
	
	assign result = resultReg;
	
endmodule
