/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362, H. R. Mahdiani, A. Ahmadi, S. M. Fakhraie and C. Lucas, "Bio-Inspired Imprecise Computational Blocks for Efficient VLSI Implementation of Soft-Computing Applications" in IEEE Transactions on Circuits and Systems I: Regular Papers, vol. 57, no. 4, pp. 850-862, April 2010. doi: 10.1109/TCSI.2009.2027626 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint32_t mul12u_pwr_0_670_mre_00_8671(uint16_t A, uint16_t B)
{
  uint32_t P, P_;
  uint16_t tmp, C_10_1,C_10_10,C_10_2,C_10_3,C_10_4,C_10_5,C_10_6,C_10_7,C_10_8,C_10_9,C_11_0,C_11_1,C_11_10,C_11_2,C_11_3,C_11_4,C_11_5,C_11_6,C_11_7,C_11_8,C_11_9,C_12_0,C_12_1,C_12_10,C_12_2,C_12_3,C_12_4,C_12_5,C_12_6,C_12_7,C_12_8,C_12_9,C_1_10,C_2_10,C_2_9,C_3_10,C_3_8,C_3_9,C_4_10,C_4_7,C_4_8,C_4_9,C_5_10,C_5_6,C_5_7,C_5_8,C_5_9,C_6_10,C_6_5,C_6_6,C_6_7,C_6_8,C_6_9,C_7_10,C_7_4,C_7_5,C_7_6,C_7_7,C_7_8,C_7_9,C_8_10,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,C_8_8,C_8_9,C_9_10,C_9_2,C_9_3,C_9_4,C_9_5,C_9_6,C_9_7,C_9_8,C_9_9,S_0_11,S_10_1,S_10_10,S_10_11,S_10_2,S_10_3,S_10_4,S_10_5,S_10_6,S_10_7,S_10_8,S_10_9,S_11_0,S_11_1,S_11_10,S_11_11,S_11_2,S_11_3,S_11_4,S_11_5,S_11_6,S_11_7,S_11_8,S_11_9,S_12_0,S_12_1,S_12_10,S_12_11,S_12_2,S_12_3,S_12_4,S_12_5,S_12_6,S_12_7,S_12_8,S_12_9,S_1_10,S_1_11,S_2_10,S_2_11,S_2_9,S_3_10,S_3_11,S_3_8,S_3_9,S_4_10,S_4_11,S_4_7,S_4_8,S_4_9,S_5_10,S_5_11,S_5_6,S_5_7,S_5_8,S_5_9,S_6_10,S_6_11,S_6_5,S_6_6,S_6_7,S_6_8,S_6_9,S_7_10,S_7_11,S_7_4,S_7_5,S_7_6,S_7_7,S_7_8,S_7_9,S_8_10,S_8_11,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7,S_8_8,S_8_9,S_9_10,S_9_11,S_9_2,S_9_3,S_9_4,S_9_5,S_9_6,S_9_7,S_9_8,S_9_9;
  S_0_11 = (((A>>0)&1) & ((B>>11)&1));
  S_1_10 = S_0_11^(((A>>1)&1) & ((B>>10)&1));
  C_1_10 = S_0_11&(((A>>1)&1) & ((B>>10)&1));
  S_1_11 = (((A>>1)&1) & ((B>>11)&1));
  S_2_9 = S_1_10^(((A>>2)&1) & ((B>>9)&1));
  C_2_9 = S_1_10&(((A>>2)&1) & ((B>>9)&1));
  tmp = S_1_11^C_1_10;
  S_2_10 = tmp^(((A>>2)&1) & ((B>>10)&1));
  C_2_10 = (tmp&(((A>>2)&1) & ((B>>10)&1)))|(S_1_11&C_1_10);
  S_2_11 = (((A>>2)&1) & ((B>>11)&1));
  S_3_8 = S_2_9^(((A>>3)&1) & ((B>>8)&1));
  C_3_8 = S_2_9&(((A>>3)&1) & ((B>>8)&1));
  tmp = S_2_10^C_2_9;
  S_3_9 = tmp^(((A>>3)&1) & ((B>>9)&1));
  C_3_9 = (tmp&(((A>>3)&1) & ((B>>9)&1)))|(S_2_10&C_2_9);
  tmp = S_2_11^C_2_10;
  S_3_10 = tmp^(((A>>3)&1) & ((B>>10)&1));
  C_3_10 = (tmp&(((A>>3)&1) & ((B>>10)&1)))|(S_2_11&C_2_10);
  S_3_11 = (((A>>3)&1) & ((B>>11)&1));
  S_4_7 = S_3_8^(((A>>4)&1) & ((B>>7)&1));
  C_4_7 = S_3_8&(((A>>4)&1) & ((B>>7)&1));
  tmp = S_3_9^C_3_8;
  S_4_8 = tmp^(((A>>4)&1) & ((B>>8)&1));
  C_4_8 = (tmp&(((A>>4)&1) & ((B>>8)&1)))|(S_3_9&C_3_8);
  tmp = S_3_10^C_3_9;
  S_4_9 = tmp^(((A>>4)&1) & ((B>>9)&1));
  C_4_9 = (tmp&(((A>>4)&1) & ((B>>9)&1)))|(S_3_10&C_3_9);
  tmp = S_3_11^C_3_10;
  S_4_10 = tmp^(((A>>4)&1) & ((B>>10)&1));
  C_4_10 = (tmp&(((A>>4)&1) & ((B>>10)&1)))|(S_3_11&C_3_10);
  S_4_11 = (((A>>4)&1) & ((B>>11)&1));
  S_5_6 = S_4_7^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = S_4_7&(((A>>5)&1) & ((B>>6)&1));
  tmp = S_4_8^C_4_7;
  S_5_7 = tmp^(((A>>5)&1) & ((B>>7)&1));
  C_5_7 = (tmp&(((A>>5)&1) & ((B>>7)&1)))|(S_4_8&C_4_7);
  tmp = S_4_9^C_4_8;
  S_5_8 = tmp^(((A>>5)&1) & ((B>>8)&1));
  C_5_8 = (tmp&(((A>>5)&1) & ((B>>8)&1)))|(S_4_9&C_4_8);
  tmp = S_4_10^C_4_9;
  S_5_9 = tmp^(((A>>5)&1) & ((B>>9)&1));
  C_5_9 = (tmp&(((A>>5)&1) & ((B>>9)&1)))|(S_4_10&C_4_9);
  tmp = S_4_11^C_4_10;
  S_5_10 = tmp^(((A>>5)&1) & ((B>>10)&1));
  C_5_10 = (tmp&(((A>>5)&1) & ((B>>10)&1)))|(S_4_11&C_4_10);
  S_5_11 = (((A>>5)&1) & ((B>>11)&1));
  S_6_5 = S_5_6^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = S_5_6&(((A>>6)&1) & ((B>>5)&1));
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  tmp = S_5_8^C_5_7;
  S_6_7 = tmp^(((A>>6)&1) & ((B>>7)&1));
  C_6_7 = (tmp&(((A>>6)&1) & ((B>>7)&1)))|(S_5_8&C_5_7);
  tmp = S_5_9^C_5_8;
  S_6_8 = tmp^(((A>>6)&1) & ((B>>8)&1));
  C_6_8 = (tmp&(((A>>6)&1) & ((B>>8)&1)))|(S_5_9&C_5_8);
  tmp = S_5_10^C_5_9;
  S_6_9 = tmp^(((A>>6)&1) & ((B>>9)&1));
  C_6_9 = (tmp&(((A>>6)&1) & ((B>>9)&1)))|(S_5_10&C_5_9);
  tmp = S_5_11^C_5_10;
  S_6_10 = tmp^(((A>>6)&1) & ((B>>10)&1));
  C_6_10 = (tmp&(((A>>6)&1) & ((B>>10)&1)))|(S_5_11&C_5_10);
  S_6_11 = (((A>>6)&1) & ((B>>11)&1));
  S_7_4 = S_6_5^(((A>>7)&1) & ((B>>4)&1));
  C_7_4 = S_6_5&(((A>>7)&1) & ((B>>4)&1));
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((A>>7)&1) & ((B>>5)&1));
  C_7_5 = (tmp&(((A>>7)&1) & ((B>>5)&1)))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((A>>7)&1) & ((B>>6)&1));
  C_7_6 = (tmp&(((A>>7)&1) & ((B>>6)&1)))|(S_6_7&C_6_6);
  tmp = S_6_8^C_6_7;
  S_7_7 = tmp^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = (tmp&(((A>>7)&1) & ((B>>7)&1)))|(S_6_8&C_6_7);
  tmp = S_6_9^C_6_8;
  S_7_8 = tmp^(((A>>7)&1) & ((B>>8)&1));
  C_7_8 = (tmp&(((A>>7)&1) & ((B>>8)&1)))|(S_6_9&C_6_8);
  tmp = S_6_10^C_6_9;
  S_7_9 = tmp^(((A>>7)&1) & ((B>>9)&1));
  C_7_9 = (tmp&(((A>>7)&1) & ((B>>9)&1)))|(S_6_10&C_6_9);
  tmp = S_6_11^C_6_10;
  S_7_10 = tmp^(((A>>7)&1) & ((B>>10)&1));
  C_7_10 = (tmp&(((A>>7)&1) & ((B>>10)&1)))|(S_6_11&C_6_10);
  S_7_11 = (((A>>7)&1) & ((B>>11)&1));
  S_8_3 = S_7_4^(((A>>8)&1) & ((B>>3)&1));
  C_8_3 = S_7_4&(((A>>8)&1) & ((B>>3)&1));
  tmp = S_7_5^C_7_4;
  S_8_4 = tmp^(((A>>8)&1) & ((B>>4)&1));
  C_8_4 = (tmp&(((A>>8)&1) & ((B>>4)&1)))|(S_7_5&C_7_4);
  tmp = S_7_6^C_7_5;
  S_8_5 = tmp^(((A>>8)&1) & ((B>>5)&1));
  C_8_5 = (tmp&(((A>>8)&1) & ((B>>5)&1)))|(S_7_6&C_7_5);
  tmp = S_7_7^C_7_6;
  S_8_6 = tmp^(((A>>8)&1) & ((B>>6)&1));
  C_8_6 = (tmp&(((A>>8)&1) & ((B>>6)&1)))|(S_7_7&C_7_6);
  tmp = S_7_8^C_7_7;
  S_8_7 = tmp^(((A>>8)&1) & ((B>>7)&1));
  C_8_7 = (tmp&(((A>>8)&1) & ((B>>7)&1)))|(S_7_8&C_7_7);
  tmp = S_7_9^C_7_8;
  S_8_8 = tmp^(((A>>8)&1) & ((B>>8)&1));
  C_8_8 = (tmp&(((A>>8)&1) & ((B>>8)&1)))|(S_7_9&C_7_8);
  tmp = S_7_10^C_7_9;
  S_8_9 = tmp^(((A>>8)&1) & ((B>>9)&1));
  C_8_9 = (tmp&(((A>>8)&1) & ((B>>9)&1)))|(S_7_10&C_7_9);
  tmp = S_7_11^C_7_10;
  S_8_10 = tmp^(((A>>8)&1) & ((B>>10)&1));
  C_8_10 = (tmp&(((A>>8)&1) & ((B>>10)&1)))|(S_7_11&C_7_10);
  S_8_11 = (((A>>8)&1) & ((B>>11)&1));
  S_9_2 = S_8_3^(((A>>9)&1) & ((B>>2)&1));
  C_9_2 = S_8_3&(((A>>9)&1) & ((B>>2)&1));
  tmp = S_8_4^C_8_3;
  S_9_3 = tmp^(((A>>9)&1) & ((B>>3)&1));
  C_9_3 = (tmp&(((A>>9)&1) & ((B>>3)&1)))|(S_8_4&C_8_3);
  tmp = S_8_5^C_8_4;
  S_9_4 = tmp^(((A>>9)&1) & ((B>>4)&1));
  C_9_4 = (tmp&(((A>>9)&1) & ((B>>4)&1)))|(S_8_5&C_8_4);
  tmp = S_8_6^C_8_5;
  S_9_5 = tmp^(((A>>9)&1) & ((B>>5)&1));
  C_9_5 = (tmp&(((A>>9)&1) & ((B>>5)&1)))|(S_8_6&C_8_5);
  tmp = S_8_7^C_8_6;
  S_9_6 = tmp^(((A>>9)&1) & ((B>>6)&1));
  C_9_6 = (tmp&(((A>>9)&1) & ((B>>6)&1)))|(S_8_7&C_8_6);
  tmp = S_8_8^C_8_7;
  S_9_7 = tmp^(((A>>9)&1) & ((B>>7)&1));
  C_9_7 = (tmp&(((A>>9)&1) & ((B>>7)&1)))|(S_8_8&C_8_7);
  tmp = S_8_9^C_8_8;
  S_9_8 = tmp^(((A>>9)&1) & ((B>>8)&1));
  C_9_8 = (tmp&(((A>>9)&1) & ((B>>8)&1)))|(S_8_9&C_8_8);
  tmp = S_8_10^C_8_9;
  S_9_9 = tmp^(((A>>9)&1) & ((B>>9)&1));
  C_9_9 = (tmp&(((A>>9)&1) & ((B>>9)&1)))|(S_8_10&C_8_9);
  tmp = S_8_11^C_8_10;
  S_9_10 = tmp^(((A>>9)&1) & ((B>>10)&1));
  C_9_10 = (tmp&(((A>>9)&1) & ((B>>10)&1)))|(S_8_11&C_8_10);
  S_9_11 = (((A>>9)&1) & ((B>>11)&1));
  S_10_1 = S_9_2^(((A>>10)&1) & ((B>>1)&1));
  C_10_1 = S_9_2&(((A>>10)&1) & ((B>>1)&1));
  tmp = S_9_3^C_9_2;
  S_10_2 = tmp^(((A>>10)&1) & ((B>>2)&1));
  C_10_2 = (tmp&(((A>>10)&1) & ((B>>2)&1)))|(S_9_3&C_9_2);
  tmp = S_9_4^C_9_3;
  S_10_3 = tmp^(((A>>10)&1) & ((B>>3)&1));
  C_10_3 = (tmp&(((A>>10)&1) & ((B>>3)&1)))|(S_9_4&C_9_3);
  tmp = S_9_5^C_9_4;
  S_10_4 = tmp^(((A>>10)&1) & ((B>>4)&1));
  C_10_4 = (tmp&(((A>>10)&1) & ((B>>4)&1)))|(S_9_5&C_9_4);
  tmp = S_9_6^C_9_5;
  S_10_5 = tmp^(((A>>10)&1) & ((B>>5)&1));
  C_10_5 = (tmp&(((A>>10)&1) & ((B>>5)&1)))|(S_9_6&C_9_5);
  tmp = S_9_7^C_9_6;
  S_10_6 = tmp^(((A>>10)&1) & ((B>>6)&1));
  C_10_6 = (tmp&(((A>>10)&1) & ((B>>6)&1)))|(S_9_7&C_9_6);
  tmp = S_9_8^C_9_7;
  S_10_7 = tmp^(((A>>10)&1) & ((B>>7)&1));
  C_10_7 = (tmp&(((A>>10)&1) & ((B>>7)&1)))|(S_9_8&C_9_7);
  tmp = S_9_9^C_9_8;
  S_10_8 = tmp^(((A>>10)&1) & ((B>>8)&1));
  C_10_8 = (tmp&(((A>>10)&1) & ((B>>8)&1)))|(S_9_9&C_9_8);
  tmp = S_9_10^C_9_9;
  S_10_9 = tmp^(((A>>10)&1) & ((B>>9)&1));
  C_10_9 = (tmp&(((A>>10)&1) & ((B>>9)&1)))|(S_9_10&C_9_9);
  tmp = S_9_11^C_9_10;
  S_10_10 = tmp^(((A>>10)&1) & ((B>>10)&1));
  C_10_10 = (tmp&(((A>>10)&1) & ((B>>10)&1)))|(S_9_11&C_9_10);
  S_10_11 = (((A>>10)&1) & ((B>>11)&1));
  S_11_0 = S_10_1^(((A>>11)&1) & ((B>>0)&1));
  C_11_0 = S_10_1&(((A>>11)&1) & ((B>>0)&1));
  tmp = S_10_2^C_10_1;
  S_11_1 = tmp^(((A>>11)&1) & ((B>>1)&1));
  C_11_1 = (tmp&(((A>>11)&1) & ((B>>1)&1)))|(S_10_2&C_10_1);
  tmp = S_10_3^C_10_2;
  S_11_2 = tmp^(((A>>11)&1) & ((B>>2)&1));
  C_11_2 = (tmp&(((A>>11)&1) & ((B>>2)&1)))|(S_10_3&C_10_2);
  tmp = S_10_4^C_10_3;
  S_11_3 = tmp^(((A>>11)&1) & ((B>>3)&1));
  C_11_3 = (tmp&(((A>>11)&1) & ((B>>3)&1)))|(S_10_4&C_10_3);
  tmp = S_10_5^C_10_4;
  S_11_4 = tmp^(((A>>11)&1) & ((B>>4)&1));
  C_11_4 = (tmp&(((A>>11)&1) & ((B>>4)&1)))|(S_10_5&C_10_4);
  tmp = S_10_6^C_10_5;
  S_11_5 = tmp^(((A>>11)&1) & ((B>>5)&1));
  C_11_5 = (tmp&(((A>>11)&1) & ((B>>5)&1)))|(S_10_6&C_10_5);
  tmp = S_10_7^C_10_6;
  S_11_6 = tmp^(((A>>11)&1) & ((B>>6)&1));
  C_11_6 = (tmp&(((A>>11)&1) & ((B>>6)&1)))|(S_10_7&C_10_6);
  tmp = S_10_8^C_10_7;
  S_11_7 = tmp^(((A>>11)&1) & ((B>>7)&1));
  C_11_7 = (tmp&(((A>>11)&1) & ((B>>7)&1)))|(S_10_8&C_10_7);
  tmp = S_10_9^C_10_8;
  S_11_8 = tmp^(((A>>11)&1) & ((B>>8)&1));
  C_11_8 = (tmp&(((A>>11)&1) & ((B>>8)&1)))|(S_10_9&C_10_8);
  tmp = S_10_10^C_10_9;
  S_11_9 = tmp^(((A>>11)&1) & ((B>>9)&1));
  C_11_9 = (tmp&(((A>>11)&1) & ((B>>9)&1)))|(S_10_10&C_10_9);
  tmp = S_10_11^C_10_10;
  S_11_10 = tmp^(((A>>11)&1) & ((B>>10)&1));
  C_11_10 = (tmp&(((A>>11)&1) & ((B>>10)&1)))|(S_10_11&C_10_10);
  S_11_11 = (((A>>11)&1) & ((B>>11)&1));
  S_12_0 = S_11_1^C_11_0;
  C_12_0 = S_11_1&C_11_0;
  tmp = S_11_2^C_12_0;
  S_12_1 = tmp^C_11_1;
  C_12_1 = (tmp&C_11_1)|(S_11_2&C_12_0);
  tmp = S_11_3^C_12_1;
  S_12_2 = tmp^C_11_2;
  C_12_2 = (tmp&C_11_2)|(S_11_3&C_12_1);
  tmp = S_11_4^C_12_2;
  S_12_3 = tmp^C_11_3;
  C_12_3 = (tmp&C_11_3)|(S_11_4&C_12_2);
  tmp = S_11_5^C_12_3;
  S_12_4 = tmp^C_11_4;
  C_12_4 = (tmp&C_11_4)|(S_11_5&C_12_3);
  tmp = S_11_6^C_12_4;
  S_12_5 = tmp^C_11_5;
  C_12_5 = (tmp&C_11_5)|(S_11_6&C_12_4);
  tmp = S_11_7^C_12_5;
  S_12_6 = tmp^C_11_6;
  C_12_6 = (tmp&C_11_6)|(S_11_7&C_12_5);
  tmp = S_11_8^C_12_6;
  S_12_7 = tmp^C_11_7;
  C_12_7 = (tmp&C_11_7)|(S_11_8&C_12_6);
  tmp = S_11_9^C_12_7;
  S_12_8 = tmp^C_11_8;
  C_12_8 = (tmp&C_11_8)|(S_11_9&C_12_7);
  tmp = S_11_10^C_12_8;
  S_12_9 = tmp^C_11_9;
  C_12_9 = (tmp&C_11_9)|(S_11_10&C_12_8);
  tmp = S_11_11^C_12_9;
  S_12_10 = tmp^C_11_10;
  C_12_10 = (tmp&C_11_10)|(S_11_11&C_12_9);
  S_12_11 = C_12_10;
  P = 0;
  P |= (S_11_0 & 1) << 11;
  P |= (S_12_0 & 1) << 12;
  P |= (S_12_1 & 1) << 13;
  P |= (S_12_2 & 1) << 14;
  P |= (S_12_3 & 1) << 15;
  P |= (S_12_4 & 1) << 16;
  P |= (S_12_5 & 1) << 17;
  P |= (S_12_6 & 1) << 18;
  P |= (S_12_7 & 1) << 19;
  P |= (S_12_8 & 1) << 20;
  P |= (S_12_9 & 1) << 21;
  P |= (S_12_10 & 1) << 22;
  P |= (S_12_11 & 1) << 23;
  return P;
}

// internal reference: truncation-bam.12.bam12_00_11

