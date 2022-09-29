module fifo(data_out, full, ready, overflow, clk, rst, wr, rd, data_in);

	input wr, rd, clk, rst;
	input[7:0] data_in;
	
	output[7:0] data_out;
	output full, ready, overflow;
	
	wire[4:0] wptr,rptr;
	wire fifo_we, fifo_rd;
	
	write_pointer top1(wptr, fifo_we, wr, full, clk, rst);
	read_pointer top2(rptr, fifo_rd, rd, ready, clk, rst);
	memory top3(data_out, data_in, clk, fifo_we, wptr, rptr);
	status top4(full, ready, overflow, wr, rd, fifo_we, fifo_rd, wptr, rptr, clk, rst);
	
endmodule