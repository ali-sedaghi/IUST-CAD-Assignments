`timescale 1ns / 1ps

module signed_multiplier_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [6:0] o;

	// Instantiate the Unit Under Test (UUT)
	signed_multiplier uut (
		.a(a), 
		.b(b), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		// (-3) * (+2) = (-6) = 1000110
		#100 assign a = 4'b1011; b = 4'b0010;
		
		// (+7) * (-8) = (-56) = 1001110
		#100 assign a = 4'b0111; b = 4'b1010;
		
		// (-5) * (-6) = (+30) = 0011110
		#100 assign a = 4'b1101; b = 4'b1110;
		
		// (+4) * (+3) = (+12) = 0001100
		#100 assign a = 4'b0100; b = 4'b0011;

	end
      
endmodule

