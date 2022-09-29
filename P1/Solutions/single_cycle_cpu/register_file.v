`timescale 1ns / 1ps

//register file design could been way more efficient and smaller if dataflow-style was not forced into it.

// in mips , register file size is 32 registers each containing 32 bits.
// 5 bits is required to address 32 registers.
//Dataflow Modeling
//Describing a register (flip flop) using dataflow modeling is not applicable. 
//Flip flops are supposed to work on edge-triggered clocks. 
//In dataflow modeling, it is not possible to construct an edge-triggered flip flop. 
//It works more like a latch. Also, when modeling sequential circuits with dataflow, it can sometimes result in an unpredictable output during a simulation. 
//Hence, we prefer the highest level of abstraction (behavioral modeling) to describe sequential circuits like flip flops.

module register_file(readAddr1, readAddr2, writeAddr, writeData, writeEn, clk, readData1, readData2
    );
	 
	 input [4:0] readAddr1;
    input [4:0] readAddr2;
    input [4:0] writeAddr;
    input [31:0] writeData;
    input writeEn;
    input clk;
    output [31:0] readData1;
    output [31:0] readData2;
	 
	reg [31:0] readData1reg;
	reg [31:0] readData2reg;
	reg [31:0] registers [0:31];
	
	// register $zero is hard-wired to value 0 and can't be changed.
	initial
	begin
		registers[0] <= 32'h00000000;
	end
	
	
	
// Read is preformed on ngetive edge of clock
	always @(negedge clk)
	begin
		readData1reg <= registers[readAddr1];
		readData2reg <= registers[readAddr2];
	end
	
	
// Write is preformed on postive edge of clock
	always @(posedge clk)
	begin
		if (writeEn & (writeAddr != 0))
			registers[writeAddr] <=  writeData;
	end
	
	
	assign readData1 = readData1reg;
	assign readData2 = readData2reg;
	
	

endmodule
