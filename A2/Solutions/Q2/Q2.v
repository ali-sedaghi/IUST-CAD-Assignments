`timescale 1ns / 1ps
module FullAdder(x1, x2, Cin, S, Cout);
  input x1, x2, Cin;
  output S, Cout;
  wire w1,w2,w3;
  xor G1(w1, x1, x2);
  xor G2(S, w1, Cin);
  and G3(w2, w1, Cin);
  and G4(w3, x1, x2);
  or G5(Cout, w2, w3);
endmodule

module RippleCarryAdder(input [3 : 0] First, input [3 : 0] Second, input Cin, output [3 : 0] Result, output Cout);

  wire W1, W2, W3;
  FullAdder FullAdder1 (First[0], Second[0], Cin, Result[0], W1);
  FullAdder FullAdder2 (First[1], Second[1], W1, Result[1], W2);
  FullAdder FullAdder3 (First[2], Second[2], W2, Result[2], W3);
  FullAdder FullAdder4 (First[3], Second[3], W3, Result[3], Cout);

endmodule


module SubOrAdd( input [3 : 0] a, input [3 : 0] b, input Cin, input sub, output [3 : 0] S, output Cout);

   wire [3 : 0] i;
   xor u1(i[0],b[0],sub);
   xor u2(i[1],b[1],sub);
   xor u3(i[2],b[2],sub);
   xor u4(i[3],b[3],sub); 

   wire ci;
   xor u5(ci,Cin,sub); 
   RippleCarryAdder MyRippleCarryAdder (i, a, ci, S, Cout);
endmodule

