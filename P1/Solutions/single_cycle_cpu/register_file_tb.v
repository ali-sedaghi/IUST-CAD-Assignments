`timescale 1ns / 1ps


module register_file_tb;

	// Inputs
	reg [4:0] readAddr1;
	reg [4:0] readAddr2;
	reg [4:0] writeAddr;
	reg [31:0] writeData;
	reg writeEn;
	reg clk;

	// Outputs
	wire [31:0] readData1;
	wire [31:0] readData2;

	// Instantiate the Unit Under Test (UUT)
	register_file uut (
		.readAddr1(readAddr1), 
		.readAddr2(readAddr2), 
		.writeAddr(writeAddr), 
		.writeData(writeData), 
		.writeEn(writeEn), 
		.clk(clk), 
		.readData1(readData1), 
		.readData2(readData2)
	);

	initial begin

		// Wait 100 ns for global reset to finish
		#100 clk = 0;
		#100 readAddr1 = 5'b00000;
		#100 readAddr2 = 5'b00000;
		#100 writeData = 32'h65655555;
		#100 writeAddr = 5'b00100;
		#100 writeEn = 1;
		#100 clk = 1;
		#100 readAddr1 = 5'b00100;
		#100 clk = 0;
		#100 writeAddr = 5'b00000;
		#100 writeData = 32'h00000564;
		#100 clk = 1;
	
	

	end
	
      
endmodule

