`timescale 1ns / 1ps

module RS_Latch(
    input R,//reset bit
    input S,//set bit
    input E,//enable bit
    output reg Q,//output
    output reg QN//output not
    );

	always @(R,S,E)
	begin
		if (E == 1'b1 )
		begin
			if (S == 1'b0)
			begin
				if (R == 1'b1)
				begin
					Q <= 1'b0;
					QN <= 1'b1;
				end
			end 
			else
			begin
				if (R == 1'b0)
				begin
					Q <= 1'b1;
					QN <= 1'b0;
				end
				else
				begin
					Q <= 1'bx;
					QN <= 1'bx;
				end
			end
		end
	end
endmodule
