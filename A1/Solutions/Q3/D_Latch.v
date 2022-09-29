`timescale 1ns / 1ps


module D_Latch(
    input D,
    input E,
    output reg Q,
    output reg QN
    );
	 
	 wire Q_wire;
	 wire QN_wire;
	 
	 RS_Latch rs_latch (
		.R(~D), 
		.S(D), 
		.E(E), 
		.Q(Q_wire), 
		.QN(QN_wire)
	);
	always @(Q_wire,QN_wire)
	begin
		Q <= Q_wire;
		QN <= QN_wire;
	end
	


endmodule
