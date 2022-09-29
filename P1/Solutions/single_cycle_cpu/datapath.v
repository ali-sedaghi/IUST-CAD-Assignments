`timescale 1ns / 1ps

// jump is excluded since it was not required in ALU design part.

module datapath(
    input clk,
	 input rstPC,
    input [31:0] iw,				// instruction word	
    input readDataFromMem,
    output ALUOutput,
    output writeDataToMem
    );
	 
	 
// pc is not impelemented yet.
// rstPC is not wired , will be impelemented in second phase


// sign extention is not impelemented yet
// will be impelemented in second phase


// control unit output wires.	 
	 wire [3:0] ALUCtrl;		
    wire [1:0] ALUOp;			
    wire ALUSrc;					
    wire branch;					
    wire memToReg;			
    wire memWrite;			
    wire memRead;					
    wire regDst;					
    wire regWrite;				
	 
	 
// mounting control unit
	control_unit CU (
		.iw(iw),				// instruction word
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
	

// register file some input and output wires
	wire [4:0] writeReg;
	wire [31:0] writeData;
	wire [31:0] readData1;
	wire [31:0] readData2;
	
	
// assign file register input wires
	assign writeReg = regDst ? iw[15:11] : iw[20:16];
	assign writeData = memToReg ? readDataFromMem : ALUOutput ;
	
	
// mounting register file
	register_file RF (
		.readAddr1(iw[25:21]),
		.readAddr2(iw[20:16]),
		.writeAddr(writeReg),
		.writeData(writeData),
		.writeEn(regWrite),
		.clk(clk),
		.readData1(readData1),
		.readData2(readData2)
	);
	

// assigning write to memory wires
	assign writeDataToMem = readData2;
	
// ALU input and output wires
	wire [31:0] ALUiInput2;


//	assign ALUiInput2 = ALUSrc ? signExtOut : readData2; 		// including sign extention output


// mounting ALU
	ALU alu (
		.a (readData1),
		.b (ALUiInput2),
		.control (ALUCtrl),
		.flag (zero),
		.result(ALUOutput)
	);


endmodule
