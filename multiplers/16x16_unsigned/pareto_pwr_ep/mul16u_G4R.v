/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.0027 %
// MAE = 114688 
// WCE% = 0.011 %
// WCE = 458753 
// WCRE% = 100.00 %
// EP% = 90.62 %
// MRE% = 0.058 %
// MSE = 25053.861e6 
// PDK45_PWR = 1.859 mW
// PDK45_AREA = 2332.4 um2
// PDK45_DELAY = 2.84 ns


module mul16u_G4R ( A, B, O );
  input [15:0] A;
  input [15:0] B;
  output [31:0] O;

  wire C_10_0,C_10_1,C_10_10,C_10_11,C_10_12,C_10_13,C_10_14,C_10_2,C_10_3,C_10_4,C_10_5,C_10_6,C_10_7,C_10_8,C_10_9,C_11_0,C_11_1,C_11_10,C_11_11,C_11_12,C_11_13,C_11_14,C_11_2,C_11_3,C_11_4,C_11_5,C_11_6,C_11_7,C_11_8,C_11_9,C_12_0,C_12_1,C_12_10,C_12_11,C_12_12,C_12_13,C_12_14,C_12_2,C_12_3,C_12_4,C_12_5,C_12_6,C_12_7,C_12_8,C_12_9,C_13_0,C_13_1,C_13_10,C_13_11,C_13_12,C_13_13,C_13_14,C_13_2,C_13_3,C_13_4,C_13_5,C_13_6,C_13_7,C_13_8,C_13_9,C_14_0,C_14_1,C_14_10,C_14_11,C_14_12,C_14_13,C_14_14,C_14_2,C_14_3,C_14_4,C_14_5,C_14_6,C_14_7,C_14_8,C_14_9,C_15_0,C_15_1,C_15_10,C_15_11,C_15_12,C_15_13,C_15_14,C_15_2,C_15_3,C_15_4,C_15_5,C_15_6,C_15_7,C_15_8,C_15_9,C_16_0,C_16_1,C_16_10,C_16_11,C_16_12,C_16_13,C_16_14,C_16_2,C_16_3,C_16_4,C_16_5,C_16_6,C_16_7,C_16_8,C_16_9,C_4_0,C_4_1,C_4_10,C_4_11,C_4_12,C_4_13,C_4_14,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_4_8,C_4_9,C_5_0,C_5_1,C_5_10,C_5_11,C_5_12,C_5_13,C_5_14,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_5_8,C_5_9,C_6_0,C_6_1,C_6_10,C_6_11,C_6_12,C_6_13,C_6_14,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_6_8,C_6_9,C_7_0,C_7_1,C_7_10,C_7_11,C_7_12,C_7_13,C_7_14,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_7_8,C_7_9,C_8_0,C_8_1,C_8_10,C_8_11,C_8_12,C_8_13,C_8_14,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,C_8_8,C_8_9,C_9_0,C_9_1,C_9_10,C_9_11,C_9_12,C_9_13,C_9_14,C_9_2,C_9_3,C_9_4,C_9_5,C_9_6,C_9_7,C_9_8,C_9_9,S_10_0,S_10_1,S_10_10,S_10_11,S_10_12,S_10_13,S_10_14,S_10_15,S_10_2,S_10_3,S_10_4,S_10_5,S_10_6,S_10_7,S_10_8,S_10_9,S_11_0,S_11_1,S_11_10,S_11_11,S_11_12,S_11_13,S_11_14,S_11_15,S_11_2,S_11_3,S_11_4,S_11_5,S_11_6,S_11_7,S_11_8,S_11_9,S_12_0,S_12_1,S_12_10,S_12_11,S_12_12,S_12_13,S_12_14,S_12_15,S_12_2,S_12_3,S_12_4,S_12_5,S_12_6,S_12_7,S_12_8,S_12_9,S_13_0,S_13_1,S_13_10,S_13_11,S_13_12,S_13_13,S_13_14,S_13_15,S_13_2,S_13_3,S_13_4,S_13_5,S_13_6,S_13_7,S_13_8,S_13_9,S_14_0,S_14_1,S_14_10,S_14_11,S_14_12,S_14_13,S_14_14,S_14_15,S_14_2,S_14_3,S_14_4,S_14_5,S_14_6,S_14_7,S_14_8,S_14_9,S_15_0,S_15_1,S_15_10,S_15_11,S_15_12,S_15_13,S_15_14,S_15_15,S_15_2,S_15_3,S_15_4,S_15_5,S_15_6,S_15_7,S_15_8,S_15_9,S_16_0,S_16_1,S_16_10,S_16_11,S_16_12,S_16_13,S_16_14,S_16_15,S_16_2,S_16_3,S_16_4,S_16_5,S_16_6,S_16_7,S_16_8,S_16_9,S_3_1,S_3_10,S_3_11,S_3_12,S_3_13,S_3_14,S_3_15,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_3_8,S_3_9,S_4_0,S_4_1,S_4_10,S_4_11,S_4_12,S_4_13,S_4_14,S_4_15,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_4_8,S_4_9,S_5_0,S_5_1,S_5_10,S_5_11,S_5_12,S_5_13,S_5_14,S_5_15,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_5_8,S_5_9,S_6_0,S_6_1,S_6_10,S_6_11,S_6_12,S_6_13,S_6_14,S_6_15,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_6_8,S_6_9,S_7_0,S_7_1,S_7_10,S_7_11,S_7_12,S_7_13,S_7_14,S_7_15,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_7_8,S_7_9,S_8_0,S_8_1,S_8_10,S_8_11,S_8_12,S_8_13,S_8_14,S_8_15,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7,S_8_8,S_8_9,S_9_0,S_9_1,S_9_10,S_9_11,S_9_12,S_9_13,S_9_14,S_9_15,S_9_2,S_9_3,S_9_4,S_9_5,S_9_6,S_9_7,S_9_8,S_9_9;

  assign S_3_1 = (A[3] & B[1]);
  assign S_3_2 = (A[3] & B[2]);
  assign S_3_3 = (A[3] & B[3]);
  assign S_3_4 = (A[3] & B[4]);
  assign S_3_5 = (A[3] & B[5]);
  assign S_3_6 = (A[3] & B[6]);
  assign S_3_7 = (A[3] & B[7]);
  assign S_3_8 = (A[3] & B[8]);
  assign S_3_9 = (A[3] & B[9]);
  assign S_3_10 = (A[3] & B[10]);
  assign S_3_11 = (A[3] & B[11]);
  assign S_3_12 = (A[3] & B[12]);
  assign S_3_13 = (A[3] & B[13]);
  assign S_3_14 = (A[3] & B[14]);
  assign S_3_15 = (A[3] & B[15]);
  PDKGENHAX1 U121809 (.A(S_3_1), .B((A[4] & B[0])), .YS(S_4_0), .YC(C_4_0));
  PDKGENHAX1 U121810 (.A(S_3_2), .B((A[4] & B[1])), .YS(S_4_1), .YC(C_4_1));
  PDKGENHAX1 U121811 (.A(S_3_3), .B((A[4] & B[2])), .YS(S_4_2), .YC(C_4_2));
  PDKGENHAX1 U121812 (.A(S_3_4), .B((A[4] & B[3])), .YS(S_4_3), .YC(C_4_3));
  PDKGENHAX1 U121813 (.A(S_3_5), .B((A[4] & B[4])), .YS(S_4_4), .YC(C_4_4));
  PDKGENHAX1 U121814 (.A(S_3_6), .B((A[4] & B[5])), .YS(S_4_5), .YC(C_4_5));
  PDKGENHAX1 U121815 (.A(S_3_7), .B((A[4] & B[6])), .YS(S_4_6), .YC(C_4_6));
  PDKGENHAX1 U121816 (.A(S_3_8), .B((A[4] & B[7])), .YS(S_4_7), .YC(C_4_7));
  PDKGENHAX1 U121817 (.A(S_3_9), .B((A[4] & B[8])), .YS(S_4_8), .YC(C_4_8));
  PDKGENHAX1 U121818 (.A(S_3_10), .B((A[4] & B[9])), .YS(S_4_9), .YC(C_4_9));
  PDKGENHAX1 U121819 (.A(S_3_11), .B((A[4] & B[10])), .YS(S_4_10), .YC(C_4_10));
  PDKGENHAX1 U121820 (.A(S_3_12), .B((A[4] & B[11])), .YS(S_4_11), .YC(C_4_11));
  PDKGENHAX1 U121821 (.A(S_3_13), .B((A[4] & B[12])), .YS(S_4_12), .YC(C_4_12));
  PDKGENHAX1 U121822 (.A(S_3_14), .B((A[4] & B[13])), .YS(S_4_13), .YC(C_4_13));
  PDKGENHAX1 U121823 (.A(S_3_15), .B((A[4] & B[14])), .YS(S_4_14), .YC(C_4_14));
  assign S_4_15 = (A[4] & B[15]);
  PDKGENFAX1 U121825 (.A(S_4_1), .B(C_4_0), .C((A[5] & B[0])), .YS(S_5_0), .YC(C_5_0));
  PDKGENFAX1 U121826 (.A(S_4_2), .B(C_4_1), .C((A[5] & B[1])), .YS(S_5_1), .YC(C_5_1));
  PDKGENFAX1 U121827 (.A(S_4_3), .B(C_4_2), .C((A[5] & B[2])), .YS(S_5_2), .YC(C_5_2));
  PDKGENFAX1 U121828 (.A(S_4_4), .B(C_4_3), .C((A[5] & B[3])), .YS(S_5_3), .YC(C_5_3));
  PDKGENFAX1 U121829 (.A(S_4_5), .B(C_4_4), .C((A[5] & B[4])), .YS(S_5_4), .YC(C_5_4));
  PDKGENFAX1 U121830 (.A(S_4_6), .B(C_4_5), .C((A[5] & B[5])), .YS(S_5_5), .YC(C_5_5));
  PDKGENFAX1 U121831 (.A(S_4_7), .B(C_4_6), .C((A[5] & B[6])), .YS(S_5_6), .YC(C_5_6));
  PDKGENFAX1 U121832 (.A(S_4_8), .B(C_4_7), .C((A[5] & B[7])), .YS(S_5_7), .YC(C_5_7));
  PDKGENFAX1 U121833 (.A(S_4_9), .B(C_4_8), .C((A[5] & B[8])), .YS(S_5_8), .YC(C_5_8));
  PDKGENFAX1 U121834 (.A(S_4_10), .B(C_4_9), .C((A[5] & B[9])), .YS(S_5_9), .YC(C_5_9));
  PDKGENFAX1 U121835 (.A(S_4_11), .B(C_4_10), .C((A[5] & B[10])), .YS(S_5_10), .YC(C_5_10));
  PDKGENFAX1 U121836 (.A(S_4_12), .B(C_4_11), .C((A[5] & B[11])), .YS(S_5_11), .YC(C_5_11));
  PDKGENFAX1 U121837 (.A(S_4_13), .B(C_4_12), .C((A[5] & B[12])), .YS(S_5_12), .YC(C_5_12));
  PDKGENFAX1 U121838 (.A(S_4_14), .B(C_4_13), .C((A[5] & B[13])), .YS(S_5_13), .YC(C_5_13));
  PDKGENFAX1 U121839 (.A(S_4_15), .B(C_4_14), .C((A[5] & B[14])), .YS(S_5_14), .YC(C_5_14));
  assign S_5_15 = (A[5] & B[15]);
  PDKGENFAX1 U121841 (.A(S_5_1), .B(C_5_0), .C((A[6] & B[0])), .YS(S_6_0), .YC(C_6_0));
  PDKGENFAX1 U121842 (.A(S_5_2), .B(C_5_1), .C((A[6] & B[1])), .YS(S_6_1), .YC(C_6_1));
  PDKGENFAX1 U121843 (.A(S_5_3), .B(C_5_2), .C((A[6] & B[2])), .YS(S_6_2), .YC(C_6_2));
  PDKGENFAX1 U121844 (.A(S_5_4), .B(C_5_3), .C((A[6] & B[3])), .YS(S_6_3), .YC(C_6_3));
  PDKGENFAX1 U121845 (.A(S_5_5), .B(C_5_4), .C((A[6] & B[4])), .YS(S_6_4), .YC(C_6_4));
  PDKGENFAX1 U121846 (.A(S_5_6), .B(C_5_5), .C((A[6] & B[5])), .YS(S_6_5), .YC(C_6_5));
  PDKGENFAX1 U121847 (.A(S_5_7), .B(C_5_6), .C((A[6] & B[6])), .YS(S_6_6), .YC(C_6_6));
  PDKGENFAX1 U121848 (.A(S_5_8), .B(C_5_7), .C((A[6] & B[7])), .YS(S_6_7), .YC(C_6_7));
  PDKGENFAX1 U121849 (.A(S_5_9), .B(C_5_8), .C((A[6] & B[8])), .YS(S_6_8), .YC(C_6_8));
  PDKGENFAX1 U121850 (.A(S_5_10), .B(C_5_9), .C((A[6] & B[9])), .YS(S_6_9), .YC(C_6_9));
  PDKGENFAX1 U121851 (.A(S_5_11), .B(C_5_10), .C((A[6] & B[10])), .YS(S_6_10), .YC(C_6_10));
  PDKGENFAX1 U121852 (.A(S_5_12), .B(C_5_11), .C((A[6] & B[11])), .YS(S_6_11), .YC(C_6_11));
  PDKGENFAX1 U121853 (.A(S_5_13), .B(C_5_12), .C((A[6] & B[12])), .YS(S_6_12), .YC(C_6_12));
  PDKGENFAX1 U121854 (.A(S_5_14), .B(C_5_13), .C((A[6] & B[13])), .YS(S_6_13), .YC(C_6_13));
  PDKGENFAX1 U121855 (.A(S_5_15), .B(C_5_14), .C((A[6] & B[14])), .YS(S_6_14), .YC(C_6_14));
  assign S_6_15 = (A[6] & B[15]);
  PDKGENFAX1 U121857 (.A(S_6_1), .B(C_6_0), .C((A[7] & B[0])), .YS(S_7_0), .YC(C_7_0));
  PDKGENFAX1 U121858 (.A(S_6_2), .B(C_6_1), .C((A[7] & B[1])), .YS(S_7_1), .YC(C_7_1));
  PDKGENFAX1 U121859 (.A(S_6_3), .B(C_6_2), .C((A[7] & B[2])), .YS(S_7_2), .YC(C_7_2));
  PDKGENFAX1 U121860 (.A(S_6_4), .B(C_6_3), .C((A[7] & B[3])), .YS(S_7_3), .YC(C_7_3));
  PDKGENFAX1 U121861 (.A(S_6_5), .B(C_6_4), .C((A[7] & B[4])), .YS(S_7_4), .YC(C_7_4));
  PDKGENFAX1 U121862 (.A(S_6_6), .B(C_6_5), .C((A[7] & B[5])), .YS(S_7_5), .YC(C_7_5));
  PDKGENFAX1 U121863 (.A(S_6_7), .B(C_6_6), .C((A[7] & B[6])), .YS(S_7_6), .YC(C_7_6));
  PDKGENFAX1 U121864 (.A(S_6_8), .B(C_6_7), .C((A[7] & B[7])), .YS(S_7_7), .YC(C_7_7));
  PDKGENFAX1 U121865 (.A(S_6_9), .B(C_6_8), .C((A[7] & B[8])), .YS(S_7_8), .YC(C_7_8));
  PDKGENFAX1 U121866 (.A(S_6_10), .B(C_6_9), .C((A[7] & B[9])), .YS(S_7_9), .YC(C_7_9));
  PDKGENFAX1 U121867 (.A(S_6_11), .B(C_6_10), .C((A[7] & B[10])), .YS(S_7_10), .YC(C_7_10));
  PDKGENFAX1 U121868 (.A(S_6_12), .B(C_6_11), .C((A[7] & B[11])), .YS(S_7_11), .YC(C_7_11));
  PDKGENFAX1 U121869 (.A(S_6_13), .B(C_6_12), .C((A[7] & B[12])), .YS(S_7_12), .YC(C_7_12));
  PDKGENFAX1 U121870 (.A(S_6_14), .B(C_6_13), .C((A[7] & B[13])), .YS(S_7_13), .YC(C_7_13));
  PDKGENFAX1 U121871 (.A(S_6_15), .B(C_6_14), .C((A[7] & B[14])), .YS(S_7_14), .YC(C_7_14));
  assign S_7_15 = (A[7] & B[15]);
  PDKGENFAX1 U121873 (.A(S_7_1), .B(C_7_0), .C((A[8] & B[0])), .YS(S_8_0), .YC(C_8_0));
  PDKGENFAX1 U121874 (.A(S_7_2), .B(C_7_1), .C((A[8] & B[1])), .YS(S_8_1), .YC(C_8_1));
  PDKGENFAX1 U121875 (.A(S_7_3), .B(C_7_2), .C((A[8] & B[2])), .YS(S_8_2), .YC(C_8_2));
  PDKGENFAX1 U121876 (.A(S_7_4), .B(C_7_3), .C((A[8] & B[3])), .YS(S_8_3), .YC(C_8_3));
  PDKGENFAX1 U121877 (.A(S_7_5), .B(C_7_4), .C((A[8] & B[4])), .YS(S_8_4), .YC(C_8_4));
  PDKGENFAX1 U121878 (.A(S_7_6), .B(C_7_5), .C((A[8] & B[5])), .YS(S_8_5), .YC(C_8_5));
  PDKGENFAX1 U121879 (.A(S_7_7), .B(C_7_6), .C((A[8] & B[6])), .YS(S_8_6), .YC(C_8_6));
  PDKGENFAX1 U121880 (.A(S_7_8), .B(C_7_7), .C((A[8] & B[7])), .YS(S_8_7), .YC(C_8_7));
  PDKGENFAX1 U121881 (.A(S_7_9), .B(C_7_8), .C((A[8] & B[8])), .YS(S_8_8), .YC(C_8_8));
  PDKGENFAX1 U121882 (.A(S_7_10), .B(C_7_9), .C((A[8] & B[9])), .YS(S_8_9), .YC(C_8_9));
  PDKGENFAX1 U121883 (.A(S_7_11), .B(C_7_10), .C((A[8] & B[10])), .YS(S_8_10), .YC(C_8_10));
  PDKGENFAX1 U121884 (.A(S_7_12), .B(C_7_11), .C((A[8] & B[11])), .YS(S_8_11), .YC(C_8_11));
  PDKGENFAX1 U121885 (.A(S_7_13), .B(C_7_12), .C((A[8] & B[12])), .YS(S_8_12), .YC(C_8_12));
  PDKGENFAX1 U121886 (.A(S_7_14), .B(C_7_13), .C((A[8] & B[13])), .YS(S_8_13), .YC(C_8_13));
  PDKGENFAX1 U121887 (.A(S_7_15), .B(C_7_14), .C((A[8] & B[14])), .YS(S_8_14), .YC(C_8_14));
  assign S_8_15 = (A[8] & B[15]);
  PDKGENFAX1 U121889 (.A(S_8_1), .B(C_8_0), .C((A[9] & B[0])), .YS(S_9_0), .YC(C_9_0));
  PDKGENFAX1 U121890 (.A(S_8_2), .B(C_8_1), .C((A[9] & B[1])), .YS(S_9_1), .YC(C_9_1));
  PDKGENFAX1 U121891 (.A(S_8_3), .B(C_8_2), .C((A[9] & B[2])), .YS(S_9_2), .YC(C_9_2));
  PDKGENFAX1 U121892 (.A(S_8_4), .B(C_8_3), .C((A[9] & B[3])), .YS(S_9_3), .YC(C_9_3));
  PDKGENFAX1 U121893 (.A(S_8_5), .B(C_8_4), .C((A[9] & B[4])), .YS(S_9_4), .YC(C_9_4));
  PDKGENFAX1 U121894 (.A(S_8_6), .B(C_8_5), .C((A[9] & B[5])), .YS(S_9_5), .YC(C_9_5));
  PDKGENFAX1 U121895 (.A(S_8_7), .B(C_8_6), .C((A[9] & B[6])), .YS(S_9_6), .YC(C_9_6));
  PDKGENFAX1 U121896 (.A(S_8_8), .B(C_8_7), .C((A[9] & B[7])), .YS(S_9_7), .YC(C_9_7));
  PDKGENFAX1 U121897 (.A(S_8_9), .B(C_8_8), .C((A[9] & B[8])), .YS(S_9_8), .YC(C_9_8));
  PDKGENFAX1 U121898 (.A(S_8_10), .B(C_8_9), .C((A[9] & B[9])), .YS(S_9_9), .YC(C_9_9));
  PDKGENFAX1 U121899 (.A(S_8_11), .B(C_8_10), .C((A[9] & B[10])), .YS(S_9_10), .YC(C_9_10));
  PDKGENFAX1 U121900 (.A(S_8_12), .B(C_8_11), .C((A[9] & B[11])), .YS(S_9_11), .YC(C_9_11));
  PDKGENFAX1 U121901 (.A(S_8_13), .B(C_8_12), .C((A[9] & B[12])), .YS(S_9_12), .YC(C_9_12));
  PDKGENFAX1 U121902 (.A(S_8_14), .B(C_8_13), .C((A[9] & B[13])), .YS(S_9_13), .YC(C_9_13));
  PDKGENFAX1 U121903 (.A(S_8_15), .B(C_8_14), .C((A[9] & B[14])), .YS(S_9_14), .YC(C_9_14));
  assign S_9_15 = (A[9] & B[15]);
  PDKGENFAX1 U121905 (.A(S_9_1), .B(C_9_0), .C((A[10] & B[0])), .YS(S_10_0), .YC(C_10_0));
  PDKGENFAX1 U121906 (.A(S_9_2), .B(C_9_1), .C((A[10] & B[1])), .YS(S_10_1), .YC(C_10_1));
  PDKGENFAX1 U121907 (.A(S_9_3), .B(C_9_2), .C((A[10] & B[2])), .YS(S_10_2), .YC(C_10_2));
  PDKGENFAX1 U121908 (.A(S_9_4), .B(C_9_3), .C((A[10] & B[3])), .YS(S_10_3), .YC(C_10_3));
  PDKGENFAX1 U121909 (.A(S_9_5), .B(C_9_4), .C((A[10] & B[4])), .YS(S_10_4), .YC(C_10_4));
  PDKGENFAX1 U121910 (.A(S_9_6), .B(C_9_5), .C((A[10] & B[5])), .YS(S_10_5), .YC(C_10_5));
  PDKGENFAX1 U121911 (.A(S_9_7), .B(C_9_6), .C((A[10] & B[6])), .YS(S_10_6), .YC(C_10_6));
  PDKGENFAX1 U121912 (.A(S_9_8), .B(C_9_7), .C((A[10] & B[7])), .YS(S_10_7), .YC(C_10_7));
  PDKGENFAX1 U121913 (.A(S_9_9), .B(C_9_8), .C((A[10] & B[8])), .YS(S_10_8), .YC(C_10_8));
  PDKGENFAX1 U121914 (.A(S_9_10), .B(C_9_9), .C((A[10] & B[9])), .YS(S_10_9), .YC(C_10_9));
  PDKGENFAX1 U121915 (.A(S_9_11), .B(C_9_10), .C((A[10] & B[10])), .YS(S_10_10), .YC(C_10_10));
  PDKGENFAX1 U121916 (.A(S_9_12), .B(C_9_11), .C((A[10] & B[11])), .YS(S_10_11), .YC(C_10_11));
  PDKGENFAX1 U121917 (.A(S_9_13), .B(C_9_12), .C((A[10] & B[12])), .YS(S_10_12), .YC(C_10_12));
  PDKGENFAX1 U121918 (.A(S_9_14), .B(C_9_13), .C((A[10] & B[13])), .YS(S_10_13), .YC(C_10_13));
  PDKGENFAX1 U121919 (.A(S_9_15), .B(C_9_14), .C((A[10] & B[14])), .YS(S_10_14), .YC(C_10_14));
  assign S_10_15 = (A[10] & B[15]);
  PDKGENFAX1 U121921 (.A(S_10_1), .B(C_10_0), .C((A[11] & B[0])), .YS(S_11_0), .YC(C_11_0));
  PDKGENFAX1 U121922 (.A(S_10_2), .B(C_10_1), .C((A[11] & B[1])), .YS(S_11_1), .YC(C_11_1));
  PDKGENFAX1 U121923 (.A(S_10_3), .B(C_10_2), .C((A[11] & B[2])), .YS(S_11_2), .YC(C_11_2));
  PDKGENFAX1 U121924 (.A(S_10_4), .B(C_10_3), .C((A[11] & B[3])), .YS(S_11_3), .YC(C_11_3));
  PDKGENFAX1 U121925 (.A(S_10_5), .B(C_10_4), .C((A[11] & B[4])), .YS(S_11_4), .YC(C_11_4));
  PDKGENFAX1 U121926 (.A(S_10_6), .B(C_10_5), .C((A[11] & B[5])), .YS(S_11_5), .YC(C_11_5));
  PDKGENFAX1 U121927 (.A(S_10_7), .B(C_10_6), .C((A[11] & B[6])), .YS(S_11_6), .YC(C_11_6));
  PDKGENFAX1 U121928 (.A(S_10_8), .B(C_10_7), .C((A[11] & B[7])), .YS(S_11_7), .YC(C_11_7));
  PDKGENFAX1 U121929 (.A(S_10_9), .B(C_10_8), .C((A[11] & B[8])), .YS(S_11_8), .YC(C_11_8));
  PDKGENFAX1 U121930 (.A(S_10_10), .B(C_10_9), .C((A[11] & B[9])), .YS(S_11_9), .YC(C_11_9));
  PDKGENFAX1 U121931 (.A(S_10_11), .B(C_10_10), .C((A[11] & B[10])), .YS(S_11_10), .YC(C_11_10));
  PDKGENFAX1 U121932 (.A(S_10_12), .B(C_10_11), .C((A[11] & B[11])), .YS(S_11_11), .YC(C_11_11));
  PDKGENFAX1 U121933 (.A(S_10_13), .B(C_10_12), .C((A[11] & B[12])), .YS(S_11_12), .YC(C_11_12));
  PDKGENFAX1 U121934 (.A(S_10_14), .B(C_10_13), .C((A[11] & B[13])), .YS(S_11_13), .YC(C_11_13));
  PDKGENFAX1 U121935 (.A(S_10_15), .B(C_10_14), .C((A[11] & B[14])), .YS(S_11_14), .YC(C_11_14));
  assign S_11_15 = (A[11] & B[15]);
  PDKGENFAX1 U121937 (.A(S_11_1), .B(C_11_0), .C((A[12] & B[0])), .YS(S_12_0), .YC(C_12_0));
  PDKGENFAX1 U121938 (.A(S_11_2), .B(C_11_1), .C((A[12] & B[1])), .YS(S_12_1), .YC(C_12_1));
  PDKGENFAX1 U121939 (.A(S_11_3), .B(C_11_2), .C((A[12] & B[2])), .YS(S_12_2), .YC(C_12_2));
  PDKGENFAX1 U121940 (.A(S_11_4), .B(C_11_3), .C((A[12] & B[3])), .YS(S_12_3), .YC(C_12_3));
  PDKGENFAX1 U121941 (.A(S_11_5), .B(C_11_4), .C((A[12] & B[4])), .YS(S_12_4), .YC(C_12_4));
  PDKGENFAX1 U121942 (.A(S_11_6), .B(C_11_5), .C((A[12] & B[5])), .YS(S_12_5), .YC(C_12_5));
  PDKGENFAX1 U121943 (.A(S_11_7), .B(C_11_6), .C((A[12] & B[6])), .YS(S_12_6), .YC(C_12_6));
  PDKGENFAX1 U121944 (.A(S_11_8), .B(C_11_7), .C((A[12] & B[7])), .YS(S_12_7), .YC(C_12_7));
  PDKGENFAX1 U121945 (.A(S_11_9), .B(C_11_8), .C((A[12] & B[8])), .YS(S_12_8), .YC(C_12_8));
  PDKGENFAX1 U121946 (.A(S_11_10), .B(C_11_9), .C((A[12] & B[9])), .YS(S_12_9), .YC(C_12_9));
  PDKGENFAX1 U121947 (.A(S_11_11), .B(C_11_10), .C((A[12] & B[10])), .YS(S_12_10), .YC(C_12_10));
  PDKGENFAX1 U121948 (.A(S_11_12), .B(C_11_11), .C((A[12] & B[11])), .YS(S_12_11), .YC(C_12_11));
  PDKGENFAX1 U121949 (.A(S_11_13), .B(C_11_12), .C((A[12] & B[12])), .YS(S_12_12), .YC(C_12_12));
  PDKGENFAX1 U121950 (.A(S_11_14), .B(C_11_13), .C((A[12] & B[13])), .YS(S_12_13), .YC(C_12_13));
  PDKGENFAX1 U121951 (.A(S_11_15), .B(C_11_14), .C((A[12] & B[14])), .YS(S_12_14), .YC(C_12_14));
  assign S_12_15 = (A[12] & B[15]);
  PDKGENFAX1 U121953 (.A(S_12_1), .B(C_12_0), .C((A[13] & B[0])), .YS(S_13_0), .YC(C_13_0));
  PDKGENFAX1 U121954 (.A(S_12_2), .B(C_12_1), .C((A[13] & B[1])), .YS(S_13_1), .YC(C_13_1));
  PDKGENFAX1 U121955 (.A(S_12_3), .B(C_12_2), .C((A[13] & B[2])), .YS(S_13_2), .YC(C_13_2));
  PDKGENFAX1 U121956 (.A(S_12_4), .B(C_12_3), .C((A[13] & B[3])), .YS(S_13_3), .YC(C_13_3));
  PDKGENFAX1 U121957 (.A(S_12_5), .B(C_12_4), .C((A[13] & B[4])), .YS(S_13_4), .YC(C_13_4));
  PDKGENFAX1 U121958 (.A(S_12_6), .B(C_12_5), .C((A[13] & B[5])), .YS(S_13_5), .YC(C_13_5));
  PDKGENFAX1 U121959 (.A(S_12_7), .B(C_12_6), .C((A[13] & B[6])), .YS(S_13_6), .YC(C_13_6));
  PDKGENFAX1 U121960 (.A(S_12_8), .B(C_12_7), .C((A[13] & B[7])), .YS(S_13_7), .YC(C_13_7));
  PDKGENFAX1 U121961 (.A(S_12_9), .B(C_12_8), .C((A[13] & B[8])), .YS(S_13_8), .YC(C_13_8));
  PDKGENFAX1 U121962 (.A(S_12_10), .B(C_12_9), .C((A[13] & B[9])), .YS(S_13_9), .YC(C_13_9));
  PDKGENFAX1 U121963 (.A(S_12_11), .B(C_12_10), .C((A[13] & B[10])), .YS(S_13_10), .YC(C_13_10));
  PDKGENFAX1 U121964 (.A(S_12_12), .B(C_12_11), .C((A[13] & B[11])), .YS(S_13_11), .YC(C_13_11));
  PDKGENFAX1 U121965 (.A(S_12_13), .B(C_12_12), .C((A[13] & B[12])), .YS(S_13_12), .YC(C_13_12));
  PDKGENFAX1 U121966 (.A(S_12_14), .B(C_12_13), .C((A[13] & B[13])), .YS(S_13_13), .YC(C_13_13));
  PDKGENFAX1 U121967 (.A(S_12_15), .B(C_12_14), .C((A[13] & B[14])), .YS(S_13_14), .YC(C_13_14));
  assign S_13_15 = (A[13] & B[15]);
  PDKGENFAX1 U121969 (.A(S_13_1), .B(C_13_0), .C((A[14] & B[0])), .YS(S_14_0), .YC(C_14_0));
  PDKGENFAX1 U121970 (.A(S_13_2), .B(C_13_1), .C((A[14] & B[1])), .YS(S_14_1), .YC(C_14_1));
  PDKGENFAX1 U121971 (.A(S_13_3), .B(C_13_2), .C((A[14] & B[2])), .YS(S_14_2), .YC(C_14_2));
  PDKGENFAX1 U121972 (.A(S_13_4), .B(C_13_3), .C((A[14] & B[3])), .YS(S_14_3), .YC(C_14_3));
  PDKGENFAX1 U121973 (.A(S_13_5), .B(C_13_4), .C((A[14] & B[4])), .YS(S_14_4), .YC(C_14_4));
  PDKGENFAX1 U121974 (.A(S_13_6), .B(C_13_5), .C((A[14] & B[5])), .YS(S_14_5), .YC(C_14_5));
  PDKGENFAX1 U121975 (.A(S_13_7), .B(C_13_6), .C((A[14] & B[6])), .YS(S_14_6), .YC(C_14_6));
  PDKGENFAX1 U121976 (.A(S_13_8), .B(C_13_7), .C((A[14] & B[7])), .YS(S_14_7), .YC(C_14_7));
  PDKGENFAX1 U121977 (.A(S_13_9), .B(C_13_8), .C((A[14] & B[8])), .YS(S_14_8), .YC(C_14_8));
  PDKGENFAX1 U121978 (.A(S_13_10), .B(C_13_9), .C((A[14] & B[9])), .YS(S_14_9), .YC(C_14_9));
  PDKGENFAX1 U121979 (.A(S_13_11), .B(C_13_10), .C((A[14] & B[10])), .YS(S_14_10), .YC(C_14_10));
  PDKGENFAX1 U121980 (.A(S_13_12), .B(C_13_11), .C((A[14] & B[11])), .YS(S_14_11), .YC(C_14_11));
  PDKGENFAX1 U121981 (.A(S_13_13), .B(C_13_12), .C((A[14] & B[12])), .YS(S_14_12), .YC(C_14_12));
  PDKGENFAX1 U121982 (.A(S_13_14), .B(C_13_13), .C((A[14] & B[13])), .YS(S_14_13), .YC(C_14_13));
  PDKGENFAX1 U121983 (.A(S_13_15), .B(C_13_14), .C((A[14] & B[14])), .YS(S_14_14), .YC(C_14_14));
  assign S_14_15 = (A[14] & B[15]);
  PDKGENFAX1 U121985 (.A(S_14_1), .B(C_14_0), .C((A[15] & B[0])), .YS(S_15_0), .YC(C_15_0));
  PDKGENFAX1 U121986 (.A(S_14_2), .B(C_14_1), .C((A[15] & B[1])), .YS(S_15_1), .YC(C_15_1));
  PDKGENFAX1 U121987 (.A(S_14_3), .B(C_14_2), .C((A[15] & B[2])), .YS(S_15_2), .YC(C_15_2));
  PDKGENFAX1 U121988 (.A(S_14_4), .B(C_14_3), .C((A[15] & B[3])), .YS(S_15_3), .YC(C_15_3));
  PDKGENFAX1 U121989 (.A(S_14_5), .B(C_14_4), .C((A[15] & B[4])), .YS(S_15_4), .YC(C_15_4));
  PDKGENFAX1 U121990 (.A(S_14_6), .B(C_14_5), .C((A[15] & B[5])), .YS(S_15_5), .YC(C_15_5));
  PDKGENFAX1 U121991 (.A(S_14_7), .B(C_14_6), .C((A[15] & B[6])), .YS(S_15_6), .YC(C_15_6));
  PDKGENFAX1 U121992 (.A(S_14_8), .B(C_14_7), .C((A[15] & B[7])), .YS(S_15_7), .YC(C_15_7));
  PDKGENFAX1 U121993 (.A(S_14_9), .B(C_14_8), .C((A[15] & B[8])), .YS(S_15_8), .YC(C_15_8));
  PDKGENFAX1 U121994 (.A(S_14_10), .B(C_14_9), .C((A[15] & B[9])), .YS(S_15_9), .YC(C_15_9));
  PDKGENFAX1 U121995 (.A(S_14_11), .B(C_14_10), .C((A[15] & B[10])), .YS(S_15_10), .YC(C_15_10));
  PDKGENFAX1 U121996 (.A(S_14_12), .B(C_14_11), .C((A[15] & B[11])), .YS(S_15_11), .YC(C_15_11));
  PDKGENFAX1 U121997 (.A(S_14_13), .B(C_14_12), .C((A[15] & B[12])), .YS(S_15_12), .YC(C_15_12));
  PDKGENFAX1 U121998 (.A(S_14_14), .B(C_14_13), .C((A[15] & B[13])), .YS(S_15_13), .YC(C_15_13));
  PDKGENFAX1 U121999 (.A(S_14_15), .B(C_14_14), .C((A[15] & B[14])), .YS(S_15_14), .YC(C_15_14));
  assign S_15_15 = (A[15] & B[15]);
  PDKGENHAX1 U122001 (.A(S_15_1), .B(C_15_0), .YS(S_16_0), .YC(C_16_0));
  PDKGENFAX1 U122002 (.A(S_15_2), .B(C_16_0), .C(C_15_1), .YS(S_16_1), .YC(C_16_1));
  PDKGENFAX1 U122003 (.A(S_15_3), .B(C_16_1), .C(C_15_2), .YS(S_16_2), .YC(C_16_2));
  PDKGENFAX1 U122004 (.A(S_15_4), .B(C_16_2), .C(C_15_3), .YS(S_16_3), .YC(C_16_3));
  PDKGENFAX1 U122005 (.A(S_15_5), .B(C_16_3), .C(C_15_4), .YS(S_16_4), .YC(C_16_4));
  PDKGENFAX1 U122006 (.A(S_15_6), .B(C_16_4), .C(C_15_5), .YS(S_16_5), .YC(C_16_5));
  PDKGENFAX1 U122007 (.A(S_15_7), .B(C_16_5), .C(C_15_6), .YS(S_16_6), .YC(C_16_6));
  PDKGENFAX1 U122008 (.A(S_15_8), .B(C_16_6), .C(C_15_7), .YS(S_16_7), .YC(C_16_7));
  PDKGENFAX1 U122009 (.A(S_15_9), .B(C_16_7), .C(C_15_8), .YS(S_16_8), .YC(C_16_8));
  PDKGENFAX1 U122010 (.A(S_15_10), .B(C_16_8), .C(C_15_9), .YS(S_16_9), .YC(C_16_9));
  PDKGENFAX1 U122011 (.A(S_15_11), .B(C_16_9), .C(C_15_10), .YS(S_16_10), .YC(C_16_10));
  PDKGENFAX1 U122012 (.A(S_15_12), .B(C_16_10), .C(C_15_11), .YS(S_16_11), .YC(C_16_11));
  PDKGENFAX1 U122013 (.A(S_15_13), .B(C_16_11), .C(C_15_12), .YS(S_16_12), .YC(C_16_12));
  PDKGENFAX1 U122014 (.A(S_15_14), .B(C_16_12), .C(C_15_13), .YS(S_16_13), .YC(C_16_13));
  PDKGENFAX1 U122015 (.A(S_15_15), .B(C_16_13), .C(C_15_14), .YS(S_16_14), .YC(C_16_14));
  assign S_16_15 = C_16_14;
  assign O = {S_16_15,S_16_14,S_16_13,S_16_12,S_16_11,S_16_10,S_16_9,S_16_8,S_16_7,S_16_6,S_16_5,S_16_4,S_16_3,S_16_2,S_16_1,S_16_0,S_15_0,S_14_0,S_13_0,S_12_0,S_11_0,S_10_0,S_9_0,S_8_0,S_7_0,S_6_0,S_5_0,S_4_0,1'b0,1'b0,1'b0,1'b0};

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
