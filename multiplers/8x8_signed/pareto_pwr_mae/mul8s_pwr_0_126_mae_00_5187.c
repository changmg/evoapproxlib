/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint16_t mul8s_pwr_0_126_mae_00_5187(uint8_t A, uint8_t B)
{
 uint16_t O;
 uint8_t n38,n39,O10,n95,O5,n36,n37,O2,n132,n133,n130,n131,n136,n137,n134,n135,n138,n139,n111,O1,n151,O4,n84,n87,n86,n81,n80,n83,n82,n89,n129,n128,n125,n124,n127,n126,n121,n120,n123,n122,n88,n98,n99,n92,n93,n90,n91,n96,n97,n94,O0,n158,n159,n150,n152,n153,n154,n155,n156,n157,n67,n66,n65,n63,n62,n61,n60,n69,n68,O15,O3,n149,n148,n143,n142,n141,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,O9,n78,n79,n174,n172,O6,n170,n171,n49,n48,n40,n43,n42,n45,n44,n47,O8,n161,n160,n163,n162,n165,n167,n166,n169,n168,O14,O11,n58,n59,n56,n57,n54,n55,n52,n53,n50,n51,n114,n115,n116,n117,n110,n113,O12,n118,n119,O13,n100,O7,n107,n106,n105,n104,n103,n102,n101,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=0;
 O5=0;
 O6=((B >> 3)&1)&((A >> 3)&1);
 n109=((B >> 6)&1)&((A >> 5)&1);
 n110=((B >> 7)&1)&((A >> 4)&1);
 n111=((B >> 5)&1)&((A >> 6)&1);
 n126=((B >> 5)&1)&((A >> 7)&1);
 n134=((B >> 6)&1)&((A >> 6)&1);
 n137=~(((A >> 5)&1)|((A >> 4)&1));
 n161=((B >> 7)&1)&((A >> 6)&1);
 n163=((B >> 6)&1)&((A >> 7)&1);
 n172=((B >> 7)&1)&((A >> 7)&1);
 n37=((B >> 4)&1)&((A >> 4)&1);
 n39=((B >> 3)&1)&((A >> 4)&1);
 n40=((B >> 4)&1)&((A >> 3)&1);
 n43=((B >> 3)&1)&((A >> 5)&1);
 n45=((B >> 5)&1)&((A >> 3)&1);
 n56=((B >> 6)&1)&((A >> 4)&1);
 n58=((B >> 5)&1)&((A >> 4)&1);
 n59=((B >> 6)&1)&((A >> 3)&1);
 n62=((B >> 4)&1)&((A >> 5)&1);
 n63=((B >> 3)&1)&((A >> 6)&1);
 n71=((B >> 3)&1)&((A >> 7)&1);
 n81=((B >> 5)&1)&((A >> 5)&1);
 n83=((B >> 7)&1)&((A >> 3)&1);
 n84=((B >> 4)&1)&((A >> 6)&1);
 n98=((B >> 4)&1)&((A >> 7)&1);
 n108=~n83&n56;
 n132=n109&n110;
 n136=((B >> 7)&1)&~n137;
 n138=((A >> 5)&1)&n110;
 n36=n37&O6;
 n38=~(n40|n39);
 n44=n45^n37;
 n55=n56&n45;
 n57=~(n59|n58);
 n61=n45&n37;
 n82=~(n83^n56);
 O7=~(n38|n36);
 n103=n81&n55;
 n104=n81&n82;
 n105=n82&n55;
 n107=~(n109^n108);
 n131=n109&n108;
 n133=n110&n108;
 n135=~n138&n136;
 n160=~(n161|n136);
 n162=((A >> 6)&1)&n136;
 n42=~(n43^n36);
 n50=n43&n36;
 n51=n43&n44;
 n52=n44&n36;
 n54=~(n57|n55);
 n60=~(n62^n61);
 n77=n62&n61;
 n80=~(n81^n55);
 O8=~(n44^n42);
 n102=~(n104|n103);
 n106=n110^n107;
 n130=~(n132|n131);
 n157=n134&n135;
 n159=~(n162|n160);
 n171=~(n172^n160);
 n49=~(n51|n50);
 n53=n60^n54;
 n76=n62&n54;
 n78=n61&n54;
 n79=n82^n80;
 n101=~n105&n102;
 n124=n111&~n106;
 n129=~n133&n130;
 n48=~n52&n49;
 n69=n63&~n53;
 n75=~(n77|n76);
 n96=n84&~n79;
 n100=~(n106^n101);
 n123=~(n106|n101);
 n125=n111&~n101;
 n128=n134^n129;
 n156=n134&~n129;
 n158=n135&~n129;
 n47=~(n53^n48);
 n68=~(n53|n48);
 n70=n63&~n48;
 n74=~n78&n75;
 O9=~(n63^n47);
 n122=~(n124|n123);
 n127=n135^n128;
 n155=~(n157|n156);
 n67=~(n69|n68);
 n73=~(n79^n74);
 n95=~(n79|n74);
 n97=n84&~n74;
 n99=n111^n100;
 n117=~(n98|n99);
 n121=~n125&n122;
 n150=~(n126|n127);
 n154=~n158&n155;
 n66=~n70&n67;
 n72=n84^n73;
 n94=~(n96|n95);
 n120=~(n126^n121);
 n149=~(n126|n121);
 n151=~(n127|n121);
 n153=n159^n154;
 n65=~(n71^n66);
 n88=~(n71|n66);
 n89=~(n71|n72);
 n90=~(n66|n72);
 n93=~n97&n94;
 O10=n72^n65;
 n116=~(n98|n93);
 n118=~(n99|n93);
 n119=~(n127^n120);
 n148=~(n150|n149);
 n152=~(n163^n153);
 n87=~(n89|n88);
 n92=~(n98^n93);
 n115=~(n117|n116);
 n147=~n151&n148;
 n86=~n90&n87;
 n91=~(n99^n92);
 O11=n91^n86;
 n114=~n118&n115;
 n139=~(n91|n86);
 n113=~(n119^n114);
 n144=~(n119|n114);
 n145=~n119&n139;
 n146=~n114&n139;
 O12=~(n139^n113);
 n143=~(n145|n144);
 n142=~n146&n143;
 n141=n147^n142;
 n168=n147&n142;
 O13=~(n152^n141);
 n167=n154&n168;
 n170=~(n154|n168);
 n166=~(n163|n167);
 n169=~(n159|n170);
 n165=n169&~n166;
 O14=n171^n165;
 n174=n160&~n165;
 O15=~(n172|n174);
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15);
 return O;
}

// internal reference: truncation-tm.08.trun8_tams03a

