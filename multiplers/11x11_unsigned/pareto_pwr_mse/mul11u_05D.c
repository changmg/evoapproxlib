/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.09 %
// MAE = 3787 
// WCE% = 0.47 %
// WCE = 19864 
// WCRE% = 6312.50 %
// EP% = 99.87 %
// MRE% = 3.00 %
// MSE = 22556.998e3 
// PDK45_PWR = 0.517 mW
// PDK45_AREA = 845.7 um2
// PDK45_DELAY = 1.98 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul11u_05D(uint64_t a, uint64_t b) {
  int wa[11];
  int wb[11];
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
  wa[8] = (a >> 8) & 0x01;
  wb[8] = (b >> 8) & 0x01;
  wa[9] = (a >> 9) & 0x01;
  wb[9] = (b >> 9) & 0x01;
  wa[10] = (a >> 10) & 0x01;
  wb[10] = (b >> 10) & 0x01;
  int sig_22 = wa[0] & wb[0];
  int sig_23 = wa[1] & wb[0];
  int sig_42 = wa[9] & wb[1];
  int sig_43 = wa[10] & wb[1];
  int sig_44 = sig_23;
  int sig_63 = wa[3] & sig_42;
  int sig_73 = wa[9] & wb[2];
  int sig_74 = wa[10] & wb[2];
  int sig_94 = wa[5] ^ wa[9];
  int sig_114 = wb[4];
  int sig_120 = sig_43 ^ sig_73;
  int sig_121 = wb[5] & sig_73;
  int sig_122 = sig_120 & sig_63;
  int sig_123 = sig_120 ^ sig_63;
  int sig_124 = sig_121 | sig_122;
  int sig_133 = wa[8] & wb[3];
  int sig_134 = wa[9] & wb[3];
  int sig_135 = wa[10] & wb[3];
  int sig_152 = wb[4] & wa[9];
  int sig_153 = wb[3] & wa[6];
  int sig_154 = ~(wb[2] & sig_94);
  int sig_155 = sig_152 | sig_153;
  int sig_173 = wa[8] & sig_114;
  int sig_175 = wb[5] & sig_173;
  int sig_176 = ~(sig_123 ^ sig_133);
  int sig_177 = wa[2] & sig_133;
  int sig_179 = ~(sig_176 ^ wa[7]);
  int sig_180 = sig_177;
  int sig_181 = sig_74 ^ sig_134;
  int sig_182 = sig_74 & sig_134;
  int sig_183 = sig_181 & sig_124;
  int sig_184 = sig_181 ^ sig_124;
  int sig_185 = sig_182 | sig_183;
  int sig_193 = wa[10] & wb[4];
  int sig_194 = wa[8] & wb[4];
  int sig_195 = wa[9] & wb[4];
  int sig_196 = wa[10] & wb[4];
  int sig_208 = !sig_154;
  int sig_211 = sig_208;
  int sig_212 = wa[3] & wb[3];
  int sig_215 = sig_212 ^ sig_155;
  int sig_224 = wb[2];
  int sig_226 = wa[3] | sig_224;
  int sig_228 = wb[6] & wa[8];
  int sig_231 = sig_228 | wa[1];
  int sig_232 = sig_179 ^ sig_193;
  int sig_233 = sig_179 & sig_193;
  int sig_234 = sig_232 & sig_175;
  int sig_236 = sig_233 | sig_234;
  int sig_237 = sig_184 ^ sig_194;
  int sig_238 = sig_184 & sig_194;
  int sig_239 = sig_237 & sig_180;
  int sig_240 = sig_237 ^ sig_180;
  int sig_241 = sig_238 | sig_239;
  int sig_242 = sig_135 ^ sig_195;
  int sig_243 = sig_135 & sig_195;
  int sig_244 = sig_242 & sig_185;
  int sig_245 = sig_242 ^ sig_185;
  int sig_246 = sig_243 | sig_244;
  int sig_253 = wa[6] & wb[5];
  int sig_254 = wa[7] & wb[5];
  int sig_255 = wa[8] & wb[5];
  int sig_256 = wa[9] & wb[5];
  int sig_257 = wa[10] & wb[5];
  int sig_264 = wb[6] & wa[0];
  int sig_265 = wa[1] & wb[3];
  int sig_267 = sig_264 | sig_265;
  int sig_268 = sig_215;
  int sig_269 = sig_215 & wa[0];
  int sig_270 = sig_268 & wb[2];
  int sig_271 = sig_268 | sig_211;
  int sig_272 = sig_269 & sig_270;
  int sig_279 = wa[9] & wb[9];
  int sig_282 = sig_279 & wa[0];
  int sig_283 = wa[4];
  int sig_286 = sig_283 | sig_226;
  int sig_287 = wb[6] & wb[8];
  int sig_288 = wa[7] ^ sig_253;
  int sig_289 = wb[9] & sig_253;
  int sig_290 = sig_288;
  int sig_291 = sig_288 ^ sig_231;
  int sig_292 = sig_289 | sig_290;
  int sig_293 = sig_240 ^ sig_254;
  int sig_294 = sig_240 & sig_254;
  int sig_295 = sig_293 & sig_236;
  int sig_296 = sig_293 ^ sig_236;
  int sig_297 = sig_294 | sig_295;
  int sig_298 = sig_245 ^ sig_255;
  int sig_299 = sig_245 & sig_255;
  int sig_300 = sig_298 & sig_241;
  int sig_301 = sig_298 ^ sig_241;
  int sig_302 = sig_299 | sig_300;
  int sig_303 = sig_196 ^ sig_256;
  int sig_304 = sig_196 & sig_256;
  int sig_305 = sig_303 & sig_246;
  int sig_306 = sig_303 ^ sig_246;
  int sig_307 = sig_304 | sig_305;
  int sig_309 = wa[6] & wb[10];
  int sig_311 = wa[9] & wb[6];
  int sig_312 = wa[4] & wb[7];
  int sig_313 = wa[5] & wb[6];
  int sig_314 = wa[6] & wb[6];
  int sig_315 = wa[7] & wb[6];
  int sig_316 = wa[8] & wb[6];
  int sig_317 = wa[9] & wb[6];
  int sig_318 = wa[10] & wb[6];
  int sig_324 = sig_271 ^ sig_309;
  int sig_325 = wb[9] & wa[4];
  int sig_326 = sig_324 & wb[4];
  int sig_327 = sig_324 ^ sig_267;
  int sig_328 = sig_325 ^ sig_326;
  int sig_329 = wa[10] & wb[0];
  int sig_332 = sig_329 | sig_272;
  int sig_335 = wb[5] & sig_311;
  int sig_338 = sig_335 & wa[1];
  int sig_339 = !sig_286;
  int sig_340 = wa[5] & sig_312;
  int sig_341 = sig_339 & wb[2];
  int sig_342 = sig_339 & sig_282;
  int sig_343 = sig_340 | sig_341;
  int sig_344 = sig_291 ^ sig_313;
  int sig_345 = wa[6] & sig_313;
  int sig_346 = sig_344 & sig_287;
  int sig_347 = sig_344 ^ sig_287;
  int sig_348 = sig_345 | sig_346;
  int sig_349 = sig_296 ^ sig_314;
  int sig_350 = sig_296 & sig_314;
  int sig_351 = wb[0] & sig_292;
  int sig_352 = sig_349;
  int sig_353 = sig_350 | sig_351;
  int sig_354 = sig_301 ^ sig_315;
  int sig_355 = sig_301 & sig_315;
  int sig_356 = sig_354 & sig_297;
  int sig_357 = sig_354 ^ sig_297;
  int sig_358 = sig_355 | sig_356;
  int sig_359 = sig_306 ^ sig_316;
  int sig_360 = sig_306 & sig_316;
  int sig_361 = sig_359 & sig_302;
  int sig_362 = sig_359 ^ sig_302;
  int sig_363 = sig_360 | sig_361;
  int sig_364 = sig_257 ^ sig_317;
  int sig_365 = sig_257 & sig_317;
  int sig_366 = sig_364 & sig_307;
  int sig_367 = sig_364 ^ sig_307;
  int sig_368 = sig_365 ^ sig_366;
  int sig_372 = wa[10] & wb[1];
  int sig_373 = wa[4] & wb[7];
  int sig_374 = wa[5] & wb[7];
  int sig_375 = wa[6] & wb[7];
  int sig_376 = wa[7] & wb[7];
  int sig_377 = wa[8] & wb[7];
  int sig_378 = wa[9] & wb[7];
  int sig_379 = wa[10] & wb[7];
  int sig_380 = sig_327;
  int sig_383 = sig_380;
  int sig_385 = sig_332 & wb[6];
  int sig_388 = sig_385 | sig_328;
  int sig_395 = sig_342 ^ sig_372;
  int sig_396 = sig_342 & sig_372;
  int sig_397 = sig_395 & sig_338;
  int sig_398 = sig_395 ^ sig_338;
  int sig_399 = sig_396 | sig_397;
  int sig_400 = sig_347 & sig_373;
  int sig_401 = sig_347 & sig_373;
  int sig_402 = sig_400 & wa[2];
  int sig_403 = sig_400 ^ sig_343;
  int sig_404 = sig_401 | sig_402;
  int sig_405 = sig_352 ^ sig_374;
  int sig_406 = sig_352 & sig_374;
  int sig_407 = sig_405 & sig_348;
  int sig_408 = sig_405 ^ sig_348;
  int sig_409 = sig_406 ^ sig_407;
  int sig_410 = sig_357 ^ sig_375;
  int sig_411 = sig_357 & sig_375;
  int sig_412 = sig_410 & sig_353;
  int sig_413 = sig_410 ^ sig_353;
  int sig_414 = sig_411 ^ sig_412;
  int sig_415 = sig_362 ^ sig_376;
  int sig_416 = sig_362 & sig_376;
  int sig_417 = sig_415 & sig_358;
  int sig_418 = sig_415 ^ sig_358;
  int sig_419 = sig_416 | sig_417;
  int sig_420 = sig_367 ^ sig_377;
  int sig_421 = sig_367 & sig_377;
  int sig_422 = sig_420 & sig_363;
  int sig_423 = sig_420 ^ sig_363;
  int sig_424 = sig_421 | sig_422;
  int sig_425 = sig_318 ^ sig_378;
  int sig_426 = sig_318 & sig_378;
  int sig_427 = sig_425 & sig_368;
  int sig_428 = sig_425 ^ sig_368;
  int sig_429 = sig_426 | sig_427;
  int sig_431 = wa[1] & wb[4];
  int sig_433 = wa[3] & wb[8];
  int sig_434 = wa[4] & wb[8];
  int sig_435 = wa[5] & wb[8];
  int sig_436 = wa[6] & wb[8];
  int sig_437 = wa[7] & wb[8];
  int sig_438 = wa[8] & wb[8];
  int sig_439 = wa[9] & wb[8];
  int sig_440 = wa[10] & wb[8];
  int sig_441 = sig_388;
  int sig_444 = sig_441;
  int sig_447 = wa[6] & sig_431;
  int sig_450 = sig_447;
  int sig_451 = sig_398;
  int sig_454 = sig_451 & wa[0];
  int sig_455 = wb[4] & wa[5];
  int sig_456 = sig_403 ^ sig_433;
  int sig_457 = sig_403 & sig_433;
  int sig_458 = sig_456 & sig_399;
  int sig_459 = sig_456 ^ sig_399;
  int sig_460 = sig_457 | sig_458;
  int sig_461 = sig_408 ^ sig_434;
  int sig_462 = sig_408 & sig_434;
  int sig_463 = sig_461 & sig_404;
  int sig_464 = sig_461 ^ sig_404;
  int sig_465 = sig_462 | sig_463;
  int sig_466 = sig_413 ^ sig_435;
  int sig_467 = sig_413 & sig_435;
  int sig_468 = sig_466 & sig_409;
  int sig_469 = sig_466 ^ sig_409;
  int sig_470 = sig_467 | sig_468;
  int sig_471 = sig_418 ^ sig_436;
  int sig_472 = sig_418 & sig_436;
  int sig_473 = sig_471 & sig_414;
  int sig_474 = sig_471 ^ sig_414;
  int sig_475 = sig_472 | sig_473;
  int sig_476 = sig_423 ^ sig_437;
  int sig_477 = sig_423 & sig_437;
  int sig_478 = sig_476 & sig_419;
  int sig_479 = sig_476 ^ sig_419;
  int sig_480 = sig_477 | sig_478;
  int sig_481 = sig_428 ^ sig_438;
  int sig_482 = sig_428 & sig_438;
  int sig_483 = sig_481 & sig_424;
  int sig_484 = sig_481 ^ sig_424;
  int sig_485 = sig_482 ^ sig_483;
  int sig_486 = sig_379 ^ sig_439;
  int sig_487 = sig_379 & sig_439;
  int sig_488 = sig_486 & sig_429;
  int sig_489 = sig_486 ^ sig_429;
  int sig_490 = sig_487 | sig_488;
  int sig_492 = wa[1] & wb[6];
  int sig_493 = wa[2] & wb[7];
  int sig_494 = wa[3] & wb[9];
  int sig_495 = wa[4] & wb[9];
  int sig_496 = wa[5] & wb[9];
  int sig_497 = wa[6] & wb[9];
  int sig_498 = wa[7] & wb[9];
  int sig_499 = wa[8] & wb[9];
  int sig_500 = wa[9] & wb[9];
  int sig_501 = wa[10] & wb[9];
  int sig_507 = sig_454 ^ sig_492;
  int sig_508 = wa[3] & sig_492;
  int sig_509 = wa[5] & sig_450;
  int sig_510 = sig_507 ^ sig_450;
  int sig_511 = sig_508 | sig_509;
  int sig_512 = sig_459 ^ sig_493;
  int sig_513 = sig_459;
  int sig_514 = wb[6] & wa[6];
  int sig_515 = sig_512 ^ sig_455;
  int sig_516 = sig_513 | sig_514;
  int sig_517 = sig_464 ^ sig_494;
  int sig_518 = sig_464 & sig_494;
  int sig_519 = sig_517 & sig_460;
  int sig_520 = sig_517 ^ sig_460;
  int sig_521 = sig_518 ^ sig_519;
  int sig_522 = sig_469 ^ sig_495;
  int sig_523 = sig_469 & sig_495;
  int sig_524 = sig_522 & sig_465;
  int sig_525 = sig_522 ^ sig_465;
  int sig_526 = sig_523 | sig_524;
  int sig_527 = sig_474 ^ sig_496;
  int sig_528 = sig_474 & sig_496;
  int sig_529 = sig_527 & sig_470;
  int sig_530 = sig_527 ^ sig_470;
  int sig_531 = sig_528 | sig_529;
  int sig_532 = sig_479 ^ sig_497;
  int sig_533 = sig_479 & sig_497;
  int sig_534 = sig_532 & sig_475;
  int sig_535 = sig_532 ^ sig_475;
  int sig_536 = sig_533 ^ sig_534;
  int sig_537 = sig_484 ^ sig_498;
  int sig_538 = sig_484 & sig_498;
  int sig_539 = sig_537 & sig_480;
  int sig_540 = sig_537 ^ sig_480;
  int sig_541 = sig_538 ^ sig_539;
  int sig_542 = sig_489 ^ sig_499;
  int sig_543 = sig_489 & sig_499;
  int sig_544 = sig_542 & sig_485;
  int sig_545 = sig_542 ^ sig_485;
  int sig_546 = sig_543 ^ sig_544;
  int sig_547 = sig_440 ^ sig_500;
  int sig_548 = sig_440 & sig_500;
  int sig_549 = sig_547 & sig_490;
  int sig_550 = sig_547 ^ sig_490;
  int sig_551 = sig_548 | sig_549;
  int sig_552 = wa[0] & wb[10];
  int sig_553 = wa[1] & wb[10];
  int sig_554 = wa[2] & wb[10];
  int sig_555 = wa[3] & wb[10];
  int sig_556 = wa[4] & wb[10];
  int sig_557 = wa[5] & wb[10];
  int sig_558 = wa[6] & wb[10];
  int sig_559 = wa[7] & wb[10];
  int sig_560 = wa[8] & wb[10];
  int sig_561 = wa[9] & wb[10];
  int sig_562 = wa[10] & wb[10];
  int sig_563 = sig_510 ^ sig_552;
  int sig_564 = wa[9] & sig_552;
  int sig_565 = wa[10] & wb[9];
  int sig_566 = sig_563;
  int sig_567 = sig_564 | sig_565;
  int sig_568 = sig_515 ^ sig_553;
  int sig_569 = sig_515 & sig_553;
  int sig_570 = sig_568 & sig_511;
  int sig_571 = sig_568 ^ sig_511;
  int sig_572 = sig_569 ^ sig_570;
  int sig_573 = sig_520 ^ sig_554;
  int sig_574 = sig_520 & sig_554;
  int sig_575 = sig_573 & sig_516;
  int sig_576 = sig_573 ^ sig_516;
  int sig_577 = sig_574 | sig_575;
  int sig_578 = sig_525 ^ sig_555;
  int sig_579 = sig_525 & sig_555;
  int sig_580 = sig_578 & sig_521;
  int sig_581 = sig_578 ^ sig_521;
  int sig_582 = sig_579 | sig_580;
  int sig_583 = sig_530 ^ sig_556;
  int sig_584 = sig_530 & sig_556;
  int sig_585 = sig_583 & sig_526;
  int sig_586 = sig_583 ^ sig_526;
  int sig_587 = sig_584 | sig_585;
  int sig_588 = sig_535 ^ sig_557;
  int sig_589 = sig_535 & sig_557;
  int sig_590 = sig_588 & sig_531;
  int sig_591 = sig_588 ^ sig_531;
  int sig_592 = sig_589 | sig_590;
  int sig_593 = sig_540 ^ sig_558;
  int sig_594 = sig_540 & sig_558;
  int sig_595 = sig_593 & sig_536;
  int sig_596 = sig_593 ^ sig_536;
  int sig_597 = sig_594 ^ sig_595;
  int sig_598 = sig_545 ^ sig_559;
  int sig_599 = sig_545 & sig_559;
  int sig_600 = sig_598 & sig_541;
  int sig_601 = sig_598 ^ sig_541;
  int sig_602 = sig_599 ^ sig_600;
  int sig_603 = sig_550 ^ sig_560;
  int sig_604 = sig_550 & sig_560;
  int sig_605 = sig_603 & sig_546;
  int sig_606 = sig_603 ^ sig_546;
  int sig_607 = sig_604 | sig_605;
  int sig_608 = sig_501 ^ sig_561;
  int sig_609 = sig_501 & sig_561;
  int sig_610 = sig_608 & sig_551;
  int sig_611 = sig_608 ^ sig_551;
  int sig_612 = sig_609 | sig_610;
  int sig_613 = sig_571 ^ sig_567;
  int sig_614 = sig_571 & sig_567;
  int sig_615 = sig_576 ^ sig_572;
  int sig_616 = sig_576 & sig_572;
  int sig_617 = sig_615 & sig_614;
  int sig_618 = sig_615 ^ sig_614;
  int sig_619 = sig_616 | sig_617;
  int sig_620 = sig_581 ^ sig_577;
  int sig_621 = sig_581 & sig_577;
  int sig_622 = sig_620 & sig_619;
  int sig_623 = sig_620 ^ sig_619;
  int sig_624 = sig_621 | sig_622;
  int sig_625 = sig_586 ^ sig_582;
  int sig_626 = sig_586 & sig_582;
  int sig_627 = sig_625 & sig_624;
  int sig_628 = sig_625 ^ sig_624;
  int sig_629 = sig_626 | sig_627;
  int sig_630 = sig_591 ^ sig_587;
  int sig_631 = sig_591 & sig_587;
  int sig_632 = sig_630 & sig_629;
  int sig_633 = sig_630 ^ sig_629;
  int sig_634 = sig_631 | sig_632;
  int sig_635 = sig_596 ^ sig_592;
  int sig_636 = sig_596 & sig_592;
  int sig_637 = sig_635 & sig_634;
  int sig_638 = sig_635 ^ sig_634;
  int sig_639 = sig_636 ^ sig_637;
  int sig_640 = sig_601 ^ sig_597;
  int sig_641 = sig_601 & sig_597;
  int sig_642 = sig_640 & sig_639;
  int sig_643 = sig_640 ^ sig_639;
  int sig_644 = sig_641 | sig_642;
  int sig_645 = sig_606 ^ sig_602;
  int sig_646 = sig_606 & sig_602;
  int sig_647 = sig_645 & sig_644;
  int sig_648 = sig_645 ^ sig_644;
  int sig_649 = sig_646 | sig_647;
  int sig_650 = sig_611 ^ sig_607;
  int sig_651 = sig_611 & sig_607;
  int sig_652 = sig_650 & sig_649;
  int sig_653 = sig_650 ^ sig_649;
  int sig_654 = sig_651 | sig_652;
  int sig_655 = sig_562 ^ sig_612;
  int sig_656 = sig_562 & sig_612;
  int sig_657 = sig_655 & sig_654;
  int sig_658 = sig_655 ^ sig_654;
  int sig_659 = sig_656 | sig_657;
  y |=  (sig_22 & 0x01) << 0; // default output
  y |=  (sig_44 & 0x01) << 1; // default output
  y |=  (sig_476 & 0x01) << 2; // default output
  y |=  (sig_528 & 0x01) << 3; // default output
  y |=  (sig_623 & 0x01) << 4; // default output
  y |=  (sig_601 & 0x01) << 5; // default output
  y |=  (sig_243 & 0x01) << 6; // default output
  y |=  (sig_383 & 0x01) << 7; // default output
  y |=  (sig_444 & 0x01) << 8; // default output
  y |=  (sig_398 & 0x01) << 9; // default output
  y |=  (sig_566 & 0x01) << 10; // default output
  y |=  (sig_613 & 0x01) << 11; // default output
  y |=  (sig_618 & 0x01) << 12; // default output
  y |=  (sig_623 & 0x01) << 13; // default output
  y |=  (sig_628 & 0x01) << 14; // default output
  y |=  (sig_633 & 0x01) << 15; // default output
  y |=  (sig_638 & 0x01) << 16; // default output
  y |=  (sig_643 & 0x01) << 17; // default output
  y |=  (sig_648 & 0x01) << 18; // default output
  y |=  (sig_653 & 0x01) << 19; // default output
  y |=  (sig_658 & 0x01) << 20; // default output
  y |=  (sig_659 & 0x01) << 21; // default output
   return y;
}
