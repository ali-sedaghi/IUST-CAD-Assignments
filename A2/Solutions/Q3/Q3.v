`timescale 1ns / 1ps
module CarryLookAhead16(a,b, cin, sum,cout);
input [15:0] a,b;
input cin;
output [15:0] sum;
output cout;
wire c1,c2,c3;
 
CarryLookAhead4 cla1(a[3:0], b[3:0], cin, sum[3:0], c1);
CarryLookAhead4 cla2(a[7:4], b[7:4], c1, sum[7:4], c2);
CarryLookAhead4 cla3(a[11:8], b[11:8], c2, sum[11:8], c3);
CarryLookAhead4 cla4(a[15:12], b[15:12], c3, sum[15:12], cout);

endmodule
 

module CarryLookAhead4(a,b, cin, sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
 
wire [3:0] p,g,c;
assign p=a^b;
assign g=a&b;
 
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&c[0]);
assign c[2]= g[1] | (p[1]&g[0]) | p[1]&p[0]&c[0];
assign c[3]= g[2] | (p[2]&g[1]) | p[2]&p[1]&g[0] | p[2]&p[1]&p[0]&c[0];
assign cout= g[3] | (p[3]&g[2]) | p[3]&p[2]&g[1] | p[3]&p[2]&p[1]&g[0] | p[3]&p[2]&p[1]&p[0]&c[0];
assign sum=p^c;
 
endmodule