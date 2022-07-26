/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.15 %
// MAE = 101 
// WCE% = 0.69 %
// WCE = 449 
// WCRE% = 6500.00 %
// EP% = 91.89 %
// MRE% = 8.93 %
// MSE = 19690 
// PDK45_PWR = 0.289 mW
// PDK45_AREA = 543.0 um2
// PDK45_DELAY = 1.33 ns
#include <stdint.h>
#include <stdlib.h>

int16_t mul8s_1KX5(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_2_5,C_2_7,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_6,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_6 = 1;
  S_2_3 = (((A>>2)&1) & ((B>>3)&1));
  S_2_4 = (((A>>2)&1) & ((B>>4)&1));
  S_2_5 = S_1_6^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = S_1_6&(((A>>2)&1) & ((B>>5)&1));
  S_2_6 = (((A>>2)&1) & ((B>>6)&1));
  S_2_7 = 1^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = 1&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_2 = S_2_3^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = S_2_3&(((A>>3)&1) & ((B>>2)&1));
  S_3_3 = S_2_4^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = S_2_4&(((A>>3)&1) & ((B>>3)&1));
  S_3_4 = S_2_5^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = S_2_5&(((A>>3)&1) & ((B>>4)&1));
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  S_3_6 = S_2_7^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = S_2_7&(((A>>3)&1) & ((B>>6)&1));
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  S_4_1 = S_3_2^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = S_3_2&(((A>>4)&1) & ((B>>1)&1));
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  S_5_0 = S_4_1^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = S_4_1&(((A>>5)&1) & ((B>>0)&1));
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
