`timescale 1ns / 1ps

module rippe_adder(X, Y, S, CO);
	input [3:0] X, Y;
	output [3:0] S;
	output CO;
	wire w1, w2, w3;

	fa_dataflow u1(X[0], Y[0], 1'b0, S[0], w1);
	fa_dataflow u2(X[1], Y[1], w1, S[1], w2);
	fa_dataflow u3(X[2], Y[2], w2, S[2], w3);
	fa_dataflow u4(X[3], Y[3], w3, S[3], CO);
endmodule
