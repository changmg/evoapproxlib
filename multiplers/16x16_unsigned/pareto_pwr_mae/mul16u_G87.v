/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.10 %
// MAE = 4423680 
// WCE% = 0.41 %
// WCE = 17694721 
// WCRE% = 100.00 %
// EP% = 100.00 %
// MRE% = 2.07 %
// MSE = 24400.46e9 
// PDK45_PWR = 0.482 mW
// PDK45_AREA = 746.2 um2
// PDK45_DELAY = 2.03 ns


module mul16u_G87 ( A, B, O );
  input [15:0] A;
  input [15:0] B;
  output [31:0] O;

  wire C_10_10,C_10_11,C_10_12,C_10_13,C_10_14,C_11_10,C_11_11,C_11_12,C_11_13,C_11_14,C_11_9,C_12_10,C_12_11,C_12_12,C_12_13,C_12_14,C_12_8,C_12_9,C_13_10,C_13_11,C_13_12,C_13_13,C_13_14,C_13_7,C_13_8,C_13_9,C_14_10,C_14_11,C_14_12,C_14_13,C_14_14,C_14_6,C_14_7,C_14_8,C_14_9,C_15_10,C_15_11,C_15_12,C_15_13,C_15_14,C_15_5,C_15_6,C_15_7,C_15_8,C_15_9,C_16_10,C_16_11,C_16_12,C_16_13,C_16_14,C_16_5,C_16_6,C_16_7,C_16_8,C_16_9,C_8_12,C_8_13,C_8_14,C_9_11,C_9_12,C_9_13,C_9_14,S_10_10,S_10_11,S_10_12,S_10_13,S_10_14,S_10_15,S_11_10,S_11_11,S_11_12,S_11_13,S_11_14,S_11_15,S_11_9,S_12_10,S_12_11,S_12_12,S_12_13,S_12_14,S_12_15,S_12_8,S_12_9,S_13_10,S_13_11,S_13_12,S_13_13,S_13_14,S_13_15,S_13_7,S_13_8,S_13_9,S_14_10,S_14_11,S_14_12,S_14_13,S_14_14,S_14_15,S_14_6,S_14_7,S_14_8,S_14_9,S_15_10,S_15_11,S_15_12,S_15_13,S_15_14,S_15_15,S_15_5,S_15_6,S_15_7,S_15_8,S_15_9,S_16_10,S_16_11,S_16_12,S_16_13,S_16_14,S_16_15,S_16_4,S_16_5,S_16_6,S_16_7,S_16_8,S_16_9,S_7_13,S_7_14,S_7_15,S_8_12,S_8_13,S_8_14,S_8_15,S_9_11,S_9_12,S_9_13,S_9_14,S_9_15;

  assign S_7_13 = (A[7] & B[13]);
  assign S_7_14 = (A[7] & B[14]);
  assign S_7_15 = (A[7] & B[15]);
  PDKGENHAX1 U183901 (.A(S_7_13), .B((A[8] & B[12])), .YS(S_8_12), .YC(C_8_12));
  PDKGENHAX1 U183902 (.A(S_7_14), .B((A[8] & B[13])), .YS(S_8_13), .YC(C_8_13));
  PDKGENHAX1 U183903 (.A(S_7_15), .B((A[8] & B[14])), .YS(S_8_14), .YC(C_8_14));
  assign S_8_15 = (A[8] & B[15]);
  PDKGENHAX1 U183916 (.A(S_8_12), .B((A[9] & B[11])), .YS(S_9_11), .YC(C_9_11));
  PDKGENFAX1 U183917 (.A(S_8_13), .B(C_8_12), .C((A[9] & B[12])), .YS(S_9_12), .YC(C_9_12));
  PDKGENFAX1 U183918 (.A(S_8_14), .B(C_8_13), .C((A[9] & B[13])), .YS(S_9_13), .YC(C_9_13));
  PDKGENFAX1 U183919 (.A(S_8_15), .B(C_8_14), .C((A[9] & B[14])), .YS(S_9_14), .YC(C_9_14));
  assign S_9_15 = (A[9] & B[15]);
  PDKGENHAX1 U183931 (.A(S_9_11), .B((A[10] & B[10])), .YS(S_10_10), .YC(C_10_10));
  PDKGENFAX1 U183932 (.A(S_9_12), .B(C_9_11), .C((A[10] & B[11])), .YS(S_10_11), .YC(C_10_11));
  PDKGENFAX1 U183933 (.A(S_9_13), .B(C_9_12), .C((A[10] & B[12])), .YS(S_10_12), .YC(C_10_12));
  PDKGENFAX1 U183934 (.A(S_9_14), .B(C_9_13), .C((A[10] & B[13])), .YS(S_10_13), .YC(C_10_13));
  PDKGENFAX1 U183935 (.A(S_9_15), .B(C_9_14), .C((A[10] & B[14])), .YS(S_10_14), .YC(C_10_14));
  assign S_10_15 = (A[10] & B[15]);
  PDKGENHAX1 U183946 (.A(S_10_10), .B((A[11] & B[9])), .YS(S_11_9), .YC(C_11_9));
  PDKGENFAX1 U183947 (.A(S_10_11), .B(C_10_10), .C((A[11] & B[10])), .YS(S_11_10), .YC(C_11_10));
  PDKGENFAX1 U183948 (.A(S_10_12), .B(C_10_11), .C((A[11] & B[11])), .YS(S_11_11), .YC(C_11_11));
  PDKGENFAX1 U183949 (.A(S_10_13), .B(C_10_12), .C((A[11] & B[12])), .YS(S_11_12), .YC(C_11_12));
  PDKGENFAX1 U183950 (.A(S_10_14), .B(C_10_13), .C((A[11] & B[13])), .YS(S_11_13), .YC(C_11_13));
  PDKGENFAX1 U183951 (.A(S_10_15), .B(C_10_14), .C((A[11] & B[14])), .YS(S_11_14), .YC(C_11_14));
  assign S_11_15 = (A[11] & B[15]);
  PDKGENHAX1 U183961 (.A(S_11_9), .B((A[12] & B[8])), .YS(S_12_8), .YC(C_12_8));
  PDKGENFAX1 U183962 (.A(S_11_10), .B(C_11_9), .C((A[12] & B[9])), .YS(S_12_9), .YC(C_12_9));
  PDKGENFAX1 U183963 (.A(S_11_11), .B(C_11_10), .C((A[12] & B[10])), .YS(S_12_10), .YC(C_12_10));
  PDKGENFAX1 U183964 (.A(S_11_12), .B(C_11_11), .C((A[12] & B[11])), .YS(S_12_11), .YC(C_12_11));
  PDKGENFAX1 U183965 (.A(S_11_13), .B(C_11_12), .C((A[12] & B[12])), .YS(S_12_12), .YC(C_12_12));
  PDKGENFAX1 U183966 (.A(S_11_14), .B(C_11_13), .C((A[12] & B[13])), .YS(S_12_13), .YC(C_12_13));
  PDKGENFAX1 U183967 (.A(S_11_15), .B(C_11_14), .C((A[12] & B[14])), .YS(S_12_14), .YC(C_12_14));
  assign S_12_15 = (A[12] & B[15]);
  PDKGENHAX1 U183976 (.A(S_12_8), .B((A[13] & B[7])), .YS(S_13_7), .YC(C_13_7));
  PDKGENFAX1 U183977 (.A(S_12_9), .B(C_12_8), .C((A[13] & B[8])), .YS(S_13_8), .YC(C_13_8));
  PDKGENFAX1 U183978 (.A(S_12_10), .B(C_12_9), .C((A[13] & B[9])), .YS(S_13_9), .YC(C_13_9));
  PDKGENFAX1 U183979 (.A(S_12_11), .B(C_12_10), .C((A[13] & B[10])), .YS(S_13_10), .YC(C_13_10));
  PDKGENFAX1 U183980 (.A(S_12_12), .B(C_12_11), .C((A[13] & B[11])), .YS(S_13_11), .YC(C_13_11));
  PDKGENFAX1 U183981 (.A(S_12_13), .B(C_12_12), .C((A[13] & B[12])), .YS(S_13_12), .YC(C_13_12));
  PDKGENFAX1 U183982 (.A(S_12_14), .B(C_12_13), .C((A[13] & B[13])), .YS(S_13_13), .YC(C_13_13));
  PDKGENFAX1 U183983 (.A(S_12_15), .B(C_12_14), .C((A[13] & B[14])), .YS(S_13_14), .YC(C_13_14));
  assign S_13_15 = (A[13] & B[15]);
  PDKGENHAX1 U183991 (.A(S_13_7), .B((A[14] & B[6])), .YS(S_14_6), .YC(C_14_6));
  PDKGENFAX1 U183992 (.A(S_13_8), .B(C_13_7), .C((A[14] & B[7])), .YS(S_14_7), .YC(C_14_7));
  PDKGENFAX1 U183993 (.A(S_13_9), .B(C_13_8), .C((A[14] & B[8])), .YS(S_14_8), .YC(C_14_8));
  PDKGENFAX1 U183994 (.A(S_13_10), .B(C_13_9), .C((A[14] & B[9])), .YS(S_14_9), .YC(C_14_9));
  PDKGENFAX1 U183995 (.A(S_13_11), .B(C_13_10), .C((A[14] & B[10])), .YS(S_14_10), .YC(C_14_10));
  PDKGENFAX1 U183996 (.A(S_13_12), .B(C_13_11), .C((A[14] & B[11])), .YS(S_14_11), .YC(C_14_11));
  PDKGENFAX1 U183997 (.A(S_13_13), .B(C_13_12), .C((A[14] & B[12])), .YS(S_14_12), .YC(C_14_12));
  PDKGENFAX1 U183998 (.A(S_13_14), .B(C_13_13), .C((A[14] & B[13])), .YS(S_14_13), .YC(C_14_13));
  PDKGENFAX1 U183999 (.A(S_13_15), .B(C_13_14), .C((A[14] & B[14])), .YS(S_14_14), .YC(C_14_14));
  assign S_14_15 = (A[14] & B[15]);
  PDKGENHAX1 U184006 (.A(S_14_6), .B((A[15] & B[5])), .YS(S_15_5), .YC(C_15_5));
  PDKGENFAX1 U184007 (.A(S_14_7), .B(C_14_6), .C((A[15] & B[6])), .YS(S_15_6), .YC(C_15_6));
  PDKGENFAX1 U184008 (.A(S_14_8), .B(C_14_7), .C((A[15] & B[7])), .YS(S_15_7), .YC(C_15_7));
  PDKGENFAX1 U184009 (.A(S_14_9), .B(C_14_8), .C((A[15] & B[8])), .YS(S_15_8), .YC(C_15_8));
  PDKGENFAX1 U184010 (.A(S_14_10), .B(C_14_9), .C((A[15] & B[9])), .YS(S_15_9), .YC(C_15_9));
  PDKGENFAX1 U184011 (.A(S_14_11), .B(C_14_10), .C((A[15] & B[10])), .YS(S_15_10), .YC(C_15_10));
  PDKGENFAX1 U184012 (.A(S_14_12), .B(C_14_11), .C((A[15] & B[11])), .YS(S_15_11), .YC(C_15_11));
  PDKGENFAX1 U184013 (.A(S_14_13), .B(C_14_12), .C((A[15] & B[12])), .YS(S_15_12), .YC(C_15_12));
  PDKGENFAX1 U184014 (.A(S_14_14), .B(C_14_13), .C((A[15] & B[13])), .YS(S_15_13), .YC(C_15_13));
  PDKGENFAX1 U184015 (.A(S_14_15), .B(C_14_14), .C((A[15] & B[14])), .YS(S_15_14), .YC(C_15_14));
  assign S_15_15 = (A[15] & B[15]);
  assign S_16_4 = S_15_5;
  PDKGENHAX1 U184022 (.A(S_15_6), .B(C_15_5), .YS(S_16_5), .YC(C_16_5));
  PDKGENFAX1 U184023 (.A(S_15_7), .B(C_16_5), .C(C_15_6), .YS(S_16_6), .YC(C_16_6));
  PDKGENFAX1 U184024 (.A(S_15_8), .B(C_16_6), .C(C_15_7), .YS(S_16_7), .YC(C_16_7));
  PDKGENFAX1 U184025 (.A(S_15_9), .B(C_16_7), .C(C_15_8), .YS(S_16_8), .YC(C_16_8));
  PDKGENFAX1 U184026 (.A(S_15_10), .B(C_16_8), .C(C_15_9), .YS(S_16_9), .YC(C_16_9));
  PDKGENFAX1 U184027 (.A(S_15_11), .B(C_16_9), .C(C_15_10), .YS(S_16_10), .YC(C_16_10));
  PDKGENFAX1 U184028 (.A(S_15_12), .B(C_16_10), .C(C_15_11), .YS(S_16_11), .YC(C_16_11));
  PDKGENFAX1 U184029 (.A(S_15_13), .B(C_16_11), .C(C_15_12), .YS(S_16_12), .YC(C_16_12));
  PDKGENFAX1 U184030 (.A(S_15_14), .B(C_16_12), .C(C_15_13), .YS(S_16_13), .YC(C_16_13));
  PDKGENFAX1 U184031 (.A(S_15_15), .B(C_16_13), .C(C_15_14), .YS(S_16_14), .YC(C_16_14));
  assign S_16_15 = C_16_14;
  assign O = {S_16_15,S_16_14,S_16_13,S_16_12,S_16_11,S_16_10,S_16_9,S_16_8,S_16_7,S_16_6,S_16_5,S_16_4,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0};

endmodule

/* mod */
module PDKGENHAX1( input A, input B, output YS, output YC );
    assign YS = A ^ B;
    assign YC = A & B;
endmodule
/* mod */
module PDKGENFAX1( input A, input B, input C, output YS, output YC );
    assign YS = (A ^ B) ^ C;
    assign YC = (A & B) | (B & C) | (A & C);
endmodule
