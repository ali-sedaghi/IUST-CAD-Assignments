module write_pointer(wptr, fifo_we, wr, full, clk, rst);

	input wr, full, clk, rst;
	
	output[4:0] wptr;
	output fifo_we;
	
	reg[4:0] wptr;
	
	assign fifo_we = (~full) & wr;
	
	always @(posedge clk or negedge rst)
	begin
	
   if(~rst)
		wptr <= 5'b000000;
   else if(fifo_we)
		wptr <= wptr + 5'b000001;
	else
		wptr <= wptr;
	end
	
endmodule