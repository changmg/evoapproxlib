/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. MRAZEK. Optimization of BDD-based Approximation Error Metrics Calculations. In: IEEE Computer Society Annual Symposium on VLSI (ISVLSI '22). Paphos: Institute of Electrical and Electronics Engineers, 2022, pp. 86-91. ISBN 978-1-6654-6605-9. 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 1.64 %
// MAE = 8.4 
// WCE% = 6.05 %
// WCE = 31 
// WCRE% = 800.00 %
// EP% = 89.45 %
// MRE% = 4.28 %
// MSE = 123 
// PDK45_PWR = 0.011 mW
// PDK45_AREA = 32.9 um2
// PDK45_DELAY = 0.24 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add8u_108(uint64_t a, uint64_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_16 = wa[0] | wb[0];
  int sig_17 = wb[4] | wa[4];
  int sig_32 = wb[2] | wa[2];
  int sig_33 = ~((int)0);
  int sig_39 = wa[5] & wb[5];
  int sig_41 = wb[5] ^ wa[5];
  int sig_42 = sig_39;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_16 & 0x01) << 0; // default output
  y |=  (wb[1] & 0x01) << 1; // default output
  y |=  (sig_32 & 0x01) << 2; // default output
  y |=  (sig_33 & 0x01) << 3; // default output
  y |=  (sig_17 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
