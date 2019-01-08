/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/

// ../../../cgp.nn/res/11b_160129\wtm_rca\e00.2\run.00478.txt
module mul11u_pwr_0_657_wce_00_1999(A, B, O);
  input [10:0] A, B;
  output [21:0] O;
  wire [10:0] A, B;
  wire [21:0] O;
  wire sig_30, sig_31, sig_32, sig_39, sig_41, sig_42;
  wire sig_43, sig_51, sig_52, sig_53, sig_54, sig_61;
  wire sig_62, sig_63, sig_64, sig_65, sig_71, sig_72;
  wire sig_73, sig_74, sig_75, sig_76, sig_81, sig_82;
  wire sig_83, sig_84, sig_85, sig_86, sig_87, sig_89;
  wire sig_91, sig_92, sig_93, sig_94, sig_95, sig_96;
  wire sig_98, sig_99, sig_101, sig_102, sig_103, sig_104;
  wire sig_105, sig_106, sig_107, sig_108, sig_109, sig_111;
  wire sig_112, sig_113, sig_114, sig_115, sig_116, sig_117;
  wire sig_118, sig_119, sig_120, sig_121, sig_122, sig_123;
  wire sig_124, sig_126, sig_127, sig_128, sig_129, sig_130;
  wire sig_131, sig_132, sig_133, sig_134, sig_135, sig_136;
  wire sig_137, sig_138, sig_139, sig_140, sig_141, sig_142;
  wire sig_171, sig_174, sig_175, sig_177, sig_178, sig_179;
  wire sig_180, sig_181, sig_182, sig_183, sig_184, sig_185;
  wire sig_186, sig_187, sig_188, sig_189, sig_190, sig_191;
  wire sig_200, sig_203, sig_212, sig_214, sig_215, sig_216;
  wire sig_217, sig_218, sig_219, sig_220, sig_221, sig_222;
  wire sig_223, sig_224, sig_225, sig_227, sig_228, sig_229;
  wire sig_230, sig_231, sig_232, sig_233, sig_234, sig_235;
  wire sig_236, sig_237, sig_238, sig_239, sig_240, sig_241;
  wire sig_247, sig_248, sig_249, sig_250, sig_252, sig_253;
  wire sig_255, sig_256, sig_257, sig_258, sig_259, sig_260;
  wire sig_261, sig_262, sig_263, sig_264, sig_265, sig_266;
  wire sig_267, sig_268, sig_270, sig_271, sig_272, sig_273;
  wire sig_274, sig_275, sig_276, sig_277, sig_278, sig_279;
  wire sig_280, sig_281, sig_282, sig_283, sig_284, sig_285;
  wire sig_286, sig_287, sig_288, sig_289, sig_311, sig_318;
  wire sig_320, sig_321, sig_322, sig_323, sig_324, sig_325;
  wire sig_326, sig_327, sig_328, sig_329, sig_330, sig_331;
  wire sig_332, sig_333, sig_334, sig_335, sig_336, sig_337;
  wire sig_338, sig_339, sig_340, sig_341, sig_344, sig_345;
  wire sig_350, sig_351, sig_354, sig_355, sig_356, sig_357;
  wire sig_358, sig_359, sig_360, sig_361, sig_362, sig_363;
  wire sig_364, sig_365, sig_366, sig_367, sig_368, sig_369;
  wire sig_370, sig_371, sig_373, sig_374, sig_375, sig_376;
  wire sig_377, sig_378, sig_379, sig_380, sig_381, sig_382;
  wire sig_383, sig_384, sig_385, sig_386, sig_387, sig_388;
  wire sig_389, sig_390, sig_391, sig_407, sig_408, sig_410;
  wire sig_412, sig_413, sig_415, sig_416, sig_417, sig_418;
  wire sig_419, sig_420, sig_421, sig_422, sig_423, sig_424;
  wire sig_425, sig_426, sig_427, sig_428, sig_430, sig_431;
  wire sig_432, sig_433, sig_434, sig_435, sig_436, sig_437;
  wire sig_438, sig_439, sig_440, sig_441, sig_443, sig_444;
  wire sig_445, sig_447, sig_448, sig_449, sig_450, sig_451;
  wire sig_452, sig_453, sig_454, sig_455, sig_456, sig_457;
  wire sig_458, sig_459, sig_460, sig_461, sig_462, sig_463;
  wire sig_464, sig_465, sig_466, sig_467, sig_468, sig_469;
  wire sig_470, sig_471, sig_472, sig_473, sig_474, sig_475;
  wire sig_476, sig_477, sig_478, sig_479, sig_480, sig_481;
  wire sig_482, sig_483, sig_484, sig_485, sig_486, sig_487;
  wire sig_488, sig_490, sig_491, sig_492, sig_493, sig_494;
  wire sig_495, sig_496, sig_509, sig_510, sig_512, sig_513;
  wire sig_515, sig_516, sig_517, sig_518, sig_519, sig_520;
  wire sig_521, sig_522, sig_523, sig_524, sig_525, sig_526;
  wire sig_527, sig_528, sig_529, sig_530, sig_531, sig_532;
  wire sig_533, sig_534, sig_535, sig_536, sig_537, sig_538;
  wire sig_539, sig_540, sig_541, sig_542, sig_543, sig_544;
  wire sig_546, sig_547, sig_548, sig_549, sig_550, sig_551;
  wire sig_552, sig_553, sig_554, sig_555, sig_556, sig_566;
  wire sig_567, sig_568, sig_569, sig_570, sig_571, sig_572;
  wire sig_573, sig_574, sig_575, sig_576, sig_577, sig_578;
  wire sig_579, sig_580, sig_581, sig_582, sig_583, sig_584;
  wire sig_585, sig_586, sig_587, sig_588, sig_589, sig_590;
  wire sig_591, sig_592, sig_593, sig_594, sig_595, sig_596;
  wire sig_597, sig_598, sig_599, sig_600, sig_601, sig_602;
  wire sig_603, sig_604, sig_605, sig_606, sig_607, sig_608;
  wire sig_609, sig_610, sig_611, sig_612, sig_613, sig_614;
  wire sig_615, sig_616, sig_617, sig_618, sig_636, sig_637;
  wire sig_638, sig_640, sig_641, sig_642, sig_645, sig_646;
  wire sig_647, sig_648, sig_650, sig_651, sig_652, sig_653;
  wire sig_655, sig_656, sig_657, sig_658, sig_660, sig_661;
  wire sig_662, sig_663, sig_665, sig_666, sig_667, sig_668;
  wire sig_670, sig_671, sig_672, sig_673, sig_675, sig_676;
  wire sig_677, sig_678, sig_680, sig_681, sig_682, sig_683;
  wire sig_685, sig_686, sig_687, sig_688, sig_690;
  assign sig_30 = A[8] & B[2];
  assign sig_31 = A[9] & B[0];
  assign sig_32 = A[0] & B[7];
  assign sig_39 = !(A[5] ^ B[1]);
  assign sig_41 = A[4] & B[1];
  assign sig_42 = A[9] & B[1];
  assign sig_43 = A[10] & B[1];
  assign sig_51 = A[7] & B[2];
  assign sig_52 = A[8] & B[2];
  assign sig_53 = A[9] & B[2];
  assign sig_54 = A[10] & B[2];
  assign sig_61 = A[6] & B[3];
  assign sig_62 = A[7] & B[3];
  assign sig_63 = A[8] & B[3];
  assign sig_64 = A[9] & B[3];
  assign sig_65 = A[10] & B[3];
  assign sig_71 = A[5] & B[8];
  assign sig_72 = A[6] & B[4];
  assign sig_73 = A[7] & B[4];
  assign sig_74 = A[8] & B[4];
  assign sig_75 = A[9] & B[4];
  assign sig_76 = A[10] & B[4];
  assign sig_81 = A[4] & B[5];
  assign sig_82 = A[5] & B[3];
  assign sig_83 = A[6] & B[5];
  assign sig_84 = A[7] & B[5];
  assign sig_85 = A[8] & B[5];
  assign sig_86 = A[9] & B[5];
  assign sig_87 = A[10] & B[5];
  assign sig_89 = A[1] & B[1];
  assign sig_91 = A[3] & B[6];
  assign sig_92 = A[4] & B[6];
  assign sig_93 = A[5] & B[6];
  assign sig_94 = A[6] & B[6];
  assign sig_95 = A[7] & B[6];
  assign sig_96 = A[8] & B[6];
  assign O[5] = A[9] & B[6];
  assign sig_98 = A[10] & B[6];
  assign sig_99 = A[0] & B[7];
  assign sig_101 = A[2] & B[0];
  assign sig_102 = A[3] & B[7];
  assign sig_103 = A[4] & B[7];
  assign sig_104 = A[5] & B[7];
  assign sig_105 = A[6] & B[7];
  assign sig_106 = A[7] & B[7];
  assign sig_107 = A[8] & B[7];
  assign sig_108 = A[9] & B[7];
  assign sig_109 = A[10] & B[7];
  assign sig_111 = A[1] & B[0];
  assign sig_112 = A[2] & B[8];
  assign sig_113 = A[3] & B[8];
  assign sig_114 = A[4] & B[8];
  assign sig_115 = A[5] & B[8];
  assign sig_116 = A[6] & B[8];
  assign sig_117 = A[7] & B[8];
  assign sig_118 = A[8] & B[8];
  assign sig_119 = A[9] & B[8];
  assign sig_120 = A[10] & B[8];
  assign sig_121 = B[9] & B[9];
  assign sig_122 = A[1] & B[9];
  assign sig_123 = A[2] & B[9];
  assign sig_124 = A[3] & B[9];
  assign O[7] = A[4] & B[9];
  assign sig_126 = A[5] & B[9];
  assign sig_127 = A[6] & B[9];
  assign sig_128 = A[7] & B[9];
  assign sig_129 = A[8] & B[9];
  assign sig_130 = A[9] & B[9];
  assign sig_131 = A[10] & B[9];
  assign sig_132 = A[0] & B[10];
  assign sig_133 = A[1] & B[10];
  assign sig_134 = A[2] & B[10];
  assign sig_135 = A[3] & B[10];
  assign sig_136 = A[4] & B[10];
  assign sig_137 = A[5] & B[10];
  assign sig_138 = A[6] & B[10];
  assign sig_139 = A[7] & B[10];
  assign sig_140 = A[8] & B[10];
  assign sig_141 = A[9] & B[10];
  assign sig_142 = A[10] & B[10];
  assign sig_171 = B[1] & sig_39;
  assign sig_174 = sig_171 | A[3];
  assign sig_175 = sig_30 ^ A[7];
  assign sig_177 = B[4] & A[5];
  assign sig_178 = sig_175 ^ A[10];
  assign sig_179 = A[7] | sig_177;
  assign sig_180 = sig_31 ^ sig_41;
  assign sig_181 = sig_31 & sig_41;
  assign sig_182 = A[6] & sig_51;
  assign sig_183 = sig_180 & sig_51;
  assign sig_184 = sig_181 ^ sig_182;
  assign sig_185 = A[2] & sig_42;
  assign sig_186 = sig_32 & A[4];
  assign sig_187 = A[9] & sig_52;
  assign sig_188 = sig_185 ^ sig_52;
  assign sig_189 = sig_186 | sig_187;
  assign sig_190 = sig_43 & sig_53;
  assign sig_191 = sig_43 ^ sig_53;
  assign sig_200 = B[7] & A[4];
  assign sig_203 = sig_200;
  assign sig_212 = A[0] | B[8];
  assign sig_214 = sig_61 ^ sig_71;
  assign sig_215 = sig_61 & sig_71;
  assign sig_216 = sig_214 & sig_81;
  assign sig_217 = sig_214 | sig_81;
  assign sig_218 = sig_215 | sig_216;
  assign sig_219 = sig_62 ^ sig_72;
  assign sig_220 = sig_62 & sig_72;
  assign sig_221 = sig_219 & sig_82;
  assign sig_222 = sig_219 ^ sig_82;
  assign sig_223 = sig_220 ^ sig_221;
  assign sig_224 = sig_63 ^ sig_73;
  assign sig_225 = sig_63 & sig_73;
  assign O[9] = sig_224 & sig_83;
  assign sig_227 = sig_224 ^ sig_83;
  assign sig_228 = sig_225 | O[9];
  assign sig_229 = sig_64 ^ sig_74;
  assign sig_230 = sig_64 & sig_74;
  assign sig_231 = sig_229 & sig_84;
  assign sig_232 = sig_229 ^ sig_84;
  assign sig_233 = sig_230 | sig_231;
  assign sig_234 = sig_65 ^ sig_75;
  assign sig_235 = sig_65 & sig_75;
  assign sig_236 = sig_234 & sig_85;
  assign sig_237 = sig_234 ^ sig_85;
  assign sig_238 = sig_235 | sig_236;
  assign sig_239 = sig_76 & sig_86;
  assign sig_240 = sig_76 ^ sig_86;
  assign sig_241 = sig_89 ^ sig_99;
  assign sig_247 = !(B[2] ^ B[6]);
  assign sig_248 = sig_91 & sig_101;
  assign sig_249 = sig_91 & sig_101;
  assign sig_250 = sig_248 & sig_111;
  assign sig_252 = sig_249 | sig_250;
  assign sig_253 = sig_92 | sig_102;
  assign O[6] = sig_92 & sig_102;
  assign sig_255 = sig_253 & sig_112;
  assign sig_256 = sig_253 | sig_112;
  assign sig_257 = O[6] | sig_255;
  assign sig_258 = sig_93 ^ sig_103;
  assign sig_259 = sig_93 & sig_103;
  assign sig_260 = sig_258 & sig_113;
  assign sig_261 = sig_258 ^ sig_113;
  assign sig_262 = sig_259 | sig_260;
  assign sig_263 = sig_94 ^ sig_104;
  assign sig_264 = sig_94 & sig_104;
  assign sig_265 = sig_263 & sig_114;
  assign sig_266 = sig_263 ^ sig_114;
  assign sig_267 = sig_264 | sig_265;
  assign sig_268 = sig_95 ^ sig_105;
  assign O[1] = sig_95 & sig_105;
  assign sig_270 = sig_268 & sig_115;
  assign sig_271 = sig_268 ^ sig_115;
  assign sig_272 = O[1] | sig_270;
  assign sig_273 = sig_96 ^ sig_106;
  assign sig_274 = sig_96 & sig_106;
  assign sig_275 = sig_273 & sig_116;
  assign sig_276 = sig_273 ^ sig_116;
  assign sig_277 = sig_274 | sig_275;
  assign sig_278 = O[5] ^ sig_107;
  assign sig_279 = O[5] & sig_107;
  assign sig_280 = sig_278 & sig_117;
  assign sig_281 = sig_278 ^ sig_117;
  assign sig_282 = sig_279 | sig_280;
  assign sig_283 = sig_98 ^ sig_108;
  assign sig_284 = sig_98 & sig_108;
  assign sig_285 = sig_283 & sig_118;
  assign sig_286 = sig_283 ^ sig_118;
  assign sig_287 = sig_284 | sig_285;
  assign sig_288 = sig_109 & sig_119;
  assign sig_289 = sig_109 ^ sig_119;
  assign sig_311 = B[0] & A[9];
  assign sig_318 = sig_178 & sig_174;
  assign sig_320 = B[4] | sig_212;
  assign sig_321 = sig_318 ^ A[1];
  assign sig_322 = sig_183 ^ sig_179;
  assign sig_323 = sig_183 & sig_179;
  assign sig_324 = B[0] & sig_217;
  assign sig_325 = sig_322;
  assign sig_326 = sig_323 | sig_324;
  assign sig_327 = sig_188 ^ sig_184;
  assign sig_328 = sig_188 & sig_184;
  assign sig_329 = sig_327 & sig_222;
  assign sig_330 = sig_327 ^ sig_222;
  assign sig_331 = sig_328 | sig_329;
  assign sig_332 = sig_191 ^ sig_189;
  assign sig_333 = sig_191 & sig_189;
  assign sig_334 = sig_332 & sig_227;
  assign sig_335 = sig_332 ^ sig_227;
  assign sig_336 = sig_333 | sig_334;
  assign sig_337 = sig_54 ^ sig_190;
  assign sig_338 = A[10] & sig_190;
  assign sig_339 = sig_337 & sig_232;
  assign sig_340 = sig_337 ^ sig_232;
  assign sig_341 = sig_338 ^ sig_339;
  assign sig_344 = sig_203 ^ sig_241;
  assign sig_345 = sig_203 & B[0];
  assign sig_350 = B[9] | B[9];
  assign sig_351 = B[8];
  assign sig_354 = sig_351 & sig_247;
  assign sig_355 = !(B[2] | A[9]);
  assign sig_356 = sig_218 ^ sig_256;
  assign sig_357 = sig_218 & sig_256;
  assign sig_358 = A[5] & sig_252;
  assign sig_359 = sig_356 ^ sig_252;
  assign sig_360 = sig_357 | sig_358;
  assign sig_361 = sig_223 ^ sig_261;
  assign sig_362 = sig_223 & sig_261;
  assign sig_363 = sig_361 & sig_257;
  assign sig_364 = sig_361 ^ sig_257;
  assign sig_365 = sig_362 ^ sig_363;
  assign sig_366 = sig_228 ^ sig_266;
  assign sig_367 = sig_228 & sig_266;
  assign sig_368 = sig_366 & sig_262;
  assign sig_369 = sig_366 ^ sig_262;
  assign sig_370 = sig_367 ^ sig_368;
  assign sig_371 = sig_233 ^ sig_271;
  assign O[8] = sig_233 & sig_271;
  assign sig_373 = sig_371 & sig_267;
  assign sig_374 = sig_371 ^ sig_267;
  assign sig_375 = O[8] | sig_373;
  assign sig_376 = sig_238 ^ sig_276;
  assign sig_377 = sig_238 & sig_276;
  assign sig_378 = sig_376 & sig_272;
  assign sig_379 = sig_376 ^ sig_272;
  assign sig_380 = sig_377 ^ sig_378;
  assign sig_381 = sig_239 ^ sig_281;
  assign sig_382 = sig_239 & sig_281;
  assign sig_383 = sig_381 & sig_277;
  assign sig_384 = sig_381 ^ sig_277;
  assign sig_385 = sig_382 | sig_383;
  assign sig_386 = sig_286 & sig_282;
  assign sig_387 = sig_286 ^ sig_282;
  assign sig_388 = sig_289 & sig_287;
  assign sig_389 = sig_289 ^ sig_287;
  assign sig_390 = A[9] & sig_288;
  assign sig_391 = sig_120 ^ sig_288;
  assign sig_407 = A[4] & sig_311;
  assign sig_408 = A[4] & sig_344;
  assign sig_410 = sig_407 | sig_408;
  assign sig_412 = !sig_320;
  assign sig_413 = B[1] & B[2];
  assign sig_415 = sig_412 | sig_413;
  assign sig_416 = sig_325 ^ sig_321;
  assign sig_417 = sig_325 & B[9];
  assign sig_418 = sig_416 & B[8];
  assign sig_419 = sig_416 ^ sig_354;
  assign sig_420 = sig_417 | sig_418;
  assign sig_421 = sig_330 ^ sig_326;
  assign sig_422 = sig_330 & sig_326;
  assign sig_423 = sig_421 & sig_359;
  assign sig_424 = sig_421 ^ sig_359;
  assign sig_425 = sig_422 | sig_423;
  assign sig_426 = sig_335 ^ sig_331;
  assign sig_427 = sig_335 & sig_331;
  assign sig_428 = sig_426 & sig_364;
  assign O[10] = sig_426 ^ sig_364;
  assign sig_430 = sig_427 | sig_428;
  assign sig_431 = sig_340 ^ sig_336;
  assign sig_432 = sig_340 & sig_336;
  assign sig_433 = sig_431 & sig_369;
  assign sig_434 = sig_431 ^ sig_369;
  assign sig_435 = sig_432 | sig_433;
  assign sig_436 = sig_237 ^ sig_341;
  assign sig_437 = sig_237 & sig_341;
  assign sig_438 = sig_436 & sig_374;
  assign sig_439 = sig_436 ^ sig_374;
  assign sig_440 = sig_437 | sig_438;
  assign sig_441 = sig_240 & sig_379;
  assign O[2] = sig_240 ^ sig_379;
  assign sig_443 = sig_87 & sig_384;
  assign sig_444 = sig_87 ^ sig_384;
  assign sig_445 = sig_350 ^ sig_121;
  assign sig_447 = sig_355 & sig_122;
  assign sig_448 = A[1] & sig_122;
  assign sig_449 = sig_447 & A[2];
  assign sig_450 = sig_447 | sig_132;
  assign sig_451 = sig_448 | sig_449;
  assign sig_452 = sig_360 ^ sig_123;
  assign sig_453 = sig_360 & sig_123;
  assign sig_454 = sig_452 & sig_133;
  assign sig_455 = sig_452 ^ sig_133;
  assign sig_456 = sig_453 | sig_454;
  assign sig_457 = sig_365 ^ sig_124;
  assign sig_458 = sig_365 & sig_124;
  assign sig_459 = sig_457 & sig_134;
  assign sig_460 = sig_457 ^ sig_134;
  assign sig_461 = sig_458 | sig_459;
  assign sig_462 = sig_370 ^ O[7];
  assign sig_463 = sig_370 & O[7];
  assign sig_464 = sig_462 & sig_135;
  assign sig_465 = sig_462 ^ sig_135;
  assign sig_466 = sig_463 | sig_464;
  assign sig_467 = sig_375 ^ sig_126;
  assign sig_468 = sig_375 & sig_126;
  assign sig_469 = sig_467 & sig_136;
  assign sig_470 = sig_467 ^ sig_136;
  assign sig_471 = sig_468 | sig_469;
  assign sig_472 = sig_380 ^ sig_127;
  assign sig_473 = sig_380 & sig_127;
  assign sig_474 = sig_472 & sig_137;
  assign sig_475 = sig_472 ^ sig_137;
  assign sig_476 = sig_473 | sig_474;
  assign sig_477 = sig_385 ^ sig_128;
  assign sig_478 = sig_385 & sig_128;
  assign sig_479 = sig_477 & sig_138;
  assign sig_480 = sig_477 ^ sig_138;
  assign sig_481 = sig_478 | sig_479;
  assign sig_482 = sig_386 ^ sig_129;
  assign sig_483 = sig_386 & sig_129;
  assign sig_484 = sig_482 & sig_139;
  assign sig_485 = sig_482 ^ sig_139;
  assign sig_486 = sig_483 | sig_484;
  assign sig_487 = sig_388 ^ sig_130;
  assign sig_488 = sig_388 & sig_130;
  assign O[4] = sig_487 & sig_140;
  assign sig_490 = sig_487 ^ sig_140;
  assign sig_491 = sig_488 | O[4];
  assign sig_492 = sig_390 ^ sig_131;
  assign sig_493 = sig_390 & sig_131;
  assign sig_494 = sig_492 & sig_141;
  assign sig_495 = sig_492 ^ sig_141;
  assign sig_496 = sig_493 | sig_494;
  assign sig_509 = A[2] & sig_410;
  assign sig_510 = A[9] & sig_345;
  assign sig_512 = sig_509 | sig_510;
  assign sig_513 = sig_419 ^ sig_415;
  assign sig_515 = B[5] & sig_445;
  assign sig_516 = sig_513 ^ sig_445;
  assign sig_517 = A[2] & sig_515;
  assign sig_518 = sig_424 ^ sig_420;
  assign sig_519 = sig_424 & sig_420;
  assign sig_520 = sig_518 & sig_450;
  assign sig_521 = sig_518 ^ sig_450;
  assign sig_522 = sig_519 | sig_520;
  assign sig_523 = O[10] ^ sig_425;
  assign sig_524 = O[10] & sig_425;
  assign sig_525 = sig_523 & sig_455;
  assign sig_526 = sig_523 ^ sig_455;
  assign sig_527 = sig_524 ^ sig_525;
  assign sig_528 = sig_434 ^ sig_430;
  assign sig_529 = sig_434 & sig_430;
  assign sig_530 = sig_528 & sig_460;
  assign sig_531 = sig_528 ^ sig_460;
  assign sig_532 = sig_529 ^ sig_530;
  assign sig_533 = sig_439 ^ sig_435;
  assign sig_534 = sig_439 & sig_435;
  assign sig_535 = sig_533 & sig_465;
  assign sig_536 = sig_533 ^ sig_465;
  assign sig_537 = sig_534 | sig_535;
  assign sig_538 = O[2] ^ sig_440;
  assign sig_539 = O[2] & sig_440;
  assign sig_540 = sig_538 & sig_470;
  assign sig_541 = sig_538 ^ sig_470;
  assign sig_542 = sig_539 | sig_540;
  assign sig_543 = sig_444 ^ sig_441;
  assign sig_544 = sig_444 & sig_441;
  assign O[3] = sig_543 & sig_475;
  assign sig_546 = sig_543 ^ sig_475;
  assign sig_547 = sig_544 | O[3];
  assign sig_548 = sig_387 ^ sig_443;
  assign sig_549 = sig_387 & sig_443;
  assign sig_550 = sig_548 & sig_480;
  assign sig_551 = sig_548 ^ sig_480;
  assign sig_552 = sig_549 | sig_550;
  assign sig_553 = sig_389 & sig_485;
  assign sig_554 = sig_389 ^ sig_485;
  assign sig_555 = sig_391 & sig_490;
  assign sig_556 = sig_391 ^ sig_490;
  assign sig_566 = sig_516 & sig_512;
  assign sig_567 = sig_521 & A[9];
  assign sig_568 = sig_521 ^ sig_517;
  assign sig_569 = sig_567;
  assign sig_570 = !(A[1] & A[5]);
  assign sig_571 = sig_568 | sig_569;
  assign sig_572 = sig_526 ^ sig_522;
  assign sig_573 = sig_526 & sig_522;
  assign sig_574 = sig_572 & sig_451;
  assign sig_575 = sig_572 ^ sig_451;
  assign sig_576 = sig_573 | sig_574;
  assign sig_577 = sig_531 ^ sig_527;
  assign sig_578 = sig_531 & sig_527;
  assign sig_579 = sig_577 & sig_456;
  assign sig_580 = sig_577 ^ sig_456;
  assign sig_581 = sig_578 | sig_579;
  assign sig_582 = sig_536 ^ sig_532;
  assign sig_583 = sig_536 & sig_532;
  assign sig_584 = sig_582 & sig_461;
  assign sig_585 = sig_582 ^ sig_461;
  assign sig_586 = sig_583 | sig_584;
  assign sig_587 = sig_541 ^ sig_537;
  assign sig_588 = sig_541 & sig_537;
  assign sig_589 = sig_587 & sig_466;
  assign sig_590 = sig_587 ^ sig_466;
  assign sig_591 = sig_588 | sig_589;
  assign sig_592 = sig_546 ^ sig_542;
  assign sig_593 = sig_546 & sig_542;
  assign sig_594 = sig_592 & sig_471;
  assign sig_595 = sig_592 ^ sig_471;
  assign sig_596 = sig_593 ^ sig_594;
  assign sig_597 = sig_551 ^ sig_547;
  assign sig_598 = sig_551 & sig_547;
  assign sig_599 = sig_597 & sig_476;
  assign sig_600 = sig_597 ^ sig_476;
  assign sig_601 = sig_598 | sig_599;
  assign sig_602 = sig_554 ^ sig_552;
  assign sig_603 = sig_554 & sig_552;
  assign sig_604 = sig_602 & sig_481;
  assign sig_605 = sig_602 ^ sig_481;
  assign sig_606 = sig_603 | sig_604;
  assign sig_607 = sig_556 ^ sig_553;
  assign sig_608 = sig_556 & sig_553;
  assign sig_609 = sig_607 & sig_486;
  assign sig_610 = sig_607 ^ sig_486;
  assign sig_611 = sig_608 | sig_609;
  assign sig_612 = sig_495 ^ sig_555;
  assign sig_613 = sig_495 & sig_555;
  assign sig_614 = sig_612 & sig_491;
  assign sig_615 = sig_612 ^ sig_491;
  assign sig_616 = sig_613 ^ sig_614;
  assign sig_617 = sig_142 & sig_496;
  assign sig_618 = sig_142 ^ sig_496;
  assign sig_636 = sig_570 & sig_566;
  assign sig_637 = sig_570 & sig_566;
  assign sig_638 = sig_636 & A[8];
  assign sig_640 = sig_637 | sig_638;
  assign sig_641 = sig_575 ^ sig_571;
  assign sig_642 = sig_575 & sig_571;
  assign O[11] = sig_641 ^ sig_640;
  assign sig_645 = sig_642;
  assign sig_646 = sig_580 ^ sig_576;
  assign sig_647 = sig_580 & sig_576;
  assign sig_648 = sig_646 & sig_645;
  assign O[12] = sig_646 ^ sig_645;
  assign sig_650 = sig_647 | sig_648;
  assign sig_651 = sig_585 ^ sig_581;
  assign sig_652 = sig_585 & sig_581;
  assign sig_653 = sig_651 & sig_650;
  assign O[13] = sig_651 ^ sig_650;
  assign sig_655 = sig_652 | sig_653;
  assign sig_656 = sig_590 ^ sig_586;
  assign sig_657 = sig_590 & sig_586;
  assign sig_658 = sig_656 & sig_655;
  assign O[0] = sig_656 ^ sig_655;
  assign sig_660 = sig_657 | sig_658;
  assign sig_661 = sig_595 ^ sig_591;
  assign sig_662 = sig_595 & sig_591;
  assign sig_663 = sig_661 & sig_660;
  assign O[15] = sig_661 ^ sig_660;
  assign sig_665 = sig_662 | sig_663;
  assign sig_666 = sig_600 ^ sig_596;
  assign sig_667 = sig_600 & sig_596;
  assign sig_668 = sig_666 & sig_665;
  assign O[16] = sig_666 ^ sig_665;
  assign sig_670 = sig_667 ^ sig_668;
  assign sig_671 = sig_605 ^ sig_601;
  assign sig_672 = sig_605 & sig_601;
  assign sig_673 = sig_671 & sig_670;
  assign O[17] = sig_671 ^ sig_670;
  assign sig_675 = sig_672 ^ sig_673;
  assign sig_676 = sig_610 ^ sig_606;
  assign sig_677 = sig_610 & sig_606;
  assign sig_678 = sig_676 & sig_675;
  assign O[18] = sig_676 ^ sig_675;
  assign sig_680 = sig_677 | sig_678;
  assign sig_681 = sig_615 ^ sig_611;
  assign sig_682 = sig_615 & sig_611;
  assign sig_683 = sig_681 & sig_680;
  assign O[19] = sig_681 ^ sig_680;
  assign sig_685 = sig_682 | sig_683;
  assign sig_686 = sig_618 ^ sig_616;
  assign sig_687 = sig_618 & sig_616;
  assign sig_688 = sig_686 & sig_685;
  assign O[20] = sig_686 ^ sig_685;
  assign sig_690 = sig_687 | sig_688;
  assign O[21] = sig_617 ^ sig_690;
  assign O[14] = O[0]; // default output
endmodule


// internal reference: cgp-nn-iccad16.11.mul11u_pwr_0_657_wce_00_1999

