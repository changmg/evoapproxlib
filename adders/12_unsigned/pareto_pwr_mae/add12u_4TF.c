/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.018 %
// MAE = 1.5 
// WCE% = 0.049 %
// WCE = 4.0 
// WCRE% = 300.00 %
// EP% = 81.25 %
// MRE% = 0.051 %
// MSE = 3.5 
// PDK45_PWR = 0.042 mW
// PDK45_AREA = 88.2 um2
// PDK45_DELAY = 0.80 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add12u_4TF(uint64_t a, uint64_t b) {
  uint64_t o = 0;
  int n_78=0, n_254=0, n_547=0, n_546=0, n_702=0, n_45=0, n_44=0, n_47=0, n_46=0, n_41=0;
  int n_40=0, n_43=0, n_42=0, n_49=0, n_48=0, n_380=0, n_141=0, n_140=0, n_670=0, n_462=0;
  int n_816=0, n_774=0, n_775=0, n_400=0, n_244=0, n_712=0, n_713=0, n_30=0, n_31=0, n_32=0;
  int n_33=0, n_34=0, n_35=0, n_36=0, n_37=0, n_38=0, n_39=0, n_817=0, n_111=0, n_785=0;
  int n_390=0, n_784=0, n_150=0, n_151=0, n_660=0, n_494=0, n_433=0, n_432=0, n_836=0, n_23=0;
  int n_22=0, n_21=0, n_20=0, n_27=0, n_26=0, n_25=0, n_24=0, n_29=0, n_28=0, n_806=0;
  int n_807=0, n_556=0, n_557=0, n_484=0, n_121=0, n_120=0, n_651=0, n_650=0, n_183=0, n_182=0;
  int n_837=0, n_348=0, n_307=0, n_18=0, n_19=0, n_16=0, n_17=0, n_14=0, n_15=0, n_12=0;
  int n_13=0, n_10=0, n_11=0, n_98=0, n_99=0, n_306=0, n_525=0, n_524=0, n_338=0, n_130=0;
  int n_131=0, n_826=0, n_827=0, n_192=0, n_193=0, n_89=0, n_88=0, n_732=0, n_442=0, n_692=0;
  int n_110=0, n_79=0, n_297=0, n_296=0, n_215=0, n_214=0, n_745=0, n_744=0, n_505=0, n_504=0;
  int n_276=0, n_566=0, n_370=0, n_680=0, n_681=0, n_163=0, n_162=0, n_69=0, n_68=0, n_66=0;
  int n_286=0, n_598=0, n_202=0, n_203=0, n_754=0, n_755=0, n_8=0, n_9=0, n_4=0, n_5=0;
  int n_6=0, n_7=0, n_0=0, n_1=0, n_2=0, n_3=0, n_640=0, n_172=0, n_796=0, n_797=0;
  int n_765=0, n_764=0, n_608=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 0) & 0x1;
  n_2 = (a >> 1) & 0x1;
  n_3 = (a >> 1) & 0x1;
  n_4 = (a >> 2) & 0x1;
  n_5 = (a >> 2) & 0x1;
  n_6 = (a >> 3) & 0x1;
  n_7 = (a >> 3) & 0x1;
  n_8 = (a >> 4) & 0x1;
  n_9 = (a >> 4) & 0x1;
  n_10 = (a >> 5) & 0x1;
  n_11 = (a >> 5) & 0x1;
  n_12 = (a >> 6) & 0x1;
  n_13 = (a >> 6) & 0x1;
  n_14 = (a >> 7) & 0x1;
  n_15 = (a >> 7) & 0x1;
  n_16 = (a >> 8) & 0x1;
  n_17 = (a >> 8) & 0x1;
  n_18 = (a >> 9) & 0x1;
  n_19 = (a >> 9) & 0x1;
  n_20 = (a >> 10) & 0x1;
  n_21 = (a >> 10) & 0x1;
  n_22 = (a >> 11) & 0x1;
  n_23 = (a >> 11) & 0x1;
  n_24 = (b >> 0) & 0x1;
  n_25 = (b >> 0) & 0x1;
  n_26 = (b >> 1) & 0x1;
  n_27 = (b >> 1) & 0x1;
  n_28 = (b >> 2) & 0x1;
  n_29 = (b >> 2) & 0x1;
  n_30 = (b >> 3) & 0x1;
  n_31 = (b >> 3) & 0x1;
  n_32 = (b >> 4) & 0x1;
  n_33 = (b >> 4) & 0x1;
  n_34 = (b >> 5) & 0x1;
  n_35 = (b >> 5) & 0x1;
  n_36 = (b >> 6) & 0x1;
  n_37 = (b >> 6) & 0x1;
  n_38 = (b >> 7) & 0x1;
  n_39 = (b >> 7) & 0x1;
  n_40 = (b >> 8) & 0x1;
  n_41 = (b >> 8) & 0x1;
  n_42 = (b >> 9) & 0x1;
  n_43 = (b >> 9) & 0x1;
  n_44 = (b >> 10) & 0x1;
  n_45 = (b >> 10) & 0x1;
  n_46 = (b >> 11) & 0x1;
  n_47 = (b >> 11) & 0x1;
  n_48 = n_26 ^ n_26;
  n_49 = n_26 & n_26;
  n_66 = ~n_48;
  n_68 = n_4 ^ n_28;
  n_69 = n_4 & n_28;
  n_78 = n_6 ^ n_30;
  n_79 = n_6 & n_30;
  n_88 = n_8 ^ n_32;
  n_89 = n_8 & n_32;
  n_98 = n_10 ^ n_34;
  n_99 = n_10 & n_34;
  n_110 = n_12 ^ n_36;
  n_111 = n_12 & n_36;
  n_120 = n_14 ^ n_38;
  n_121 = n_14 & n_38;
  n_130 = n_16 ^ n_40;
  n_131 = n_16 & n_40;
  n_140 = n_18 ^ n_42;
  n_141 = n_18 & n_42;
  n_150 = n_20 ^ n_44;
  n_151 = n_20 & n_44;
  n_162 = n_22 ^ n_46;
  n_163 = n_22 & n_46;
  n_172 = ~n_66;
  n_182 = ~n_172;
  n_183 = n_182;
  n_192 = n_28 & n_78;
  n_193 = n_192;
  n_202 = n_193 | n_79;
  n_203 = n_202;
  n_214 = n_68 & n_78;
  n_215 = n_214;
  n_244 = n_203 & n_88;
  n_254 = n_244 | n_89;
  n_276 = n_215 & n_88;
  n_286 = n_99 & n_110;
  n_296 = n_286 | n_111;
  n_297 = n_296;
  n_306 = n_98 & n_110;
  n_307 = n_306;
  n_338 = n_297 & n_120;
  n_348 = n_338 | n_121;
  n_370 = n_307 & n_120;
  n_380 = n_131 & n_140;
  n_390 = n_380 | n_141;
  n_400 = n_183 & n_140;
  n_432 = n_390 & n_150;
  n_433 = n_432;
  n_442 = n_433 | n_151;
  n_462 = n_182 & n_150;
  n_484 = n_68 | n_28;
  n_494 = n_182 & n_214;
  n_504 = n_494 | n_202;
  n_505 = n_504;
  n_524 = n_276 | n_254;
  n_525 = n_524;
  n_546 = n_172 | n_525;
  n_547 = n_546;
  n_556 = n_547 & n_98;
  n_557 = n_556;
  n_566 = n_557 | n_99;
  n_598 = n_524 & n_306;
  n_608 = n_598 | n_296;
  n_640 = n_546 & n_370;
  n_650 = n_640 | n_348;
  n_651 = n_650;
  n_660 = n_651 & n_130;
  n_670 = n_660 | n_131;
  n_680 = n_660 & n_400;
  n_681 = n_680;
  n_692 = n_680 | n_390;
  n_702 = n_681 & n_462;
  n_712 = n_702 | n_442;
  n_713 = n_712;
  n_732 = ~n_68;
  n_744 = n_78 ^ n_484;
  n_745 = n_78 & n_484;
  n_754 = n_88 ^ n_505;
  n_755 = n_88 & n_505;
  n_764 = n_98 ^ n_524;
  n_765 = n_98 & n_524;
  n_774 = n_110 ^ n_566;
  n_775 = n_110 & n_566;
  n_784 = n_120 ^ n_608;
  n_785 = n_120 & n_608;
  n_796 = n_130 ^ n_650;
  n_797 = n_130 & n_650;
  n_806 = n_140 ^ n_670;
  n_807 = n_140 & n_670;
  n_816 = n_150 ^ n_692;
  n_817 = n_150 & n_692;
  n_826 = n_162 ^ n_713;
  n_827 = n_162 & n_713;
  n_836 = n_163 | n_827;
  n_837 = n_836;
  o |= (n_172 & 0x01) << 0;
  o |= (n_172 & 0x01) << 1;
  o |= (n_732 & 0x01) << 2;
  o |= (n_744 & 0x01) << 3;
  o |= (n_754 & 0x01) << 4;
  o |= (n_764 & 0x01) << 5;
  o |= (n_774 & 0x01) << 6;
  o |= (n_784 & 0x01) << 7;
  o |= (n_796 & 0x01) << 8;
  o |= (n_806 & 0x01) << 9;
  o |= (n_816 & 0x01) << 10;
  o |= (n_826 & 0x01) << 11;
  o |= (n_837 & 0x01) << 12;
  return o;
}
