module ALU(
	ALUOp,
	Function,
	ALUCtrl
);

	input [1:0] ALUOp;
	input [5:0] Function;

	output reg [3:0] ALUCtrl;

	always @(ALUOp or Function) begin
		casex ({ALUOp, Function})
			8'b1x_xx0000:
				ALUCtrl = 4'b0010; //add | addi
			8'b00_xxxxxx:
				ALUCtrl = 4'b0010; //lw | sw
			8'b1x_xx0010:
				ALUCtrl = 4'b0110; //sub | subi
			8'b01_xxxxxx:
				ALUCtrl = 4'b0110; //beq | bne
			8'b1x_xx0100:
				ALUCtrl = 4'b0000; //and | andi
			8'b1x_xx0101:
				ALUCtrl = 4'b0001; //or | ori
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //slt: Set if Less Than
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //xor | xori
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //lui
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //sll
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //srl
			8'b1x_xx1010:
				ALUCtrl = 4'b0111; //sra
				
		endcase
	end

endmodule
