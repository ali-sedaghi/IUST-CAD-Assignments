`timescale 1ns / 1ps

module Q1_Dataflow_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	Q1_Dataflow uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.S(S), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;


		// Wait 100 ns for global reset to finish
		#100 assign A = 1;
		#100 assign B = 1;
		#100 assign Cin = 1;
		#100 assign A = 0;
		#100 assign B = 0;
		#100 assign A = 1;
		#100 assign Cin = 0;assign A = 0;assign B = 1;
        

	end
      
endmodule
