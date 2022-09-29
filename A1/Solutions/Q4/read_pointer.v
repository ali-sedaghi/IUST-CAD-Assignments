module read_pointer(rptr, fifo_rd, rd, ready, clk, rst);

	input rd, ready, clk, rst;
	
	output[4:0] rptr;
	output fifo_rd;
	
	reg[4:0] rptr;
	
	assign fifo_rd = (~ready) & rd;
	
	always @(posedge clk or negedge rst)
	begin
	
	if(~rst)
		rptr <= 5'b000000;
	else if(fifo_rd)
		rptr <= rptr + 5'b000001;
	else
		rptr <= rptr;
	end
endmodule