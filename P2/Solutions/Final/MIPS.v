module MIPS(
	clk,
	reset
);

	input clk;
	input reset;

	wire [5:0] Op;
	wire Zero;
	wire IorD;
	wire MemRead;
	wire MemWrite;
	wire MemToReg;
	wire IRWrite;
	wire PCSource;
	wire [1:0] ALUSrcB;
	wire ALUSrcA;
	wire RegWrite;
	wire RegDst;
	wire PCSel;
	wire [1:0] ALUOp;
	wire [3:0] ALUCtrl;
	wire [5:0] Function;

	Control control(
		.clk (clk), 
		.reset (reset),
		.Op (Op),
		.Zero (Zero),
		.IorD (IorD),
		.MemRead (MemRead),
		.MemWrite (MemWrite),
		.MemtoReg (MemtoReg),
		.IRWrite (IRWrite),
		.PCSource (PCSource),
		.ALUSrcB (ALUSrcB),
		.ALUSrcA (ALUSrcA),
		.RegWrite (RegWrite),
		.RegDst (RegDst),
		.PCSel (PCSel),
		.ALUOp (ALUOp)
	);

	ALU alu(
		.ALUOp (ALUOp),
		.Function (Function),
		.ALUCtrl (ALUCtrl)
	);

	Datapath datapath(
		.clk (clk),
		.reset (reset),
		.IorD (IorD),
		.MemRead (MemRead),
		.MemWrite (MemWrite),
		.MemtoReg (MemtoReg),
		.IRWrite (IRWrite),
		.PCSource (PCSource),
		.ALUSrcB (ALUSrcB),
		.ALUSrcA (ALUSrcA),
		.RegWrite (RegWrite),
		.RegDst (RegDst),
		.PCSel (PCSel),
		.ALUCtrl (ALUCtrl),
		.Op (Op),
		.Zero (Zero),
		.Function (Function)
	);

endmodule
