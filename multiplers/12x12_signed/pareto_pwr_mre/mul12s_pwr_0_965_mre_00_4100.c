/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint32_t mul12s_pwr_0_965_mre_00_4100(uint16_t A, uint16_t B)
{
 uint32_t O;
 uint8_t n563,n550,O8,n492,n97,n552,n538,n539,n536,n537,n534,n535,n532,n533,n530,n531,n657,O21,n656,n569,n788,n568,O14,O4,n85,n84,n87,n86,n81,n80,n83,n82,n402,n403,n400,n401,n89,n404,n405,n659,n658,n392,n393,n390,n391,n396,n397,n394,n395,n398,n399,n711,n240,n241,n242,n243,n244,n245,n710,n247,n248,n249,n718,n719,n499,n498,n329,n328,n327,n326,n325,n496,n323,n322,n321,n320,n811,n810,n813,n812,n815,n814,n817,n816,n819,n818,n633,n407,n891,n771,n602,n424,n893,n605,n662,n663,n149,n148,n666,n667,n888,n889,n143,n887,n884,n885,n147,n146,n145,n144,n74,n75,n76,n70,n71,n72,n73,n78,n79,n864,n866,n867,n860,n861,n862,n863,n868,n869,O11,n895,n339,n701,n894,n700,n703,n565,n222,n567,n566,n561,n560,n448,n449,n446,n447,n444,n445,n442,n443,n440,n441,O1,n221,n707,n843,n226,n706,n227,n224,n708,n225,O15,n511,n845,n693,n692,n690,n697,n696,n695,n694,n699,n698,n363,n362,n361,n360,n367,n366,n365,n364,n369,n368,O17,n598,n599,n590,n591,n592,n593,n594,n595,n596,n597,n510,O13,n910,n223,n626,n627,n624,n625,n622,n623,n620,n621,n187,n186,n185,n184,n183,n182,n628,n180,n486,n749,n219,n218,n745,n744,n747,n746,n741,n740,n743,n742,n828,n829,n820,n821,n822,n823,O5,n825,n826,n827,O2,n836,n132,n133,n130,n136,n137,n134,n135,n138,n139,n408,n529,n528,n409,n521,n520,n523,n522,n525,n524,n527,n526,n883,n899,n661,n92,n88,n415,n414,n417,n416,n855,n410,n413,n412,n796,n797,n795,n419,n793,n790,n791,n98,n99,n558,n559,n645,n554,n555,n556,n91,n96,n551,n94,n553,n641,n389,n388,n385,n384,n387,n386,n381,n380,n383,n382,n173,n253,n252,n251,n250,n257,n256,n255,n254,n709,n648,n259,n258,n649,n318,n319,n312,n313,n310,n311,n316,n317,n314,n315,O9,n504,n898,n575,O22,n176,n177,n174,n175,n172,O6,n171,n178,n179,n774,n775,n776,n777,n679,n678,n772,n773,n675,n674,n677,n676,n671,n670,n673,n672,n877,n876,n875,n874,n873,n872,n871,n870,O19,n668,n95,n879,n878,n892,n189,n778,n188,n779,n897,n669,n896,O23,n702,n459,n458,n512,n513,n514,n181,n516,n517,n451,n450,n453,n452,n455,n454,n457,n456,n798,n220,O12,n716,n717,n714,n493,n715,n216,n712,n215,n713,n792,n214,n428,n246,n358,n359,n356,n213,n354,n355,n352,n353,n350,n212,n589,n588,n211,n583,n582,n581,n210,n587,n586,n585,n584,n909,n908,n907,n906,n905,n903,n902,n901,n900,n631,n630,n705,n632,n635,n634,n637,n636,n639,n487,n738,n739,n228,n229,n730,n731,n732,n733,n734,n735,n736,n737,n279,n278,n495,n839,n838,n494,n833,n832,n831,n830,n837,n497,n834,n324,n491,n490,n644,n378,n646,n647,n129,n128,n642,n379,n125,n124,n127,n126,n121,n120,n123,n122,n418,n758,n824,n759,O16,n460,n461,n462,n463,n464,n465,n466,n467,n468,n469,n783,n782,n785,n784,n787,n786,n789,n549,n548,n547,n546,n545,n544,n543,n542,n541,n540,n341,n340,n343,n562,n434,n345,n344,n781,n347,n780,n346,n305,n304,n307,n306,n301,n300,n268,n269,n266,n267,n264,n265,n309,n263,n260,n261,n425,n638,n284,n285,n286,n287,n280,n281,n282,n283,n288,n289,n608,n161,n160,n163,n162,n165,n164,n167,n166,n169,n168,n427,n767,n609,n765,n764,n763,n762,n761,n760,n600,n601,n603,n604,O3,n606,n607,n58,n59,n56,n54,n55,n52,n53,n842,n518,n840,n841,n846,n847,n844,n519,n848,n849,n421,n660,n114,n115,n116,n117,n110,n111,n112,n113,n118,n119,n664,n665,n503,n886,n501,n500,n507,n506,n505,n142,n509,n508,n141,n140,O7,n423,n882,n766,n704,n880,n881,n750,n489,n349,n348,n439,n438,n437,n436,n435,n342,n433,n432,n431,n430,n751,n756,n757,n613,n236,n612,n611,n235,n234,n237,n207,n231,n230,n233,n232,n200,n337,n239,n238,n616,n482,n483,n480,n728,n338,n202,n485,n334,n722,n721,n614,n330,n331,n332,n333,n806,n807,n804,n805,n802,n803,n800,n801,n808,n809,O20,O18,n729,O0,n158,n159,n655,n654,n653,n652,n651,n650,n150,n151,n152,n153,n154,n155,n156,n157,n67,n66,n65,n64,n63,n484,n61,n60,n69,n68,n723,n643,n336,n720,n303,n727,n302,n726,n725,n724,O10,n262,n308,n473,n472,n471,n470,n477,n476,n475,n474,n479,n478,n578,n579,n572,n573,n570,n571,n576,n577,n574,n515,n488,n680,n681,n682,n683,n684,n685,n686,n687,n688,n689,n429,n370,n371,n372,n373,n374,n375,n376,n377,n271,n270,n273,n275,n274,n277,n276,n502,n769,n357,n411,n426,n297,n296,n295,n294,n293,n292,n291,n290,n420,n799,n299,n298,n768,n422,n351,n198,n199,n194,n195,n196,n197,n190,n191,n192,n193,n752,n753,n619,n618,n208,n209,n754,n755,n204,n205,n206,n610,n617,n201,n615,n203,n640,n859,n858,n770,n854,n857,n856,n851,n850,n853,n852,n580,n564,n107,n106,n105,n104,n103,n102,n101,n93,n90,n109,n108;
 O0=0;
 O1=0;
 O2=((B >> 1)&1)&((A >> 1)&1);
 n124=((B >> 4)&1)&((A >> 3)&1);
 n126=((B >> 6)&1)&((A >> 1)&1);
 n127=((B >> 5)&1)&((A >> 2)&1);
 n128=((B >> 3)&1)&((A >> 4)&1);
 n129=((B >> 2)&1)&((A >> 5)&1);
 n130=((B >> 1)&1)&((A >> 6)&1);
 n162=((B >> 5)&1)&((A >> 3)&1);
 n164=((B >> 7)&1)&((A >> 1)&1);
 n165=((B >> 6)&1)&((A >> 2)&1);
 n166=((B >> 4)&1)&((A >> 4)&1);
 n167=((B >> 3)&1)&((A >> 5)&1);
 n168=((B >> 2)&1)&((A >> 6)&1);
 n169=((B >> 1)&1)&((A >> 7)&1);
 n208=((B >> 6)&1)&((A >> 3)&1);
 n210=((B >> 8)&1)&((A >> 1)&1);
 n211=((B >> 7)&1)&((A >> 2)&1);
 n212=((B >> 5)&1)&((A >> 4)&1);
 n213=((B >> 4)&1)&((A >> 5)&1);
 n214=((B >> 3)&1)&((A >> 6)&1);
 n215=((B >> 2)&1)&((A >> 7)&1);
 n216=((B >> 1)&1)&((A >> 8)&1);
 n262=((B >> 7)&1)&((A >> 3)&1);
 n264=((B >> 9)&1)&((A >> 1)&1);
 n265=((B >> 8)&1)&((A >> 2)&1);
 n266=((B >> 6)&1)&((A >> 4)&1);
 n267=((B >> 5)&1)&((A >> 5)&1);
 n268=((B >> 4)&1)&((A >> 6)&1);
 n269=((B >> 3)&1)&((A >> 7)&1);
 n270=((B >> 2)&1)&((A >> 8)&1);
 n271=((B >> 1)&1)&((A >> 9)&1);
 n324=((B >> 8)&1)&((A >> 3)&1);
 n326=((B >> 10)&1)&((A >> 1)&1);
 n327=((B >> 9)&1)&((A >> 2)&1);
 n328=((B >> 7)&1)&((A >> 4)&1);
 n329=((B >> 6)&1)&((A >> 5)&1);
 n330=((B >> 5)&1)&((A >> 6)&1);
 n331=((B >> 4)&1)&((A >> 7)&1);
 n332=((B >> 3)&1)&((A >> 8)&1);
 n333=((B >> 2)&1)&((A >> 9)&1);
 n334=((B >> 1)&1)&((A >> 10)&1);
 n342=((B >> 1)&1)&((A >> 11)&1);
 n395=((B >> 9)&1)&((A >> 3)&1);
 n397=((B >> 11)&1)&((A >> 1)&1);
 n398=((B >> 10)&1)&((A >> 2)&1);
 n399=((B >> 8)&1)&((A >> 4)&1);
 n400=((B >> 7)&1)&((A >> 5)&1);
 n401=((B >> 6)&1)&((A >> 6)&1);
 n402=((B >> 5)&1)&((A >> 7)&1);
 n403=((B >> 4)&1)&((A >> 8)&1);
 n404=((B >> 3)&1)&((A >> 9)&1);
 n405=((B >> 2)&1)&((A >> 10)&1);
 n419=((B >> 2)&1)&((A >> 11)&1);
 n472=((B >> 10)&1)&((A >> 3)&1);
 n473=((B >> 11)&1)&((A >> 2)&1);
 n474=((B >> 9)&1)&((A >> 4)&1);
 n475=((B >> 8)&1)&((A >> 5)&1);
 n476=((B >> 7)&1)&((A >> 6)&1);
 n477=((B >> 6)&1)&((A >> 7)&1);
 n478=((B >> 5)&1)&((A >> 8)&1);
 n479=((B >> 4)&1)&((A >> 9)&1);
 n480=((B >> 3)&1)&((A >> 10)&1);
 n496=((B >> 3)&1)&((A >> 11)&1);
 n53=((B >> 2)&1)&((A >> 2)&1);
 n539=((B >> 9)&1)&((A >> 5)&1);
 n547=((B >> 10)&1)&((A >> 4)&1);
 n55=((B >> 1)&1)&((A >> 2)&1);
 n550=~(((A >> 3)&1)|((A >> 2)&1));
 n552=((B >> 8)&1)&((A >> 6)&1);
 n553=((B >> 7)&1)&((A >> 7)&1);
 n554=((B >> 6)&1)&((A >> 8)&1);
 n555=((B >> 5)&1)&((A >> 9)&1);
 n556=((B >> 4)&1)&((A >> 10)&1);
 n56=((B >> 2)&1)&((A >> 1)&1);
 n576=((B >> 4)&1)&((A >> 11)&1);
 n59=((B >> 1)&1)&((A >> 3)&1);
 n61=((B >> 3)&1)&((A >> 1)&1);
 n612=((B >> 9)&1)&((A >> 6)&1);
 n620=((B >> 10)&1)&((A >> 5)&1);
 n623=((B >> 11)&1)&((A >> 4)&1);
 n625=((B >> 8)&1)&((A >> 7)&1);
 n626=((B >> 7)&1)&((A >> 8)&1);
 n627=((B >> 6)&1)&((A >> 9)&1);
 n628=((B >> 5)&1)&((A >> 10)&1);
 n648=((B >> 5)&1)&((A >> 11)&1);
 n685=((B >> 11)&1)&((A >> 5)&1);
 n686=((B >> 10)&1)&((A >> 6)&1);
 n687=((B >> 9)&1)&((A >> 7)&1);
 n688=((B >> 8)&1)&((A >> 8)&1);
 n689=((B >> 7)&1)&((A >> 9)&1);
 n690=((B >> 6)&1)&((A >> 10)&1);
 n710=((B >> 6)&1)&((A >> 11)&1);
 n72=((B >> 2)&1)&((A >> 3)&1);
 n732=((B >> 9)&1)&((A >> 8)&1);
 n74=((B >> 4)&1)&((A >> 1)&1);
 n740=((B >> 10)&1)&((A >> 7)&1);
 n744=((B >> 11)&1)&((A >> 6)&1);
 n746=((B >> 8)&1)&((A >> 9)&1);
 n747=((B >> 7)&1)&((A >> 10)&1);
 n75=((B >> 3)&1)&((A >> 2)&1);
 n76=((B >> 1)&1)&((A >> 4)&1);
 n767=((B >> 7)&1)&((A >> 11)&1);
 n790=((B >> 11)&1)&((A >> 7)&1);
 n791=((B >> 10)&1)&((A >> 8)&1);
 n792=((B >> 9)&1)&((A >> 9)&1);
 n793=((B >> 8)&1)&((A >> 10)&1);
 n813=((B >> 8)&1)&((A >> 11)&1);
 n821=((B >> 9)&1)&((A >> 10)&1);
 n829=((B >> 10)&1)&((A >> 9)&1);
 n833=((B >> 11)&1)&((A >> 8)&1);
 n854=((B >> 9)&1)&((A >> 11)&1);
 n863=((B >> 11)&1)&((A >> 9)&1);
 n864=((B >> 10)&1)&((A >> 10)&1);
 n884=((B >> 10)&1)&((A >> 11)&1);
 n888=((B >> 11)&1)&((A >> 10)&1);
 n903=((B >> 11)&1)&((A >> 11)&1);
 n94=((B >> 3)&1)&((A >> 3)&1);
 n96=((B >> 5)&1)&((A >> 1)&1);
 n97=((B >> 4)&1)&((A >> 2)&1);
 n98=((B >> 2)&1)&((A >> 4)&1);
 n99=((B >> 1)&1)&((A >> 5)&1);
 n123=n97&n96;
 n125=n127^n126;
 n161=n127&n126;
 n163=n165^n164;
 n207=n165&n164;
 n209=n211^n210;
 n261=n211&n210;
 n263=n265^n264;
 n323=n265&n264;
 n325=n327^n326;
 n394=n327&n326;
 n396=~(n398^n397);
 n471=n398&~n397;
 n52=n53&O2;
 n54=~(n56|n55);
 n545=n472&n473;
 n549=((B >> 11)&1)&~n550;
 n551=((A >> 3)&1)&n473;
 n60=n61^n53;
 n71=n61&n53;
 n73=n75^n74;
 n93=n75&n74;
 n95=n97^n96;
 O3=~(n54|n52);
 n118=n94&n93;
 n119=n94&n95;
 n120=n95&n93;
 n122=~(n124^n123);
 n156=n124&n123;
 n157=n124&n125;
 n158=n125&n123;
 n160=~(n162^n161);
 n202=n162&n161;
 n203=n162&n163;
 n204=n163&n161;
 n206=~(n208^n207);
 n256=n208&n207;
 n257=n208&n209;
 n258=n209&n207;
 n260=~(n262^n261);
 n318=n262&n261;
 n319=n262&n263;
 n320=n263&n261;
 n322=~(n324^n323);
 n389=n324&n323;
 n390=n324&n325;
 n391=n325&n323;
 n393=~(n395^n394);
 n466=n395&n394;
 n467=n395&n396;
 n468=n396&n394;
 n470=~(n472^n471);
 n544=n472&n471;
 n546=n473&n471;
 n548=~n551&n549;
 n58=~(n59^n52);
 n622=~(n623|n549);
 n624=((A >> 4)&1)&n549;
 n66=n59&n52;
 n67=n59&n60;
 n68=n60&n52;
 n70=~(n72^n71);
 n88=n72&n71;
 n89=n72&n73;
 n90=n73&n71;
 n92=~(n94^n93);
 O4=~(n60^n58);
 n117=~(n119|n118);
 n121=n125^n122;
 n155=~(n157|n156);
 n159=n163^n160;
 n201=~(n203|n202);
 n205=n209^n206;
 n255=~(n257|n256);
 n259=n263^n260;
 n317=~(n319|n318);
 n321=n325^n322;
 n388=~(n390|n389);
 n392=n396^n393;
 n465=~(n467|n466);
 n469=n473^n470;
 n543=~(n545|n544);
 n618=n547&n548;
 n621=~(n624|n622);
 n65=~(n67|n66);
 n684=~(n685^n622);
 n69=n73^n70;
 n743=~n685&n622;
 n87=~(n89|n88);
 n91=n95^n92;
 n112=n98&~n91;
 n116=~n120&n117;
 n150=n128&~n121;
 n154=~n158&n155;
 n196=n166&~n159;
 n200=~n204&n201;
 n250=n212&~n205;
 n254=~n258&n255;
 n312=n266&~n259;
 n316=~n320&n317;
 n383=n328&~n321;
 n387=~n391&n388;
 n460=n399&~n392;
 n464=~n468&n465;
 n537=n474&~n469;
 n542=~n546&n543;
 n64=~n68&n65;
 n682=n620&n621;
 n738=n686&n684;
 n742=~n744&n743;
 n745=((A >> 6)&1)&~n743;
 n82=n76&~n69;
 n86=~n90&n87;
 n111=~(n91|n86);
 n113=n98&~n86;
 n115=~(n121^n116);
 n149=~(n121|n116);
 n151=n128&~n116;
 n153=~(n159^n154);
 n195=~(n159|n154);
 n197=n166&~n154;
 n199=~(n205^n200);
 n249=~(n205|n200);
 n251=n212&~n200;
 n253=~(n259^n254);
 n311=~(n259|n254);
 n313=n266&~n254;
 n315=~(n321^n316);
 n382=~(n321|n316);
 n384=n328&~n316;
 n386=~(n392^n387);
 n459=~(n392|n387);
 n461=n399&~n387;
 n463=~(n469^n464);
 n536=~(n469|n464);
 n538=n474&~n464;
 n541=n547^n542;
 n617=n547&~n542;
 n619=n548&~n542;
 n63=~(n69^n64);
 n741=~(n745|n742);
 n789=~(n790^n742);
 n81=~(n69|n64);
 n83=n76&~n64;
 n832=~n790&n742;
 n85=~(n91^n86);
 O5=~(n76^n63);
 n110=~(n112|n111);
 n114=n128^n115;
 n148=~(n150|n149);
 n152=n166^n153;
 n194=~(n196|n195);
 n198=n212^n199;
 n248=~(n250|n249);
 n252=n266^n253;
 n310=~(n312|n311);
 n314=n328^n315;
 n381=~(n383|n382);
 n385=n399^n386;
 n458=~(n460|n459);
 n462=n474^n463;
 n535=~(n537|n536);
 n540=n548^n541;
 n616=~(n618|n617);
 n787=n740&n741;
 n80=~(n82|n81);
 n827=n791&n789;
 n831=~n833&n832;
 n834=((A >> 8)&1)&~n832;
 n84=n98^n85;
 n106=n99&~n84;
 n109=~n113&n110;
 n144=n129&~n114;
 n147=~n151&n148;
 n190=n167&~n152;
 n193=~n197&n194;
 n244=n213&~n198;
 n247=~n251&n248;
 n306=n267&~n252;
 n309=~n313&n310;
 n377=n329&~n314;
 n380=~n384&n381;
 n454=n400&~n385;
 n457=~n461&n458;
 n531=n475&~n462;
 n534=~n538&n535;
 n610=n539&~n540;
 n615=~n619&n616;
 n79=~n83&n80;
 n830=~(n834|n831);
 n862=~(n863^n831);
 n887=~n863&n831;
 n104=~(n84|n79);
 n105=n99&~n79;
 n108=~(n114^n109);
 n142=~(n114|n109);
 n143=n129&~n109;
 n146=~(n152^n147);
 n188=~(n152|n147);
 n189=n167&~n147;
 n192=~(n198^n193);
 n242=~(n198|n193);
 n243=n213&~n193;
 n246=~(n252^n247);
 n304=~(n252|n247);
 n305=n267&~n247;
 n308=~(n314^n309);
 n375=~(n314|n309);
 n376=n329&~n309;
 n379=~(n385^n380);
 n452=~(n385|n380);
 n453=n400&~n380;
 n456=~(n462^n457);
 n529=~(n462|n457);
 n530=n475&~n457;
 n533=n539^n534;
 n609=n539&~n534;
 n611=~(n540|n534);
 n614=n620^n615;
 n681=n620&~n615;
 n683=n621&~n615;
 n78=~(n84^n79);
 n860=n829&n830;
 n882=n864&n862;
 n886=~n888&n887;
 n889=((A >> 10)&1)&~n887;
 O6=~(n99^n78);
 n103=~(n105|n104);
 n107=n129^n108;
 n141=~(n143|n142);
 n145=n167^n146;
 n187=~(n189|n188);
 n191=n213^n192;
 n241=~(n243|n242);
 n245=n267^n246;
 n303=~(n305|n304);
 n307=n329^n308;
 n374=~(n376|n375);
 n378=n400^n379;
 n451=~(n453|n452);
 n455=n475^n456;
 n528=~(n530|n529);
 n532=~(n540^n533);
 n608=~(n610|n609);
 n613=n621^n614;
 n680=~(n682|n681);
 n885=~(n889|n886);
 n902=~(n903^n886);
 n909=n903&n886;
 n102=~n106&n103;
 n137=n130&~n107;
 n140=~n144&n141;
 n183=n168&~n145;
 n186=~n190&n187;
 n237=n214&~n191;
 n240=~n244&n241;
 n299=n268&~n245;
 n302=~n306&n303;
 n370=n330&~n307;
 n373=~n377&n374;
 n447=n401&~n378;
 n450=~n454&n451;
 n524=n476&~n455;
 n527=~n531&n528;
 n603=n552&~n532;
 n607=~n611&n608;
 n675=n612&~n613;
 n679=~n683&n680;
 n900=~n884&n885;
 n101=~(n107^n102);
 n135=~(n107|n102);
 n136=n130&~n102;
 n139=~(n145^n140);
 n181=~(n145|n140);
 n182=n168&~n140;
 n185=~(n191^n186);
 n235=~(n191|n186);
 n236=n214&~n186;
 n239=~(n245^n240);
 n297=~(n245|n240);
 n298=n268&~n240;
 n301=~(n307^n302);
 n368=~(n307|n302);
 n369=n330&~n302;
 n372=~(n378^n373);
 n445=~(n378|n373);
 n446=n401&~n373;
 n449=~(n455^n450);
 n522=~(n455|n450);
 n523=n476&~n450;
 n526=~(n532^n527);
 n602=~(n532|n527);
 n604=n552&~n527;
 n606=n612^n607;
 n674=n612&~n607;
 n676=~(n613|n607);
 n678=n684^n679;
 n737=n684&~n679;
 n739=n686&~n679;
 O7=~(n130^n101);
 n134=~(n136|n135);
 n138=n168^n139;
 n180=~(n182|n181);
 n184=n214^n185;
 n234=~(n236|n235);
 n238=n268^n239;
 n296=~(n298|n297);
 n300=n330^n301;
 n367=~(n369|n368);
 n371=n401^n372;
 n444=~(n446|n445);
 n448=n476^n449;
 n521=~(n523|n522);
 n525=n552^n526;
 n601=~(n603|n602);
 n605=~(n613^n606);
 n673=~(n675|n674);
 n677=n686^n678;
 n736=~(n738|n737);
 n133=~n137&n134;
 n176=n169&~n138;
 n179=~n183&n180;
 n230=n215&~n184;
 n233=~n237&n234;
 n292=n269&~n238;
 n295=~n299&n296;
 n363=n331&~n300;
 n366=~n370&n367;
 n440=n402&~n371;
 n443=~n447&n444;
 n517=n477&~n448;
 n520=~n524&n521;
 n596=n553&~n525;
 n600=~n604&n601;
 n668=n625&~n605;
 n672=~n676&n673;
 n730=n687&~n677;
 n735=~n739&n736;
 n132=~(n138^n133);
 n174=~(n138|n133);
 n175=n169&~n133;
 n178=~(n184^n179);
 n228=~(n184|n179);
 n229=n215&~n179;
 n232=~(n238^n233);
 n290=~(n238|n233);
 n291=n269&~n233;
 n294=~(n300^n295);
 n361=~(n300|n295);
 n362=n331&~n295;
 n365=~(n371^n366);
 n438=~(n371|n366);
 n439=n402&~n366;
 n442=~(n448^n443);
 n515=~(n448|n443);
 n516=n477&~n443;
 n519=~(n525^n520);
 n595=~(n525|n520);
 n597=n553&~n520;
 n599=~(n605^n600);
 n667=~(n605|n600);
 n669=n625&~n600;
 n671=~(n677^n672);
 n729=~(n677|n672);
 n731=n687&~n672;
 n734=n740^n735;
 n786=n740&~n735;
 n788=n741&~n735;
 O8=~(n169^n132);
 n173=~(n175|n174);
 n177=n215^n178;
 n227=~(n229|n228);
 n231=n269^n232;
 n289=~(n291|n290);
 n293=n331^n294;
 n360=~(n362|n361);
 n364=n402^n365;
 n437=~(n439|n438);
 n441=n477^n442;
 n514=~(n516|n515);
 n518=n553^n519;
 n594=~(n596|n595);
 n598=n625^n599;
 n666=~(n668|n667);
 n670=n687^n671;
 n728=~(n730|n729);
 n733=n741^n734;
 n785=~(n787|n786);
 n172=~n176&n173;
 n223=n216&~n177;
 n226=~n230&n227;
 n285=n270&~n231;
 n288=~n292&n289;
 n356=n332&~n293;
 n359=~n363&n360;
 n433=n403&~n364;
 n436=~n440&n437;
 n510=n478&~n441;
 n513=~n517&n514;
 n589=n554&~n518;
 n593=~n597&n594;
 n661=n626&~n598;
 n665=~n669&n666;
 n723=n688&~n670;
 n727=~n731&n728;
 n780=n732&~n733;
 n784=~n788&n785;
 n171=~(n177^n172);
 n221=~(n177|n172);
 n222=n216&~n172;
 n225=~(n231^n226);
 n283=~(n231|n226);
 n284=n270&~n226;
 n287=~(n293^n288);
 n354=~(n293|n288);
 n355=n332&~n288;
 n358=~(n364^n359);
 n431=~(n364|n359);
 n432=n403&~n359;
 n435=~(n441^n436);
 n508=~(n441|n436);
 n509=n478&~n436;
 n512=~(n518^n513);
 n588=~(n518|n513);
 n590=n554&~n513;
 n592=~(n598^n593);
 n660=~(n598|n593);
 n662=n626&~n593;
 n664=~(n670^n665);
 n722=~(n670|n665);
 n724=n688&~n665;
 n726=n732^n727;
 n779=n732&~n727;
 n781=~(n733|n727);
 n783=n789^n784;
 n826=n789&~n784;
 n828=n791&~n784;
 O9=~(n216^n171);
 n220=~(n222|n221);
 n224=n270^n225;
 n282=~(n284|n283);
 n286=n332^n287;
 n353=~(n355|n354);
 n357=n403^n358;
 n430=~(n432|n431);
 n434=n478^n435;
 n507=~(n509|n508);
 n511=n554^n512;
 n587=~(n589|n588);
 n591=n626^n592;
 n659=~(n661|n660);
 n663=n688^n664;
 n721=~(n723|n722);
 n725=~(n733^n726);
 n778=~(n780|n779);
 n782=n791^n783;
 n825=~(n827|n826);
 n219=~n223&n220;
 n278=n271&~n224;
 n281=~n285&n282;
 n349=n333&~n286;
 n352=~n356&n353;
 n426=n404&~n357;
 n429=~n433&n430;
 n503=n479&~n434;
 n506=~n510&n507;
 n582=n555&~n511;
 n586=~n590&n587;
 n654=n627&~n591;
 n658=~n662&n659;
 n716=n689&~n663;
 n720=~n724&n721;
 n773=n746&~n725;
 n777=~n781&n778;
 n819=n792&~n782;
 n824=~n828&n825;
 n218=~(n224^n219);
 n276=~(n224|n219);
 n277=n271&~n219;
 n280=~(n286^n281);
 n347=~(n286|n281);
 n348=n333&~n281;
 n351=~(n357^n352);
 n424=~(n357|n352);
 n425=n404&~n352;
 n428=~(n434^n429);
 n501=~(n434|n429);
 n502=n479&~n429;
 n505=~(n511^n506);
 n581=~(n511|n506);
 n583=n555&~n506;
 n585=~(n591^n586);
 n653=~(n591|n586);
 n655=n627&~n586;
 n657=~(n663^n658);
 n715=~(n663|n658);
 n717=n689&~n658;
 n719=~(n725^n720);
 n772=~(n725|n720);
 n774=n746&~n720;
 n776=~(n782^n777);
 n818=~(n782|n777);
 n820=n792&~n777;
 n823=n829^n824;
 n859=n829&~n824;
 n861=n830&~n824;
 O10=~(n271^n218);
 n275=~(n277|n276);
 n279=n333^n280;
 n346=~(n348|n347);
 n350=n404^n351;
 n423=~(n425|n424);
 n427=n479^n428;
 n500=~(n502|n501);
 n504=n555^n505;
 n580=~(n582|n581);
 n584=n627^n585;
 n652=~(n654|n653);
 n656=n689^n657;
 n714=~(n716|n715);
 n718=n746^n719;
 n771=~(n773|n772);
 n775=n792^n776;
 n817=~(n819|n818);
 n822=n830^n823;
 n858=~(n860|n859);
 n274=~n278&n275;
 n341=n334&~n279;
 n345=~n349&n346;
 n418=n405&~n350;
 n422=~n426&n423;
 n495=n480&~n427;
 n499=~n503&n500;
 n574=n556&~n504;
 n579=~n583&n580;
 n646=n628&~n584;
 n651=~n655&n652;
 n708=n690&~n656;
 n713=~n717&n714;
 n765=n747&~n718;
 n770=~n774&n771;
 n811=n793&~n775;
 n816=~n820&n817;
 n852=n821&~n822;
 n857=~n861&n858;
 n273=~(n279^n274);
 n339=~(n279|n274);
 n340=n334&~n274;
 n344=~(n350^n345);
 n416=~(n350|n345);
 n417=n405&~n345;
 n421=~(n427^n422);
 n493=~(n427|n422);
 n494=n480&~n422;
 n498=~(n504^n499);
 n573=~(n504|n499);
 n575=n556&~n499;
 n578=~(n584^n579);
 n645=~(n584|n579);
 n647=n628&~n579;
 n650=~(n656^n651);
 n707=~(n656|n651);
 n709=n690&~n651;
 n712=~(n718^n713);
 n764=~(n718|n713);
 n766=n747&~n713;
 n769=~(n775^n770);
 n810=~(n775|n770);
 n812=n793&~n770;
 n815=n821^n816;
 n851=n821&~n816;
 n853=~(n822|n816);
 n856=n862^n857;
 n881=n862&~n857;
 n883=n864&~n857;
 O11=~(n334^n273);
 n338=~(n340|n339);
 n343=n405^n344;
 n415=~(n417|n416);
 n420=n480^n421;
 n492=~(n494|n493);
 n497=n556^n498;
 n572=~(n574|n573);
 n577=n628^n578;
 n644=~(n646|n645);
 n649=n690^n650;
 n706=~(n708|n707);
 n711=n747^n712;
 n763=~(n765|n764);
 n768=n793^n769;
 n809=~(n811|n810);
 n814=~(n822^n815);
 n850=~(n852|n851);
 n855=n864^n856;
 n880=~(n882|n881);
 n337=~n341&n338;
 n410=~(n342|n343);
 n414=~n418&n415;
 n487=~(n419|n420);
 n491=~n495&n492;
 n567=~(n496|n497);
 n571=~n575&n572;
 n639=~(n576|n577);
 n643=~n647&n644;
 n701=~(n648|n649);
 n705=~n709&n706;
 n758=~(n710|n711);
 n762=~n766&n763;
 n804=~(n767|n768);
 n808=~n812&n809;
 n845=~(n813|n814);
 n849=~n853&n850;
 n875=~(n854|n855);
 n879=~n883&n880;
 n336=~(n342^n337);
 n409=~(n342|n337);
 n411=~(n343|n337);
 n413=~(n419^n414);
 n486=~(n419|n414);
 n488=~(n420|n414);
 n490=~(n496^n491);
 n566=~(n496|n491);
 n568=~(n497|n491);
 n570=~(n576^n571);
 n638=~(n576|n571);
 n640=~(n577|n571);
 n642=~(n648^n643);
 n700=~(n648|n643);
 n702=~(n649|n643);
 n704=~(n710^n705);
 n757=~(n710|n705);
 n759=~(n711|n705);
 n761=~(n767^n762);
 n803=~(n767|n762);
 n805=~(n768|n762);
 n807=~(n813^n808);
 n844=~(n813|n808);
 n846=~(n814|n808);
 n848=~(n854^n849);
 n874=~(n854|n849);
 n876=~(n855|n849);
 n878=~(n884^n879);
 n899=~(n884|n879);
 n901=n885&~n879;
 O12=n343^n336;
 n408=~(n410|n409);
 n412=~(n420^n413);
 n485=~(n487|n486);
 n489=~(n497^n490);
 n565=~(n567|n566);
 n569=~(n577^n570);
 n637=~(n639|n638);
 n641=~(n649^n642);
 n699=~(n701|n700);
 n703=~(n711^n704);
 n756=~(n758|n757);
 n760=~(n768^n761);
 n802=~(n804|n803);
 n806=~(n814^n807);
 n843=~(n845|n844);
 n847=~(n855^n848);
 n873=~(n875|n874);
 n877=n885^n878;
 n898=~(n900|n899);
 n407=~n411&n408;
 n484=~n488&n485;
 n564=~n568&n565;
 n636=~n640&n637;
 n698=~n702&n699;
 n755=~n759&n756;
 n801=~n805&n802;
 n842=~n846&n843;
 n872=~n876&n873;
 n897=~n901&n898;
 O13=n412^n407;
 n482=~(n412|n407);
 n483=~(n489^n484);
 n562=~(n489|n484);
 n634=~(n569|n564);
 n696=~(n641|n636);
 n753=~(n703|n698);
 n799=~(n760|n755);
 n840=~(n806|n801);
 n870=~(n847|n842);
 n895=~(n877|n872);
 n908=~(n902|n897);
 O14=~(n483^n482);
 n561=~n489&n482;
 n563=~n484&n482;
 n907=~(n909|n908);
 n560=~(n562|n561);
 n559=~n563&n560;
 n558=~(n564^n559);
 n633=~(n564|n559);
 n635=~(n569|n559);
 O15=n569^n558;
 n632=~(n634|n633);
 n631=~n635&n632;
 n630=~(n636^n631);
 n695=~(n636|n631);
 n697=~(n641|n631);
 O16=n641^n630;
 n694=~(n696|n695);
 n693=~n697&n694;
 n692=~(n698^n693);
 n752=~(n698|n693);
 n754=~(n703|n693);
 O17=n703^n692;
 n751=~(n753|n752);
 n750=~n754&n751;
 n749=~(n755^n750);
 n798=~(n755|n750);
 n800=~(n760|n750);
 O18=n760^n749;
 n797=~(n799|n798);
 n796=~n800&n797;
 n795=~(n801^n796);
 n839=~(n801|n796);
 n841=~(n806|n796);
 O19=n806^n795;
 n838=~(n840|n839);
 n837=~n841&n838;
 n836=~(n842^n837);
 n869=~(n842|n837);
 n871=~(n847|n837);
 O20=n847^n836;
 n868=~(n870|n869);
 n867=~n871&n868;
 n866=~(n872^n867);
 n894=~(n872|n867);
 n896=~(n877|n867);
 O21=n877^n866;
 n893=~(n895|n894);
 n892=~n896&n893;
 n891=~(n897^n892);
 n906=~(n897|n892);
 n910=~(n902|n892);
 O22=n902^n891;
 n905=n907&~n906;
 O23=~n910&n905;
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15)|(O16 << 16)|(O17 << 17)|(O18 << 18)|(O19 << 19)|(O20 << 20)|(O21 << 21)|(O22 << 22)|(O23 << 23);
 return O;
}

// internal reference: truncation-tm.12.trun12_tams01a

