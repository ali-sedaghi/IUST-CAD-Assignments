`timescale 1ns / 1ps


module control_unit_tb;

	// Inputs
	reg [31:0] iw;

	// Outputs
	wire [3:0] ALUCtrl;
	wire [1:0] ALUOp;
	wire regDst;
	wire regWrite;
	wire ALUSrc;
	wire memWrite;
	wire memRead;
	wire memToReg;
	wire branch;

	// Instantiate the Unit Under Test (UUT)
	control_unit uut (
		.iw(iw), 
		.ALUCtrl(ALUCtrl), 
		.ALUOp(ALUOp), 
		.regDst(regDst), 
		.regWrite(regWrite), 
		.ALUSrc(ALUSrc), 
		.memWrite(memWrite), 
		.memRead(memRead), 
		.memToReg(memToReg), 
		.branch(branch)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
		#100 iw = 32'b00011011111111111111111111101010;
        
		// Add stimulus here
		
		// R-type
		#100 iw = 32'b00000011111111111111111111100000;
		#100 iw = 32'b00000011111111111111111111100010;
		#100 iw = 32'b00000011111111111111111111100100;
		#100 iw = 32'b00000011111111111111111111100101;
		#100 iw = 32'b00000011111111111111111111101010;
		
		// load
		#100 iw = 32'b10001011111111111111111111101010;
		
		//	store
		#100 iw = 32'b10101111111111111111111111101010;
		
		//branch
		#100 iw = 32'b00001011111111111111111111101010;

	end
      
endmodule

