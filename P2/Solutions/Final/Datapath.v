module Datapath(
	clk,
	reset,
	IorD,
	MemRead,
	MemWrite,
	MemtoReg,
	IRWrite,
	PCSource,
	ALUSrcB,
	ALUSrcA,
	RegWrite,
	RegDst,
	PCSel,
	ALUCtrl,
	Op,
	Zero,
	Function
);

	input clk;
	input reset;
	input IorD;
	input MemRead;
	input MemWrite;
	input MemtoReg;
	input IRWrite;
	input PCSource;
	input [1:0] ALUSrcB;
	input ALUSrcA;
	input RegWrite;
	input RegDst;
	input PCSel;
	input [3:0] ALUCtrl;

	output [5:0] Op;
	output Zero;
	output [5:0] Function;

	reg [7:0] PC;
	reg [31:0] ALUOut;
	reg [31:0] ALUResult;
	wire [31:0] OpA;
	reg [31:0] OpB;
	reg [31:0] A;
	reg [31:0] B;
	wire [7:0] address;
    wire [31:0] MemData;
	reg [31:0] mem [255:0];
	reg [31:0] instruction;
	reg [31:0] mdr;
	wire [31:0] d1;
	wire [31:0] d2;
	reg [31:0] registers[31:0];
	
	
	/******************** Memory Data Frame ********************/
	parameter PCSTART = 100;
	parameter PCEND = 114;
	
	initial $readmemh("mem.mem", mem);
	assign address = (IorD) ? ALUOut : PC;
	assign MemData = (MemRead) ? mem[address] : 32'bx;
	/******************** End of Memory Data Frame ********************/
	
	
	
	/******************** Write on Memory ********************/
	always @(posedge clk) begin
		if (MemWrite)
		begin
			mem[address] <= B;
			$display("Write on memory. address:%h, value:%d", address, B);
		end
	end
	/******************** End of Write on Memory ********************/
	
	

	/******************** Instruction and Data Reg ********************/
	always @(posedge clk) begin
		if (IRWrite)
			instruction <= MemData;
	end
	
	always @(posedge clk) begin
		mdr <= MemData;
	end
	/******************** End of Instruction and Data Reg ********************/
	

	
	/******************** Register File ********************/
	assign d1 = (instruction[25:21] != 0) ? registers[instruction[25:21]] : 0;
	assign d2 = (instruction[20:16] != 0) ? registers[instruction[20:16]] : 0;
	
	always @(posedge clk) A <= d1;
	always @(posedge clk) B <= d2;
	
	// write on register file
	always @(posedge clk) begin
		if (RegWrite) begin
			if (RegDst)
				registers[instruction[15:11]] <= (MemtoReg) ? mdr : ALUOut;
			else
				registers[instruction[20:16]] <= (MemtoReg) ? mdr : ALUOut;
		end
	end
	/******************** End of Register File ********************/
	
	
	
	/******************** Program Counter ********************/
	always @(posedge clk) begin
		if (reset)
			PC <= PCSTART;
		else
		if (PCSel) begin
			case (PCSource)
				1'b0: PC <= ALUResult;
				1'b1: PC <= ALUOut;
			endcase
			if (PC > PCEND)
				$stop;
		end
	end
	/******************** End of Program Counter ********************/
	


	/******************** ALU ********************/
	assign Function = instruction[5:0];
	assign Op = instruction[31:26];
	assign OpA = (ALUSrcA) ? A : PC;
	assign Zero = (ALUResult == 0);

	// decoding
	always @(ALUSrcB or B or instruction[15:0]) begin
		casex (ALUSrcB)
			2'b00: OpB = B;
			2'b01: OpB = 1;
			2'b1x: OpB = { {(16){instruction[15]}}, instruction[15:0] };
		endcase
	end

	// calculation
	always @(ALUCtrl or OpA or OpB) begin
		case(ALUCtrl)
		4'b0000: ALUResult = OpA & OpB;
		4'b0001: ALUResult = OpA | OpB;
		4'b0010: ALUResult = OpA + OpB;
		4'b0110: ALUResult = OpA - OpB;
		4'b0111: ALUResult = OpA < OpB ? 1 : 0;
		4'b1100: ALUResult = ~(OpA | OpB);
		endcase
	end

	always @(posedge clk) begin
		ALUOut <= ALUResult;
	end
	/******************** End of ALU ********************/
	

endmodule
