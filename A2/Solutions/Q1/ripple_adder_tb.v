`timescale 1ns / 1ps

module ripple_adder_tb;

	// Inputs
	reg [3:0] X;
	reg [3:0] Y;

	// Outputs
	wire [3:0] S;
	wire CO;

	// Instantiate the Unit Under Test (UUT)
	rippe_adder uut (
		.X(X), 
		.Y(Y), 
		.S(S), 
		.CO(CO)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100 assign X = 4'b1011; Y = 4'b0010;
		#100 assign X = 4'b0111; Y = 4'b1010;
		#100 assign X = 4'b1101; Y = 4'b1110;
		#100 assign X = 4'b0100; Y = 4'b0011;

	end
      
endmodule

