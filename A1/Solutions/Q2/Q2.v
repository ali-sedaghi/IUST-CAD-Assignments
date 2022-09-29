`timescale 1ns / 1ps

module Encoder(a, x, y, z);

input[7:0] a;

output reg [0:0] x;
output reg [0:0] y;
output reg [0:0] z;

always @ (a) begin

if (a[0] == 1'b1) begin
 x <= 1'b0;
 y <= 1'b0;
 z <= 1'b0;
end

else if (a[1] == 1'b1) begin
 x <= 1'b0;
 y <= 1'b0;
 z <= 1'b1;

end

else if (a[2] == 1'b1) begin
 x <= 1'b0;
 y <= 1'b1;
 z <= 1'b0;

end

else if (a[3] == 1'b1) begin
 x <= 1'b0;
 y <= 1'b1;
 z <= 1'b1;

end

else if (a[4] == 1'b1) begin
 x <= 1'b1;
 y <= 1'b0;
 z <= 1'b0;

end

else if (a[5] == 1'b1) begin
 x <= 1'b1;
 y <= 1'b0;
 z <= 1'b1;

end

else if (a[6] == 1'b1) begin
 x <= 1'b1;
 y <= 1'b1;
 z <= 1'b0;

end

else begin
 x <= 1'b1;
 y <= 1'b1;
 z <= 1'b1;

end

end 

endmodule
