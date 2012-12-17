/* Generated from jroes.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2012-12-13 23:23
   Version 4.7.0 
   macosx-unix-clang-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2012-12-13 on Hunters-MacBook-Air.local (Darwin)
   command line: jroes.scm 0
   used units: library eval utils srfi_2d1 srfi_2d69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[54];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,49),40,98,102,115,45,107,101,121,98,111,97,114,100,45,100,105,115,116,97,110,99,101,32,99,104,97,114,115,49,53,50,32,99,104,97,114,115,50,53,51,32,115,99,111,114,101,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,35),40,112,114,101,45,98,102,115,32,103,114,97,112,104,54,50,32,115,111,117,114,99,101,54,51,32,116,97,114,103,101,116,54,52,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,98,102,115,32,103,114,97,112,104,54,54,32,115,111,117,114,99,101,54,55,32,116,97,114,103,101,116,54,56,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,16),40,103,56,57,32,110,101,105,103,104,98,111,114,57,55,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,56,56,32,103,57,52,57,57,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,17),40,97,53,55,50,32,110,101,105,103,104,98,111,114,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,61),40,98,102,115,45,115,101,97,114,99,104,32,103,114,97,112,104,55,50,32,115,111,117,114,99,101,55,51,32,116,97,114,103,101,116,55,52,32,117,110,118,105,115,105,116,101,100,55,53,32,100,105,115,116,97,110,99,101,55,54,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,19),40,110,101,105,103,104,98,111,114,115,32,110,111,100,101,49,48,53,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,75),40,116,111,107,101,110,105,122,101,45,99,104,97,114,115,45,119,105,116,104,45,105,110,100,101,120,32,99,104,97,114,115,49,48,55,32,116,111,107,101,110,115,49,48,56,32,99,117,114,114,101,110,116,45,116,111,107,101,110,49,48,57,32,112,111,115,105,116,105,111,110,49,49,48,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,35),40,116,111,107,101,110,105,122,101,45,115,116,114,105,110,103,45,119,105,116,104,45,105,110,100,101,120,32,115,116,114,49,49,53,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,71),40,115,117,103,103,101,115,116,45,98,101,116,116,101,114,32,119,111,114,100,49,49,55,32,98,101,115,116,45,114,101,115,117,108,116,49,49,56,32,100,105,99,116,105,111,110,97,114,121,49,49,57,32,115,99,111,114,105,110,103,45,109,101,116,104,111,100,49,50,48,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,27),40,115,117,103,103,101,115,116,32,119,111,114,100,49,51,49,32,109,101,116,104,111,100,49,51,50,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,97,56,50,52,32,114,101,115,117,108,116,49,51,57,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,15),40,103,49,52,56,32,116,111,107,101,110,49,53,57,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,52,50,32,103,49,53,52,49,54,54,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,40),40,115,117,103,103,101,115,116,45,116,101,120,116,32,116,101,120,116,49,51,55,32,115,99,111,114,105,110,103,45,109,101,116,104,111,100,49,51,56,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,49,55,55,32,103,49,56,57,49,57,57,32,103,49,57,48,50,48,48,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,39),40,109,97,112,45,99,97,115,101,32,111,114,105,103,105,110,97,108,45,119,111,114,100,49,55,51,32,110,101,119,45,119,111,114,100,49,55,52,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,44),40,114,101,112,108,97,99,101,45,115,117,103,103,101,115,116,105,111,110,115,32,116,101,120,116,50,48,57,32,115,117,103,103,101,115,116,105,111,110,115,50,49,48,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,34),40,115,117,103,103,101,115,116,45,119,105,116,104,45,114,101,112,108,97,99,101,109,101,110,116,32,116,101,120,116,50,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,22),40,103,50,51,54,32,111,116,104,101,114,45,118,101,114,116,101,120,50,52,52,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,53,32,103,50,52,49,50,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,16),40,103,50,50,52,32,118,101,114,116,101,120,50,51,50,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,56,32,103,50,55,48,50,55,56,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,51,32,103,50,50,57,50,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,54,32,103,52,50,52,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,109,97,112,45,108,111,111,112,52,32,103,49,54,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_fcall f_1239(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_fcall f_1252(C_word t0,C_word t1) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_353)
static void C_ccall f_353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_357)
static void C_ccall f_357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1212)
static void C_fcall f_1212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_395)
static void C_ccall f_395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_383)
static void C_ccall f_383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_405)
static void C_ccall f_405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_fcall f_1189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1199)
static void C_ccall f_1199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_fcall f_1150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_fcall f_1163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1142)
static void C_ccall f_1142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_fcall f_1072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1094)
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_fcall f_1074(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1064)
static void C_ccall f_1064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_961)
static void C_fcall f_961(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_974)
static void C_fcall f_974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_fcall f_890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_fcall f_903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_835)
static void C_fcall f_835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_839)
static void C_ccall f_839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_737)
static void C_fcall f_737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_ccall f_675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_640)
static void C_ccall f_640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_550)
static void C_fcall f_550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_560)
static void C_ccall f_560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_511)
static void C_fcall f_511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_527)
static void C_ccall f_527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_465)
static void C_ccall f_465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_478)
static void C_ccall f_478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_407)
static void C_ccall f_407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1239)
static void C_fcall trf_1239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1239(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1239(t0,t1,t2);}

C_noret_decl(trf_1252)
static void C_fcall trf_1252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1252(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1252(t0,t1);}

C_noret_decl(trf_1212)
static void C_fcall trf_1212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1212(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1212(t0,t1,t2);}

C_noret_decl(trf_1189)
static void C_fcall trf_1189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1189(t0,t1,t2);}

C_noret_decl(trf_1150)
static void C_fcall trf_1150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1150(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1150(t0,t1,t2);}

C_noret_decl(trf_1163)
static void C_fcall trf_1163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1163(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1163(t0,t1);}

C_noret_decl(trf_1072)
static void C_fcall trf_1072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1072(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1072(t0,t1,t2);}

C_noret_decl(trf_1094)
static void C_fcall trf_1094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1094(t0,t1,t2);}

C_noret_decl(trf_1074)
static void C_fcall trf_1074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1074(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1074(t0,t1,t2);}

C_noret_decl(trf_961)
static void C_fcall trf_961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_961(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_961(t0,t1,t2,t3);}

C_noret_decl(trf_974)
static void C_fcall trf_974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_974(t0,t1);}

C_noret_decl(trf_890)
static void C_fcall trf_890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_890(t0,t1,t2);}

C_noret_decl(trf_903)
static void C_fcall trf_903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_903(t0,t1);}

C_noret_decl(trf_835)
static void C_fcall trf_835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_835(t0,t1,t2);}

C_noret_decl(trf_737)
static void C_fcall trf_737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_737(t0,t1);}

C_noret_decl(trf_550)
static void C_fcall trf_550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_550(t0,t1,t2);}

C_noret_decl(trf_511)
static void C_fcall trf_511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_511(t0,t1,t2);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(262144);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(516)){
C_save(t1);
C_rereclaim2(516*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,54);
lf[0]=C_h_intern(&lf[0],15,"dictionary-file");
lf[1]=C_h_intern(&lf[1],3,"map");
lf[2]=C_h_intern(&lf[2],12,"*dictionary*");
lf[3]=C_h_intern(&lf[3],11,"keymap-file");
lf[4]=C_h_intern(&lf[4],10,"*key-list*");
lf[5]=C_h_intern(&lf[5],8,"*keymap*");
lf[6]=C_h_intern(&lf[6],18,"*suggestion-cache*");
lf[7]=C_h_intern(&lf[7],14,"*max-distance*");
lf[8]=C_h_intern(&lf[8],8,"for-each");
lf[9]=C_h_intern(&lf[9],21,"bfs-keyboard-distance");
lf[10]=C_h_intern(&lf[10],7,"pre-bfs");
lf[11]=C_h_intern(&lf[11],14,"hash-table-ref");
lf[12]=C_h_intern(&lf[12],23,"*precomputed-distances*");
lf[13]=C_h_intern(&lf[13],3,"bfs");
lf[14]=C_h_intern(&lf[14],10,"bfs-search");
lf[15]=C_h_intern(&lf[15],15,"make-hash-table");
lf[16]=C_h_intern(&lf[16],9,"not-found");
lf[17]=C_h_intern(&lf[17],15,"hash-table-set!");
lf[18]=C_h_intern(&lf[18],22,"hash-table-ref/default");
lf[19]=C_h_intern(&lf[19],6,"append");
lf[20]=C_h_intern(&lf[20],18,"hash-table-exists\077");
lf[21]=C_h_intern(&lf[21],6,"remove");
lf[22]=C_h_intern(&lf[22],9,"neighbors");
lf[23]=C_h_intern(&lf[23],25,"tokenize-chars-with-index");
lf[24]=C_h_intern(&lf[24],18,"char-set-contains\077");
lf[25]=C_h_intern(&lf[25],15,"char-set:letter");
lf[26]=C_h_intern(&lf[26],26,"tokenize-string-with-index");
lf[27]=C_h_intern(&lf[27],16,"\003sysstring->list");
lf[28]=C_h_intern(&lf[28],14,"suggest-better");
lf[29]=C_h_intern(&lf[29],7,"suggest");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\377\377\377\377\376\003\000\000\002\376B\000\000\012none found\376\377\016");
lf[31]=C_h_intern(&lf[31],12,"suggest-text");
lf[32]=C_h_intern(&lf[32],8,"map-case");
lf[33]=C_h_intern(&lf[33],4,"last");
lf[34]=C_h_intern(&lf[34],15,"string-downcase");
lf[35]=C_h_intern(&lf[35],13,"string-filter");
lf[36]=C_h_intern(&lf[36],16,"char-alphabetic\077");
lf[37]=C_h_intern(&lf[37],16,"\003syslist->string");
lf[38]=C_h_intern(&lf[38],6,"filter");
lf[39]=C_h_intern(&lf[39],19,"replace-suggestions");
lf[40]=C_h_intern(&lf[40],14,"string-replace");
lf[41]=C_h_intern(&lf[41],24,"suggest-with-replacement");
lf[42]=C_h_intern(&lf[42],25,"\003sysimplicit-exit-handler");
lf[43]=C_h_intern(&lf[43],7,"newline");
lf[44]=C_h_intern(&lf[44],7,"display");
lf[45]=C_h_intern(&lf[45],10,"read-lines");
lf[46]=C_h_intern(&lf[46],18,"current-input-port");
lf[47]=C_h_intern(&lf[47],15,"hash-table-keys");
lf[48]=C_h_intern(&lf[48],14,"symbol->string");
lf[49]=C_h_intern(&lf[49],4,"eval");
lf[50]=C_h_intern(&lf[50],4,"read");
lf[51]=C_h_intern(&lf[51],15,"open-input-file");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\024fixtures/keymap.lisp");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\022fixtures/words.txt");
C_register_lf2(lf,54,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k316 */
static void C_ccall f_318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k319 in k316 */
static void C_ccall f_321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k322 in k319 in k316 */
static void C_ccall f_324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k325 in k322 in k319 in k316 */
static void C_ccall f_327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:5: open-input-file");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t2,lf[53]);}

/* k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_334,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! dictionary-file ...) */,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_343,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("jroes.scm:6: read-lines");
((C_proc3)C_fast_retrieve_symbol_proc(lf[45]))(3,*((C_word*)lf[45]+1),t7,C_fast_retrieve(lf[0]));}

/* k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_343,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1239,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1239(t7,t3,t1);}

/* map-loop4 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1239(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1239,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("jroes.scm:6: string-filter");
((C_proc4)C_fast_retrieve_symbol_proc(lf[35]))(4,*((C_word*)lf[35]+1),t3,*((C_word*)lf[36]+1),t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}}

/* k1266 in map-loop4 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1268,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=t3;
f_1252(t4,C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_1252(t5,t4);}}

/* k1250 in k1266 in map-loop4 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1252(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1239(t4,((C_word*)t0)[2],t3);}

/* k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_349,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! *dictionary* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:7: open-input-file");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t3,lf[52]);}

/* k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_353,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! keymap-file ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1237,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:8: read");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(3,*((C_word*)lf[50]+1),t4,C_fast_retrieve(lf[3]));}

/* k1235 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:8: eval");
((C_proc3)C_fast_retrieve_symbol_proc(lf[49]))(3,*((C_word*)lf[49]+1),((C_word*)t0)[2],t1);}

/* k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_357,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! *key-list* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:9: make-hash-table");
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t3);}

/* k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_361,2,t0,t1);}
t2=C_mutate((C_word*)lf[5]+1 /* (set! *keymap* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:10: make-hash-table");
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t3);}

/* k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_365,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! *suggestion-cache* ...) */,t1);
t3=C_set_block_item(lf[7] /* *max-distance* */,0,C_fix(12));
t4=C_fast_retrieve(lf[4]);
t5=C_i_check_list_2(t4,lf[8]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1212,a[2]=t8,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1212(t10,t6,t4);}

/* for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1212(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1212,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1222,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_391,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_395,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(t4);
C_trace("jroes.scm:15: symbol->string");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t6,t7);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k393 in for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string->list");
t2=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k389 in for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_391,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_379,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_383,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
C_trace("jroes.scm:16: symbol->string");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[48]+1)))(3,*((C_word*)lf[48]+1),t4,t5);}

/* k381 in k389 in for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string->list");
t2=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k377 in k389 in for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:14: hash-table-set!");
((C_proc5)C_fast_retrieve_symbol_proc(lf[17]))(5,*((C_word*)lf[17]+1),((C_word*)t0)[3],C_fast_retrieve(lf[5]),((C_word*)t0)[2],t1);}

/* k1220 in for-each-loop36 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1212(t3,((C_word*)t0)[2],t2);}

/* k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_405,2,t0,t1);}
t2=C_mutate((C_word*)lf[9]+1 /* (set! bfs-keyboard-distance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_407,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[10]+1 /* (set! pre-bfs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_455,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[13]+1 /* (set! bfs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_465,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[14]+1 /* (set! bfs-search ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_491,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[22]+1 /* (set! neighbors ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_587,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[23]+1 /* (set! tokenize-chars-with-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[26]+1 /* (set! tokenize-string-with-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[28]+1 /* (set! suggest-better ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_703,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[29]+1 /* (set! suggest ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[31]+1 /* (set! suggest-text ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[32]+1 /* (set! map-case ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_925,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[39]+1 /* (set! replace-suggestions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[41]+1 /* (set! suggest-with-replacement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1056,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:130: hash-table-keys");
((C_proc3)C_fast_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t15,C_fast_retrieve(lf[5]));}

/* k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1071,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:131: make-hash-table");
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t2);}

/* k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[8]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1121,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1189,a[2]=t2,a[3]=t6,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1189(t8,t4,((C_word*)t0)[3]);}

/* for-each-loop223 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1189,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1199,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g224230");
t5=((C_word*)t0)[2];
f_1072(t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1197 in for-each-loop223 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1189(t3,((C_word*)t0)[2],t2);}

/* k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1121,2,t0,t1);}
t2=C_mutate((C_word*)lf[12]+1 /* (set! *precomputed-distances* ...) */,((C_word*)t0)[3]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1136,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1187,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:143: current-input-port");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[46]+1)))(2,*((C_word*)lf[46]+1),t8);}

/* k1185 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:143: read-lines");
((C_proc3)C_fast_retrieve_symbol_proc(lf[45]))(3,*((C_word*)lf[45]+1),((C_word*)t0)[2],t1);}

/* k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1136,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1142,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1150,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1150(t7,t3,t1);}

/* map-loop258 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1150(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1150,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1179,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1126,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1133,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("jroes.scm:141: suggest-with-replacement");
((C_proc3)C_fast_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t6,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[2])[1]);}}

/* k1131 in map-loop258 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:141: display");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(3,*((C_word*)lf[44]+1),((C_word*)t0)[2],t1);}

/* k1124 in map-loop258 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:142: newline");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[43]+1)))(2,*((C_word*)lf[43]+1),((C_word*)t0)[2]);}

/* k1177 in map-loop258 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1179,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1163,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=t3;
f_1163(t4,C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_1163(t5,t4);}}

/* k1161 in k1177 in map-loop258 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1150(t4,((C_word*)t0)[2],t3);}

/* k1140 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1148,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_fast_retrieve_symbol_proc(lf[42]))(2,*((C_word*)lf[42]+1),t3);}

/* k1146 in k1140 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1143 in k1140 in k1134 in k1119 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* g224 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1072(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1072,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
t4=C_i_check_list_2(((C_word*)t0)[2],lf[8]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1094,a[2]=t3,a[3]=t6,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1094(t8,t1,((C_word*)t0)[2]);}

/* for-each-loop235 in g224 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1094,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1104,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g236242");
t5=((C_word*)t0)[2];
f_1074(t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1102 in for-each-loop235 in g224 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1094(t3,((C_word*)t0)[2],t2);}

/* g236 in g224 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_1074(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1074,NULL,3,t0,t1,t2);}
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1086,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("jroes.scm:135: bfs");
((C_proc5)C_fast_retrieve_symbol_proc(lf[13]))(5,*((C_word*)lf[13]+1),t4,C_fast_retrieve(lf[5]),((C_word*)t0)[3],t2);}

/* k1084 in g236 in g224 in k1069 in k1066 in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:134: hash-table-set!");
((C_proc5)C_fast_retrieve_symbol_proc(lf[17]))(5,*((C_word*)lf[17]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* suggest-with-replacement in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1056(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1056,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1064,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:127: suggest-text");
((C_proc4)C_fast_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t3,t2,C_fast_retrieve(lf[9]));}

/* k1062 in suggest-with-replacement in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:127: replace-suggestions");
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* replace-suggestions in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1010,4,t0,t1,t2,t3);}
if(C_truep(C_i_null_list_p(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=C_i_car(t3);
t5=C_i_cadr(t4);
t6=C_i_string_length(t5);
t7=C_i_caddr(t4);
t8=C_a_i_plus(&a,2,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1030,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_i_cadr(t4);
t11=C_i_caddr(t4);
C_trace("jroes.scm:123: string-replace");
((C_proc6)C_fast_retrieve_symbol_proc(lf[40]))(6,*((C_word*)lf[40]+1),t9,t2,t10,t11,t8);}}

/* k1028 in replace-suggestions in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_1030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
C_trace("jroes.scm:120: replace-suggestions");
((C_proc4)C_fast_retrieve_symbol_proc(lf[39]))(4,*((C_word*)lf[39]+1),((C_word*)t0)[2],t1,t2);}

/* map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_925,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_947,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("string->list");
t9=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}

/* k945 in map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("string->list");
t3=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k948 in k945 in map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_950,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[5],lf[1]);
t3=C_i_check_list_2(t1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_961(t8,t4,((C_word*)t0)[5],t1);}

/* map-loop177 in k948 in k945 in map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_961(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_961,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_u_i_char_lower_casep(t6);
t9=(C_truep(t8)?C_u_i_char_downcase(t7):C_u_i_char_upcase(t7));
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_974,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t10,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t12=t11;
f_974(t12,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t10));}
else{
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t13=t11;
f_974(t13,t12);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[2])[1]);}}

/* k972 in map-loop177 in k948 in k945 in map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_961(t5,((C_word*)t0)[2],t3,t4);}

/* k957 in k948 in k945 in map-case in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("list->string");
t2=C_fast_retrieve(lf[37]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_819,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_825,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_835,a[2]=t3,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_882,a[2]=t9,a[3]=t6,a[4]=t8,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("jroes.scm:105: tokenize-string-with-index");
((C_proc3)C_fast_retrieve_symbol_proc(lf[26]))(3,*((C_word*)lf[26]+1),t10,t2);}

/* k880 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_882,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_888,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_890(t7,t3,t1);}

/* map-loop142 in k880 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_890,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g148157");
t5=((C_word*)t0)[2];
f_835(t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}}

/* k917 in map-loop142 in k880 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=t3;
f_903(t4,C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_903(t5,t4);}}

/* k901 in k917 in map-loop142 in k880 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_890(t4,((C_word*)t0)[2],t3);}

/* k886 in k880 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:92: filter");
((C_proc4)C_fast_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_835,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_839,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdr(t2);
C_trace("list->string");
t5=C_fast_retrieve(lf[37]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("jroes.scm:97: string-filter");
((C_proc4)C_fast_retrieve_symbol_proc(lf[35]))(4,*((C_word*)lf[35]+1),t2,*((C_word*)lf[36]+1),t1);}

/* k840 in k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_845,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("jroes.scm:98: string-downcase");
((C_proc3)C_fast_retrieve_symbol_proc(lf[34]))(3,*((C_word*)lf[34]+1),t2,t1);}

/* k843 in k840 in k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_845,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_851,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("jroes.scm:101: suggest");
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),t3,t1,((C_word*)t0)[2]);}

/* k849 in k843 in k840 in k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_851,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep(C_i_negativep(t2))){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list1(&a,1,((C_word*)t0)[3]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:104: last");
((C_proc3)C_fast_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),t4,t1);}}

/* k869 in k849 in k843 in k840 in k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:104: map-case");
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k865 in k849 in k843 in k840 in k837 in g148 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_867,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* a824 in suggest-text in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_825,3,t0,t1,t2);}
t3=C_i_length(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nequalp(C_fix(3),t3));}

/* suggest in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_804,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_808,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("jroes.scm:84: hash-table-ref/default");
((C_proc5)C_fast_retrieve_symbol_proc(lf[18]))(5,*((C_word*)lf[18]+1),t4,C_fast_retrieve(lf[6]),t2,C_SCHEME_FALSE);}

/* k806 in suggest in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:87: suggest-better");
((C_proc6)C_fast_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),t2,((C_word*)t0)[3],lf[30],C_fast_retrieve(lf[2]),((C_word*)t0)[2]);}}

/* k812 in k806 in suggest in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_817,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:88: hash-table-set!");
((C_proc5)C_fast_retrieve_symbol_proc(lf[17]))(5,*((C_word*)lf[17]+1),t2,C_fast_retrieve(lf[6]),((C_word*)t0)[2],t1);}

/* k815 in k812 in k806 in suggest in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* suggest-better in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_703,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_null_list_p(t4))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=C_i_car(t4);
if(C_truep(C_i_equalp(t6,t2))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list2(&a,2,C_fix(-1),t2));}
else{
t7=C_i_string_length(t2);
t8=C_i_string_length(t6);
if(C_truep(C_i_nequalp(t7,t8))){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_731,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_783,a[2]=t6,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("string->list");
t11=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
t9=C_i_cdr(t4);
C_trace("jroes.scm:81: suggest-better");
((C_proc6)C_fast_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),t1,t2,t3,t9,t5);}}}}

/* k781 in suggest-better in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_787,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("string->list");
t3=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k785 in k781 in suggest-better in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:77: scoring-method");
t2=((C_word*)t0)[4];
((C_proc5)C_fast_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_fix(0));}

/* k729 in suggest-better in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_negativep(t1))){
t3=t2;
f_737(t3,C_SCHEME_FALSE);}
else{
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_lessp(t1,t3);
if(C_truep(t4)){
t5=t2;
f_737(t5,t4);}
else{
t5=C_i_car(((C_word*)t0)[2]);
t6=t2;
f_737(t6,C_i_negativep(t5));}}}

/* k735 in k729 in suggest-better in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_737,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list2(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t3=C_i_cdr(((C_word*)t0)[6]);
C_trace("jroes.scm:79: suggest-better");
((C_proc6)C_fast_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),((C_word*)t0)[5],((C_word*)t0)[4],t2,t3,((C_word*)t0)[3]);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
C_trace("jroes.scm:80: suggest-better");
((C_proc6)C_fast_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[2],t2,((C_word*)t0)[3]);}}

/* tokenize-string-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_693,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_701,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("string->list");
t4=C_fast_retrieve(lf[27]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k699 in tokenize-string-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:68: tokenize-chars-with-index");
((C_proc6)C_fast_retrieve_symbol_proc(lf[23]))(6,*((C_word*)lf[23]+1),((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_fix(0));}

/* tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_593,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_null_list_p(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_611,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_i_length(t4);
t8=C_a_i_minus(&a,2,t5,t7);
t9=C_a_i_list1(&a,1,t8);
C_trace("jroes.scm:58: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t6,t9,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_629,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t2);
C_trace("jroes.scm:59: char-set-contains?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[24]))(4,*((C_word*)lf[24]+1),t6,C_fast_retrieve(lf[25]),t7);}}

/* k627 in tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_629,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_640,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[6]);
t5=C_a_i_list1(&a,1,t4);
C_trace("jroes.scm:60: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t3,((C_word*)t0)[2],t5);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_663,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_675,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_length(((C_word*)t0)[2]);
t6=C_a_i_minus(&a,2,((C_word*)t0)[5],t5);
t7=C_a_i_list1(&a,1,t6);
C_trace("jroes.scm:63: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t4,t7,((C_word*)t0)[2]);}}

/* k673 in k627 in tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_675,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
C_trace("jroes.scm:63: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k661 in k627 in tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_663,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
C_trace("jroes.scm:62: tokenize-chars-with-index");
((C_proc6)C_fast_retrieve_symbol_proc(lf[23]))(6,*((C_word*)lf[23]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST,t2);}

/* k638 in k627 in tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_640,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
C_trace("jroes.scm:60: tokenize-chars-with-index");
((C_proc6)C_fast_retrieve_symbol_proc(lf[23]))(6,*((C_word*)lf[23]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k609 in tokenize-chars-with-index in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_611,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
C_trace("jroes.scm:58: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* neighbors in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_587(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_587,3,t0,t1,t2);}
C_trace("jroes.scm:54: hash-table-ref");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),t1,C_fast_retrieve(lf[5]),t2);}

/* bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[18],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_491,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_null_list_p(t5))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[16]);}
else{
t7=C_i_car(t5);
if(C_truep(C_i_equalp(t7,t4))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_510,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t7,a[7]=t6,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_573,a[2]=t6,a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_585,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
C_trace("jroes.scm:43: neighbors");
((C_proc3)C_fast_retrieve_symbol_proc(lf[22]))(3,*((C_word*)lf[22]+1),t10,t7);}}}

/* k583 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:43: remove");
((C_proc4)C_fast_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a572 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_573,3,t0,t1,t2);}
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
C_trace("jroes.scm:43: hash-table-exists?");
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),t1,((C_word*)t0)[2],t3);}

/* k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_511,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t3=C_i_check_list_2(t1,lf[8]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_537,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_550,a[2]=t2,a[3]=t6,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_550(t8,t4,t1);}

/* for-each-loop88 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_550,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_560,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g8995");
t5=((C_word*)t0)[2];
f_511(t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k558 in for-each-loop88 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_550(t3,((C_word*)t0)[2],t2);}

/* k535 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_544,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
C_trace("jroes.scm:50: append");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[19]+1)))(4,*((C_word*)lf[19]+1),t2,t3,((C_word*)t0)[2]);}

/* k542 in k535 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("jroes.scm:47: bfs-search");
((C_proc7)C_fast_retrieve_symbol_proc(lf[14]))(7,*((C_word*)lf[14]+1),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g89 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_fcall f_511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_511,NULL,3,t0,t1,t2);}
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_527,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
C_trace("jroes.scm:45: hash-table-ref/default");
((C_proc5)C_fast_retrieve_symbol_proc(lf[18]))(5,*((C_word*)lf[18]+1),t4,((C_word*)t0)[3],t5,C_fix(0));}

/* k525 in g89 in k508 in bfs-search in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_527,2,t0,t1);}
t2=C_a_i_plus(&a,2,C_fix(1),t1);
C_trace("jroes.scm:45: hash-table-set!");
((C_proc5)C_fast_retrieve_symbol_proc(lf[17]))(5,*((C_word*)lf[17]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* bfs in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_465,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_475,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("jroes.scm:31: make-hash-table");
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t5);}}

/* k473 in bfs in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_478,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("jroes.scm:32: bfs-search");
((C_proc7)C_fast_retrieve_symbol_proc(lf[14]))(7,*((C_word*)lf[14]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4],t3,t1);}

/* k476 in k473 in bfs in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_478,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
C_trace("jroes.scm:33: hash-table-ref");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* pre-bfs in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_455(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_455,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list2(&a,2,t3,t4);
C_trace("jroes.scm:27: hash-table-ref");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(4,*((C_word*)lf[11]+1),t1,C_fast_retrieve(lf[12]),t5);}

/* bfs-keyboard-distance in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_407,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t4,C_fast_retrieve(lf[7])))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(-1));}
else{
t5=C_i_null_list_p(t2);
t6=(C_truep(t5)?t5:C_i_null_list_p(t3));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t4);}
else{
t7=C_i_cdr(t2);
t8=C_i_cdr(t3);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_442,a[2]=t8,a[3]=t7,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t10=C_i_car(t2);
t11=C_i_car(t3);
C_trace("jroes.scm:24: pre-bfs");
((C_proc5)C_fast_retrieve_symbol_proc(lf[10]))(5,*((C_word*)lf[10]+1),t9,C_fast_retrieve(lf[5]),t10,t11);}}}

/* k440 in bfs-keyboard-distance in k403 in k363 in k359 in k355 in k351 in k347 in k341 in k332 in k328 in k325 in k322 in k319 in k316 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_442,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[5],t1);
C_trace("jroes.scm:24: bfs-keyboard-distance");
((C_proc5)C_fast_retrieve_symbol_proc(lf[9]))(5,*((C_word*)lf[9]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[103] = {
{"toplevel:jroes_2escm",(void*)C_toplevel},
{"f_318:jroes_2escm",(void*)f_318},
{"f_321:jroes_2escm",(void*)f_321},
{"f_324:jroes_2escm",(void*)f_324},
{"f_327:jroes_2escm",(void*)f_327},
{"f_330:jroes_2escm",(void*)f_330},
{"f_334:jroes_2escm",(void*)f_334},
{"f_343:jroes_2escm",(void*)f_343},
{"f_1239:jroes_2escm",(void*)f_1239},
{"f_1268:jroes_2escm",(void*)f_1268},
{"f_1252:jroes_2escm",(void*)f_1252},
{"f_349:jroes_2escm",(void*)f_349},
{"f_353:jroes_2escm",(void*)f_353},
{"f_1237:jroes_2escm",(void*)f_1237},
{"f_357:jroes_2escm",(void*)f_357},
{"f_361:jroes_2escm",(void*)f_361},
{"f_365:jroes_2escm",(void*)f_365},
{"f_1212:jroes_2escm",(void*)f_1212},
{"f_395:jroes_2escm",(void*)f_395},
{"f_391:jroes_2escm",(void*)f_391},
{"f_383:jroes_2escm",(void*)f_383},
{"f_379:jroes_2escm",(void*)f_379},
{"f_1222:jroes_2escm",(void*)f_1222},
{"f_405:jroes_2escm",(void*)f_405},
{"f_1068:jroes_2escm",(void*)f_1068},
{"f_1071:jroes_2escm",(void*)f_1071},
{"f_1189:jroes_2escm",(void*)f_1189},
{"f_1199:jroes_2escm",(void*)f_1199},
{"f_1121:jroes_2escm",(void*)f_1121},
{"f_1187:jroes_2escm",(void*)f_1187},
{"f_1136:jroes_2escm",(void*)f_1136},
{"f_1150:jroes_2escm",(void*)f_1150},
{"f_1133:jroes_2escm",(void*)f_1133},
{"f_1126:jroes_2escm",(void*)f_1126},
{"f_1179:jroes_2escm",(void*)f_1179},
{"f_1163:jroes_2escm",(void*)f_1163},
{"f_1142:jroes_2escm",(void*)f_1142},
{"f_1148:jroes_2escm",(void*)f_1148},
{"f_1145:jroes_2escm",(void*)f_1145},
{"f_1072:jroes_2escm",(void*)f_1072},
{"f_1094:jroes_2escm",(void*)f_1094},
{"f_1104:jroes_2escm",(void*)f_1104},
{"f_1074:jroes_2escm",(void*)f_1074},
{"f_1086:jroes_2escm",(void*)f_1086},
{"f_1056:jroes_2escm",(void*)f_1056},
{"f_1064:jroes_2escm",(void*)f_1064},
{"f_1010:jroes_2escm",(void*)f_1010},
{"f_1030:jroes_2escm",(void*)f_1030},
{"f_925:jroes_2escm",(void*)f_925},
{"f_947:jroes_2escm",(void*)f_947},
{"f_950:jroes_2escm",(void*)f_950},
{"f_961:jroes_2escm",(void*)f_961},
{"f_974:jroes_2escm",(void*)f_974},
{"f_959:jroes_2escm",(void*)f_959},
{"f_819:jroes_2escm",(void*)f_819},
{"f_882:jroes_2escm",(void*)f_882},
{"f_890:jroes_2escm",(void*)f_890},
{"f_919:jroes_2escm",(void*)f_919},
{"f_903:jroes_2escm",(void*)f_903},
{"f_888:jroes_2escm",(void*)f_888},
{"f_835:jroes_2escm",(void*)f_835},
{"f_839:jroes_2escm",(void*)f_839},
{"f_842:jroes_2escm",(void*)f_842},
{"f_845:jroes_2escm",(void*)f_845},
{"f_851:jroes_2escm",(void*)f_851},
{"f_871:jroes_2escm",(void*)f_871},
{"f_867:jroes_2escm",(void*)f_867},
{"f_825:jroes_2escm",(void*)f_825},
{"f_804:jroes_2escm",(void*)f_804},
{"f_808:jroes_2escm",(void*)f_808},
{"f_814:jroes_2escm",(void*)f_814},
{"f_817:jroes_2escm",(void*)f_817},
{"f_703:jroes_2escm",(void*)f_703},
{"f_783:jroes_2escm",(void*)f_783},
{"f_787:jroes_2escm",(void*)f_787},
{"f_731:jroes_2escm",(void*)f_731},
{"f_737:jroes_2escm",(void*)f_737},
{"f_693:jroes_2escm",(void*)f_693},
{"f_701:jroes_2escm",(void*)f_701},
{"f_593:jroes_2escm",(void*)f_593},
{"f_629:jroes_2escm",(void*)f_629},
{"f_675:jroes_2escm",(void*)f_675},
{"f_663:jroes_2escm",(void*)f_663},
{"f_640:jroes_2escm",(void*)f_640},
{"f_611:jroes_2escm",(void*)f_611},
{"f_587:jroes_2escm",(void*)f_587},
{"f_491:jroes_2escm",(void*)f_491},
{"f_585:jroes_2escm",(void*)f_585},
{"f_573:jroes_2escm",(void*)f_573},
{"f_510:jroes_2escm",(void*)f_510},
{"f_550:jroes_2escm",(void*)f_550},
{"f_560:jroes_2escm",(void*)f_560},
{"f_537:jroes_2escm",(void*)f_537},
{"f_544:jroes_2escm",(void*)f_544},
{"f_511:jroes_2escm",(void*)f_511},
{"f_527:jroes_2escm",(void*)f_527},
{"f_465:jroes_2escm",(void*)f_465},
{"f_475:jroes_2escm",(void*)f_475},
{"f_478:jroes_2escm",(void*)f_478},
{"f_455:jroes_2escm",(void*)f_455},
{"f_407:jroes_2escm",(void*)f_407},
{"f_442:jroes_2escm",(void*)f_442},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
