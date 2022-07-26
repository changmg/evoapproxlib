/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, L. Sekanina, Z. Vasicek "Libraries of Approximate Circuits: Automated Design and Application in CNN Accelerators" IEEE Journal on Emerging and Selected Topics in Circuits and Systems, Vol 10, No 4, 2020 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.86 %
// MAE = 1.1 
// WCE% = 3.91 %
// WCE = 5.0 
// WCRE% = 100.00 %
// EP% = 66.85 %
// MRE% = 4.21 %
// MSE = 2.4 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 67.6 um2
// PDK45_DELAY = 0.58 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add8s_7EL(const uint64_t A /* 8-bit signed operand */, const uint64_t B /* 8-bit signed operand */)
{
   uint64_t dout_16, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_50, dout_51, dout_52, dout_53, dout_54, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_16=((A >> 7)&1)&((B >> 7)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_40=dout_21&dout_16;
   dout_41=dout_33|dout_40;
   dout_42=dout_38&dout_36;
   dout_43=dout_38&dout_35;
   dout_44=dout_39|dout_42;
   dout_45=dout_43&dout_41;
   dout_46=dout_44|dout_45;
   dout_47=dout_35&dout_41;
   dout_48=dout_36|dout_47;
   dout_50=dout_18|dout_16;
   dout_51=dout_23&dout_41;
   dout_52=dout_22|dout_51;
   dout_53=dout_27&dout_48;
   dout_54=dout_26|dout_53;
   dout_56=dout_21^dout_50;
   dout_57=dout_23^dout_41;
   dout_58=dout_25^dout_52;
   dout_59=dout_27^dout_48;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_46;

   O = 0;
   O |= (dout_58&1) << 0;
   O |= (dout_19&1) << 1;
   O |= (dout_56&1) << 2;
   O |= (dout_57&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
