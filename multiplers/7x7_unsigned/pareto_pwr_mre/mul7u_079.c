/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.23 %
// MAE = 38 
// WCE% = 0.96 %
// WCE = 158 
// WCRE% = 100.00 %
// EP% = 96.04 %
// MRE% = 4.91 %
// MSE = 2248 
// PDK45_PWR = 0.180 mW
// PDK45_AREA = 364.2 um2
// PDK45_DELAY = 1.40 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul7u_079(uint64_t a, uint64_t b) {
  int wa[7];
  int wb[7];
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
  int sig_27 = wa[6] & wb[1];
  int sig_49 = wa[6] & wb[0];
  int sig_50 = wb[0] & wa[5];
  int sig_51 = wa[6] & wb[0];
  int sig_53 = sig_50 ^ sig_49;
  int sig_54 = sig_51 & wa[5];
  int sig_55 = sig_54 ^ sig_27;
  int sig_56 = sig_54 & wb[1];
  int sig_61 = wa[3] & wb[2];
  int sig_62 = wa[5] & wb[2];
  int sig_63 = wa[6] & wb[2];
  int sig_80 = wa[5] & wb[1];
  int sig_81 = sig_53 ^ sig_61;
  int sig_82 = sig_53 & sig_61;
  int sig_83 = sig_81 & sig_80;
  int sig_84 = sig_81 ^ sig_80;
  int sig_85 = sig_82 | sig_83;
  int sig_86 = sig_55 ^ sig_62;
  int sig_87 = sig_55 & sig_62;
  int sig_88 = sig_86 & sig_85;
  int sig_89 = sig_86 ^ sig_85;
  int sig_90 = sig_87 | sig_88;
  int sig_91 = sig_56 ^ sig_63;
  int sig_92 = sig_56 & wb[2];
  int sig_93 = wa[6] & sig_90;
  int sig_94 = sig_91 ^ sig_90;
  int sig_95 = sig_92 | sig_93;
  int sig_99 = wa[3] & wb[3];
  int sig_100 = wa[4] & wb[3];
  int sig_101 = wa[5] & wb[3];
  int sig_102 = wa[6] & wb[3];
  int sig_114 = wa[4] & wb[2];
  int sig_115 = sig_84 ^ sig_99;
  int sig_116 = sig_84 & sig_99;
  int sig_117 = sig_115 & sig_114;
  int sig_118 = sig_115 ^ sig_114;
  int sig_119 = sig_116 | sig_117;
  int sig_120 = sig_89 ^ sig_100;
  int sig_121 = sig_89 & sig_100;
  int sig_122 = sig_120 & sig_119;
  int sig_123 = sig_120 ^ sig_119;
  int sig_124 = sig_121 ^ sig_122;
  int sig_125 = sig_94 ^ sig_101;
  int sig_126 = sig_94 & sig_101;
  int sig_127 = sig_125 & sig_124;
  int sig_128 = sig_125 ^ sig_124;
  int sig_129 = sig_126 | sig_127;
  int sig_130 = sig_95 ^ sig_102;
  int sig_131 = sig_95 & wb[3];
  int sig_132 = sig_130 & sig_129;
  int sig_133 = sig_130 ^ sig_129;
  int sig_134 = sig_131 | sig_132;
  int sig_137 = wa[2] & wb[4];
  int sig_138 = wa[3] & wb[4];
  int sig_139 = wa[4] & wb[4];
  int sig_140 = wa[5] & wb[4];
  int sig_141 = wa[6] & wb[4];
  int sig_148 = wb[4] & wa[2];
  int sig_149 = sig_118 ^ sig_137;
  int sig_152 = sig_149 ^ sig_148;
  int sig_153 = wb[4] & wa[2];
  int sig_154 = sig_123 ^ sig_138;
  int sig_155 = sig_123 & sig_138;
  int sig_156 = sig_154 & sig_153;
  int sig_157 = sig_154 ^ sig_153;
  int sig_158 = sig_155 ^ sig_156;
  int sig_159 = sig_128 ^ sig_139;
  int sig_160 = sig_128 & sig_139;
  int sig_161 = sig_159 & sig_158;
  int sig_162 = sig_159 ^ sig_158;
  int sig_163 = sig_160 | sig_161;
  int sig_164 = sig_133 ^ sig_140;
  int sig_165 = sig_133 & sig_140;
  int sig_166 = sig_164 & sig_163;
  int sig_167 = sig_164 ^ sig_163;
  int sig_168 = sig_165 | sig_166;
  int sig_169 = sig_134 ^ sig_141;
  int sig_170 = sig_134 & wb[4];
  int sig_171 = wa[6] & sig_168;
  int sig_172 = sig_169 ^ sig_168;
  int sig_173 = sig_170 | sig_171;
  int sig_175 = wa[1] & wb[5];
  int sig_176 = wa[2] & wb[5];
  int sig_177 = wa[3] & wb[5];
  int sig_178 = wa[4] & wb[5];
  int sig_179 = wa[5] & wb[5];
  int sig_180 = wa[6] & wb[5];
  int sig_182 = wb[5] & wa[1];
  int sig_183 = sig_152 ^ sig_175;
  int sig_186 = sig_183 ^ sig_182;
  int sig_187 = wa[1] & wb[5];
  int sig_188 = sig_157 ^ sig_176;
  int sig_189 = sig_157 & sig_176;
  int sig_190 = sig_188 & sig_187;
  int sig_191 = sig_188 ^ sig_187;
  int sig_192 = sig_189 ^ sig_190;
  int sig_193 = sig_162 ^ sig_177;
  int sig_194 = sig_162 & sig_177;
  int sig_195 = sig_193 & sig_192;
  int sig_196 = sig_193 ^ sig_192;
  int sig_197 = sig_194 ^ sig_195;
  int sig_198 = sig_167 ^ sig_178;
  int sig_199 = sig_167 & sig_178;
  int sig_200 = sig_198 & sig_197;
  int sig_201 = sig_198 ^ sig_197;
  int sig_202 = sig_199 | sig_200;
  int sig_203 = sig_172 ^ sig_179;
  int sig_204 = sig_172 & sig_179;
  int sig_205 = sig_203 & sig_202;
  int sig_206 = sig_203 ^ sig_202;
  int sig_207 = sig_204 ^ sig_205;
  int sig_208 = sig_173 ^ sig_180;
  int sig_209 = sig_173 & wb[5];
  int sig_210 = wa[6] & sig_207;
  int sig_211 = sig_208 ^ sig_207;
  int sig_212 = sig_209 | sig_210;
  int sig_213 = wa[0] & wb[6];
  int sig_214 = wa[1] & wb[6];
  int sig_215 = wa[2] & wb[6];
  int sig_216 = wa[3] & wb[6];
  int sig_217 = wa[4] & wb[6];
  int sig_218 = wa[5] & wb[6];
  int sig_219 = wa[6] & wb[6];
  int sig_220 = sig_186 ^ sig_213;
  int sig_221 = sig_186 & sig_213;
  int sig_222 = sig_191 ^ sig_214;
  int sig_223 = sig_191 & sig_214;
  int sig_224 = sig_222 & sig_221;
  int sig_225 = sig_222 ^ sig_221;
  int sig_226 = sig_223 ^ sig_224;
  int sig_227 = sig_196 ^ sig_215;
  int sig_228 = sig_196 & sig_215;
  int sig_229 = sig_227 & sig_226;
  int sig_230 = sig_227 ^ sig_226;
  int sig_231 = sig_228 ^ sig_229;
  int sig_232 = sig_201 ^ sig_216;
  int sig_233 = sig_201 & sig_216;
  int sig_234 = sig_232 & sig_231;
  int sig_235 = sig_232 ^ sig_231;
  int sig_236 = sig_233 ^ sig_234;
  int sig_237 = sig_206 ^ sig_217;
  int sig_238 = sig_206 & sig_217;
  int sig_239 = sig_237 & sig_236;
  int sig_240 = sig_237 ^ sig_236;
  int sig_241 = sig_238 ^ sig_239;
  int sig_242 = sig_211 ^ sig_218;
  int sig_243 = sig_211 & sig_218;
  int sig_244 = sig_242 & sig_241;
  int sig_245 = sig_242 ^ sig_241;
  int sig_246 = sig_243 ^ sig_244;
  int sig_247 = sig_212 ^ sig_219;
  int sig_248 = sig_212 & wb[6];
  int sig_249 = wa[6] & sig_246;
  int sig_250 = sig_247 ^ sig_246;
  int sig_251 = sig_248 | sig_249;
  y |=  (sig_241 & 0x01) << 0; // default output
  y |=  (sig_217 & 0x01) << 1; // default output
  y |=  (sig_86 & 0x01) << 2; // default output
  y |=  (sig_88 & 0x01) << 3; // default output
  y |=  (sig_95 & 0x01) << 4; // default output
  y |=  (sig_200 & 0x01) << 5; // default output
  y |=  (sig_220 & 0x01) << 6; // default output
  y |=  (sig_225 & 0x01) << 7; // default output
  y |=  (sig_230 & 0x01) << 8; // default output
  y |=  (sig_235 & 0x01) << 9; // default output
  y |=  (sig_240 & 0x01) << 10; // default output
  y |=  (sig_245 & 0x01) << 11; // default output
  y |=  (sig_250 & 0x01) << 12; // default output
  y |=  (sig_251 & 0x01) << 13; // default output
   return y;
}
