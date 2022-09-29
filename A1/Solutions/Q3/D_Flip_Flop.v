`timescale 1ns / 1ps

module D_Flip_Flop(
    input D,
    input CLK,//positive edge
    output reg Q,
    output reg QN
    );

	 wire Q_wire_1;
	 wire QN_wire_1;
	 wire Q_wire_2;
	 wire QN_wire_2;
	 
	 D_Latch d_latch_1 (
		.D(D), 
		.E(~CLK), 
		.Q(Q_wire_1), 
		.QN(QN_wire_1)
	);	 
	D_Latch d_latch_2 (
		.D(Q_wire_1), 
		.E(CLK), 
		.Q(Q_wire_2), 
		.QN(QN_wire_2)
	);
	always @(Q_wire_2,QN_wire_2)
	begin
		Q <= Q_wire_2;
		QN <= QN_wire_2;
	end

endmodule
