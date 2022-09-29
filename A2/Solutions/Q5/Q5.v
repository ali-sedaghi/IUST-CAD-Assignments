`timescale 1ns / 1ps

// as it was not specified in question we assumed divider is a 16 bit unsigned divider
// also count pin's type was not specified either , we assumed it to be an output pin showing number of division done.
module Q5(
    input [7:0] a,
    input [7:0] b,
    input start,
    output [7:0] q,
    output [7:0] r,
    output busy,
    output ready,
    output [1:0] count
    );
	 
	reg [15:0] x ;
	reg [7:0] q_reg ;
	reg [7:0] r_reg ;
	reg busy_reg;
	reg ready_reg;
	reg [1:0] count_reg;
	integer i ;
	 
	initial
	begin
		busy_reg = 1'b0;
	end
	 
	always @(start)
	begin
		if (start == 1)
		begin
			busy_reg = 1'b1;
			ready_reg = 1'b0;
			#10 x = {8'b00000000,a};
			#10 q_reg = 8'b00000000;
			for (i = 0;i<4;i = i + 1)
			begin
				count_reg = i;
				#10 x = x << 1;
				#10 q_reg = q_reg << 1;
				if ( x[7:4] >= b )
				begin
					#10 q_reg[0] = 1;
					#10 x[7:4] = x[7:4] - b;
				end
			end
			#10 r_reg = x[7:4];
			#10 busy_reg = 1'b0;
			#10 ready_reg = 1'b1;
		end
		
	end
	
	assign q = q_reg;
	assign r = r_reg;
	assign busy = busy_reg;
	assign ready = ready_reg;
	assign count = count_reg ;

endmodule
