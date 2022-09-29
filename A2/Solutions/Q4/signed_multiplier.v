`timescale 1ns / 1ps

module signed_multiplier(
	input [3:0] a,
	input [3:0] b,
	output [6:0] o
);
	wire [0:32] w;
	wire [0:2] sw;
	
	// sign out = xor a[3] b[3]
	nand(sw[0], a[3], b[3]);
	nand(sw[1], sw[0], a[3]);
	nand(sw[2], sw[0], b[3]);
	nand(o[6], sw[1], sw[2]);
	
	nand(w[0], a[0], b[2]);
	nand(w[1], a[0], b[1]);
	nand(w[2], a[0], b[0]);
	nand(o[0], w[2], w[2]);
	nand(w[3], b[1], a[1]);
	nand(w[4], w[3], w[3]);
	nand(w[5], b[0], a[2]);
	nand(w[6], w[0], w[5]);
	nand(w[7], b[1], a[2]);
	nand(w[8], a[1], b[2]);
	nand(w[9], w[8], w[7]);
	nand(w[10], a[1], b[0]);
	nand(w[11], w[1], w[10]);
	nand(w[12], o[0], w[4]);
	nand(w[13], w[4], w[12]);
	nand(w[14], w[11], w[12]);
	nand(o[1], w[14], w[14]);
	nand(w[15], a[2], b[2]);
	nand(w[16], w[15], w[15]);
	nand(w[17], o[0], w[16]);
	nand(w[18], w[17], w[13]);
	nand(w[19], w[16], w[18]);
	nand(w[20], w[19], w[9]);
	nand(w[21], w[20], w[17]);
	nand(w[22], w[20], w[9]);
	nand(w[23], w[22], w[21]);
	nand(o[5], w[22], w[22]);
	nand(w[24], w[16], w[22]);
	nand(w[25], w[6], w[18]);
	nand(w[26], w[25], w[6]);
	nand(w[27], w[25], w[18]);
	nand(o[2], w[26], w[27]);
	nand(w[28], w[4], w[27]);
	nand(w[29], w[23], w[28]);
	nand(w[30], w[28], w[28]);
	nand(w[31], w[30], w[21]);
	nand(o[4], w[31], w[24]);
	nand(w[32], w[29], w[31]);
	nand(o[3], w[32], w[32]);

endmodule
