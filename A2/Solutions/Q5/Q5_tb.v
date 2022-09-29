`timescale 1ns / 1ps


module Q5_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg start;

	// Outputs
	wire [7:0] q;
	wire [7:0] r;
	wire busy;
	wire ready;
	wire [1:0] count;

	// Instantiate the Unit Under Test (UUT)
	Q5 uut (
		.a(a), 
		.b(b), 
		.start(start), 
		.q(q), 
		.r(r), 
		.busy(busy), 
		.ready(ready), 
		.count(count)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		
		#10 a = 8'b00001110;
		#10 b = 8'b00000011;
		#10 start = 1;


	end
      
endmodule

