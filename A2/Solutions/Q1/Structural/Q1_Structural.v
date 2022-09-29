`timescale 1ns / 1ps
module Q1_Structural(
    input A,
    input B,
    input Cin,
    output S,
    output Cout
    );
	 
	wire x,y,z;
	 
	xor(x,A,B);
	and(y,A,B);
	and(z,Cin,x);
	xor(S,Cin,x);
	or(Cout,y,z);

endmodule