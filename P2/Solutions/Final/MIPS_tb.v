module tb_mips;

	reg clk;
	reg reset;

	MIPS mips(clk, reset);
	
	initial begin
		clk = 0;
		reset = 1;
		#10 reset = 0;
		#6000 $finish;
	end

	initial forever #5 clk = ~clk;

endmodule
