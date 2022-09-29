module status(full, ready, overflow, wr, rd, fifo_we, fifo_rd, wptr, rptr, clk, rst);
	
	input wr, rd, fifo_we, fifo_rd, clk, rst;
	input[4:0] wptr, rptr;
	
	output full, ready, overflow;
	
	wire fbit_comp, overflow_set;
	wire pointer_equal;
	wire[4:0] pointer_result;
	reg full, ready, overflow;
	
	assign fbit_comp = wptr[4] ^ rptr[4];
	assign pointer_equal = (wptr[3:0] - rptr[3:0]) ? 0 : 1;
	assign pointer_result = wptr[4:0] - rptr[4:0];
	assign overflow_set = full & wr;
	
	always @(*)
	begin
		full = fbit_comp & pointer_equal;
		ready = (~fbit_comp) & pointer_equal;
	end
	
	always @(posedge clk or negedge rst)
	begin
		if(~rst)
			overflow <= 0;
		else if((overflow_set == 1) && (fifo_rd == 0))
			overflow <= 1;
		else if(fifo_rd)
			overflow <= 0;
		else
			overflow <= overflow;
	end
	
endmodule