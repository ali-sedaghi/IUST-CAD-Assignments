////Testbench
`timescale 1ns / 1ps
module CarryLookAhead16_tb;
  reg [15:0] a,b;
  reg cin;
  wire [15:0] sum;
  wire cout;
 
  CarryLookAhead16 uut(.a(a), .b(b),.cin(cin),.sum(sum),.cout(cout));
 
initial begin
  a=0; b=0; cin=0;
  #10 a=16'd0; b=16'd0; cin=1'd1;
  #10 a=16'd14; b=16'd1; cin=1'd1;
  #10 a=16'd5; b=16'd0; cin=1'd0;
  #10 a=16'd999; b=16'd0; cin=1'd1;
end
 
endmodule