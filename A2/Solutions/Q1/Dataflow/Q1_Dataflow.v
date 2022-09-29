`timescale 1ns / 1ps
module Q1_Dataflow(
    input A,
    input B,
    input Cin,
    output S,
    output Cout
    );

	wire x,y,z;

	assign x = A ^ B;
	assign y = A & B;
	assign z = Cin & x;
	assign S = Cin ^ x;
	assign Cout = y | z;

endmodule