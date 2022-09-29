`timescale 1ns / 1ps

module ALU_tb;

	reg [31:0] a;
	reg [31:0] b;
	reg [3:0] control;

	wire flag;
	wire [31:0] result;

	ALU uut (
		.a(a), 
		.b(b), 
		.control(control), 
		.result(result), 
		.flag(flag)
	);

	initial begin
		a = 32'd17;
		b = 32'd17;

		control = 4'b0000;
		#100;
		
		control = 4'b0001;
		#100;
		
		control = 4'b0010;
		#100;
		
		control = 4'b0011;
		#100;
		
		control = 4'b0100;
		#100;
		
		control = 4'b0101;
		#100;
		
		control = 4'b0110;
		#100;
		
		control = 4'b00111;
		#100;
		
		control = 4'b1110;
		#100;
        
	end
endmodule

