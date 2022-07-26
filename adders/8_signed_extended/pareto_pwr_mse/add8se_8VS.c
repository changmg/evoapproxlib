/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, L. Sekanina, Z. Vasicek "Libraries of Approximate Circuits: Automated Design and Application in CNN Accelerators" IEEE Journal on Emerging and Selected Topics in Circuits and Systems, Vol 10, No 4, 2020 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 2.42 %
// MAE = 6.2 
// WCE% = 6.25 %
// WCE = 16 
// WCRE% = 1500.00 %
// EP% = 94.53 %
// MRE% = 24.46 %
// MSE = 56 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 32.4 um2
// PDK45_DELAY = 0.27 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add8se_8VS(const uint64_t B,const uint64_t A)
{
   uint64_t dout_26, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_26=((B >> 4)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&((B >> 4)&1);
   dout_41=dout_38^((B >> 4)&1);
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (((A >> 4)&1)&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (((A >> 4)&1)&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (dout_26&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
