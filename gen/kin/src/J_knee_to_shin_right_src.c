/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_knee_to_shin_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t593;
  double t1604;
  double t1509;
  double t1525;
  double t1614;
  double t120;
  double t145;
  double t224;
  double t363;
  double t1183;
  double t1531;
  double t1629;
  double t1630;
  double t1648;
  double t1669;
  double t1670;
  double t1679;
  double t41;
  double t1817;
  double t2292;
  double t2456;
  double t2501;
  double t2532;
  double t2575;
  double t2694;
  double t2743;
  double t2777;
  double t2781;
  double t2851;
  double t2856;
  double t2872;
  double t2909;
  double t2910;
  double t2916;
  double t2920;
  double t2928;
  double t2935;
  double t2937;
  double t2973;
  double t2976;
  double t2977;
  double t316;
  double t388;
  double t406;
  double t1219;
  double t1319;
  double t1650;
  double t1651;
  double t1654;
  double t1668;
  double t1685;
  double t1686;
  double t1795;
  double t7012;
  double t7065;
  double t7076;
  double t7091;
  double t7108;
  double t7110;
  double t2662;
  double t2721;
  double t2729;
  double t7114;
  double t7116;
  double t7118;
  double t2833;
  double t2846;
  double t2847;
  double t2919;
  double t2925;
  double t2926;
  double t7123;
  double t7128;
  double t7130;
  double t7148;
  double t7151;
  double t7153;
  double t2946;
  double t2950;
  double t2955;
  double t7155;
  double t7156;
  double t7161;
  double t7174;
  double t7178;
  double t7179;
  double t7204;
  double t7206;
  double t7208;
  double t7213;
  double t7214;
  double t7218;
  double t7227;
  double t7230;
  double t7232;
  double t7236;
  double t7237;
  double t7239;
  double t7241;
  double t7245;
  double t7246;
  double t7266;
  double t7267;
  double t7268;
  double t7271;
  double t7272;
  double t7273;
  double t7281;
  double t7282;
  double t7284;
  double t7288;
  double t7289;
  double t7290;
  double t7292;
  double t7293;
  double t7294;
  double t7309;
  double t7310;
  double t7311;
  double t7314;
  double t7316;
  double t7317;
  double t7326;
  double t7327;
  double t7328;
  double t7330;
  double t7331;
  double t7332;
  double t7334;
  double t7335;
  double t7336;
  double t7353;
  double t7354;
  double t7356;
  double t7364;
  double t7365;
  double t7360;
  double t7361;
  double t7362;
  double t7369;
  double t7370;
  double t7371;
  double t7374;
  double t7376;
  double t7377;
  double t7392;
  double t7393;
  double t7394;
  double t7400;
  double t7401;
  double t7404;
  double t7397;
  double t7398;
  double t7409;
  double t7410;
  double t7412;
  double t7414;
  double t7415;
  double t7416;
  double t7444;
  double t7445;
  double t7448;
  double t7432;
  double t7433;
  double t7436;
  double t7456;
  double t7457;
  double t7458;
  double t7461;
  double t7462;
  double t7464;
  double t7480;
  double t7481;
  double t7486;
  double t7487;
  double t7488;
  double t7492;
  double t7493;
  double t7496;
  double t7511;
  double t7512;
  double t7513;
  double t7518;
  double t7519;
  double t7515;
  double t7516;
  double t7524;
  double t7525;
  double t7526;
  double t7528;
  double t7529;
  double t7530;
  double t7438;
  double t7450;
  double t7453;
  double t7454;
  double t7460;
  double t7465;
  double t7466;
  double t7467;
  double t7468;
  double t7469;
  double t7470;
  double t7472;
  double t7473;
  double t7476;
  double t7134;
  double t7144;
  double t7146;
  double t7544;
  double t7546;
  double t7548;
  double t7551;
  double t7552;
  double t7573;
  double t7574;
  double t7575;
  double t7577;
  double t7578;
  double t7579;
  double t7598;
  double t7599;
  double t7600;
  double t7602;
  double t7603;
  double t7604;
  double t7640;
  double t7643;
  double t7644;
  double t7184;
  double t7629;
  double t7630;
  double t7633;
  double t7635;
  double t7638;
  double t7658;
  double t7659;
  double t7660;
  double t7662;
  double t7663;
  double t7664;
  double t7666;
  double t7668;
  double t7669;
  double t7682;
  double t7683;
  double t7684;
  double t7686;
  double t7687;
  double t7688;
  double t7690;
  double t7691;
  double t7692;
  double t7182;
  double t7185;
  double t7653;
  double t7703;
  double t7704;
  double t7705;
  double t7707;
  double t7708;
  double t7715;
  double t7716;
  double t7717;
  double t7672;
  double t7676;
  double t7727;
  double t7728;
  double t7729;
  double t7695;
  double t7699;
  t593 = Sin(var1[3]);
  t1604 = Cos(var1[3]);
  t1509 = Cos(var1[5]);
  t1525 = Sin(var1[4]);
  t1614 = Sin(var1[5]);
  t120 = Cos(var1[14]);
  t145 = -1.*t120;
  t224 = 1. + t145;
  t363 = Sin(var1[14]);
  t1183 = Sin(var1[13]);
  t1531 = -1.*t1509*t593*t1525;
  t1629 = t1604*t1614;
  t1630 = t1531 + t1629;
  t1648 = Cos(var1[13]);
  t1669 = -1.*t1604*t1509;
  t1670 = -1.*t593*t1525*t1614;
  t1679 = t1669 + t1670;
  t41 = Cos(var1[4]);
  t1817 = t1183*t1630;
  t2292 = t1648*t1679;
  t2456 = t1817 + t2292;
  t2501 = Cos(var1[15]);
  t2532 = -1.*t2501;
  t2575 = 1. + t2532;
  t2694 = Sin(var1[15]);
  t2743 = t1648*t1630;
  t2777 = -1.*t1183*t1679;
  t2781 = t2743 + t2777;
  t2851 = -1.*t120*t41*t593;
  t2856 = t363*t2456;
  t2872 = t2851 + t2856;
  t2909 = Cos(var1[16]);
  t2910 = -1.*t2909;
  t2916 = 1. + t2910;
  t2920 = Sin(var1[16]);
  t2928 = t2694*t2781;
  t2935 = t2501*t2872;
  t2937 = t2928 + t2935;
  t2973 = t2501*t2781;
  t2976 = -1.*t2694*t2872;
  t2977 = t2973 + t2976;
  t316 = -0.049*t224;
  t388 = -0.135*t363;
  t406 = 0. + t316 + t388;
  t1219 = 0.135*t1183;
  t1319 = 0. + t1219;
  t1650 = -1.*t1648;
  t1651 = 1. + t1650;
  t1654 = -0.135*t1651;
  t1668 = 0. + t1654;
  t1685 = -0.135*t224;
  t1686 = 0.049*t363;
  t1795 = 0. + t1685 + t1686;
  t7012 = t1604*t1509*t1525;
  t7065 = t593*t1614;
  t7076 = t7012 + t7065;
  t7091 = -1.*t1509*t593;
  t7108 = t1604*t1525*t1614;
  t7110 = t7091 + t7108;
  t2662 = -0.09*t2575;
  t2721 = 0.049*t2694;
  t2729 = 0. + t2662 + t2721;
  t7114 = t1183*t7076;
  t7116 = t1648*t7110;
  t7118 = t7114 + t7116;
  t2833 = -0.049*t2575;
  t2846 = -0.09*t2694;
  t2847 = 0. + t2833 + t2846;
  t2919 = -0.049*t2916;
  t2925 = -0.21*t2920;
  t2926 = 0. + t2919 + t2925;
  t7123 = t1648*t7076;
  t7128 = -1.*t1183*t7110;
  t7130 = t7123 + t7128;
  t7148 = t120*t1604*t41;
  t7151 = t363*t7118;
  t7153 = t7148 + t7151;
  t2946 = -0.21*t2916;
  t2950 = 0.049*t2920;
  t2955 = 0. + t2946 + t2950;
  t7155 = t2694*t7130;
  t7156 = t2501*t7153;
  t7161 = t7155 + t7156;
  t7174 = t2501*t7130;
  t7178 = -1.*t2694*t7153;
  t7179 = t7174 + t7178;
  t7204 = t1604*t41*t1509*t1183;
  t7206 = t1648*t1604*t41*t1614;
  t7208 = t7204 + t7206;
  t7213 = t1648*t1604*t41*t1509;
  t7214 = -1.*t1604*t41*t1183*t1614;
  t7218 = t7213 + t7214;
  t7227 = -1.*t120*t1604*t1525;
  t7230 = t363*t7208;
  t7232 = t7227 + t7230;
  t7236 = t2694*t7218;
  t7237 = t2501*t7232;
  t7239 = t7236 + t7237;
  t7241 = t2501*t7218;
  t7245 = -1.*t2694*t7232;
  t7246 = t7241 + t7245;
  t7266 = t41*t1509*t1183*t593;
  t7267 = t1648*t41*t593*t1614;
  t7268 = t7266 + t7267;
  t7271 = t1648*t41*t1509*t593;
  t7272 = -1.*t41*t1183*t593*t1614;
  t7273 = t7271 + t7272;
  t7281 = -1.*t120*t593*t1525;
  t7282 = t363*t7268;
  t7284 = t7281 + t7282;
  t7288 = t2694*t7273;
  t7289 = t2501*t7284;
  t7290 = t7288 + t7289;
  t7292 = t2501*t7273;
  t7293 = -1.*t2694*t7284;
  t7294 = t7292 + t7293;
  t7309 = -1.*t1509*t1183*t1525;
  t7310 = -1.*t1648*t1525*t1614;
  t7311 = t7309 + t7310;
  t7314 = -1.*t1648*t1509*t1525;
  t7316 = t1183*t1525*t1614;
  t7317 = t7314 + t7316;
  t7326 = -1.*t120*t41;
  t7327 = t363*t7311;
  t7328 = t7326 + t7327;
  t7330 = t2694*t7317;
  t7331 = t2501*t7328;
  t7332 = t7330 + t7331;
  t7334 = t2501*t7317;
  t7335 = -1.*t2694*t7328;
  t7336 = t7334 + t7335;
  t7353 = t1509*t593;
  t7354 = -1.*t1604*t1525*t1614;
  t7356 = t7353 + t7354;
  t7364 = t1183*t7356;
  t7365 = t7123 + t7364;
  t7360 = -1.*t1183*t7076;
  t7361 = t1648*t7356;
  t7362 = t7360 + t7361;
  t7369 = t2694*t7362;
  t7370 = t2501*t363*t7365;
  t7371 = t7369 + t7370;
  t7374 = t2501*t7362;
  t7376 = -1.*t363*t2694*t7365;
  t7377 = t7374 + t7376;
  t7392 = t1509*t593*t1525;
  t7393 = -1.*t1604*t1614;
  t7394 = t7392 + t7393;
  t7400 = t1648*t7394;
  t7401 = t1183*t1679;
  t7404 = t7400 + t7401;
  t7397 = -1.*t1183*t7394;
  t7398 = t7397 + t2292;
  t7409 = t2694*t7398;
  t7410 = t2501*t363*t7404;
  t7412 = t7409 + t7410;
  t7414 = t2501*t7398;
  t7415 = -1.*t363*t2694*t7404;
  t7416 = t7414 + t7415;
  t7444 = t1648*t41*t1509;
  t7445 = -1.*t41*t1183*t1614;
  t7448 = t7444 + t7445;
  t7432 = -1.*t41*t1509*t1183;
  t7433 = -1.*t1648*t41*t1614;
  t7436 = t7432 + t7433;
  t7456 = t2694*t7436;
  t7457 = t2501*t363*t7448;
  t7458 = t7456 + t7457;
  t7461 = t2501*t7436;
  t7462 = -1.*t363*t2694*t7448;
  t7464 = t7461 + t7462;
  t7480 = -1.*t1648*t7110;
  t7481 = t7360 + t7480;
  t7486 = t2694*t7481;
  t7487 = t2501*t363*t7130;
  t7488 = t7486 + t7487;
  t7492 = t2501*t7481;
  t7493 = -1.*t363*t2694*t7130;
  t7496 = t7492 + t7493;
  t7511 = t1604*t1509;
  t7512 = t593*t1525*t1614;
  t7513 = t7511 + t7512;
  t7518 = -1.*t1183*t7513;
  t7519 = t7400 + t7518;
  t7515 = -1.*t1648*t7513;
  t7516 = t7397 + t7515;
  t7524 = t2694*t7516;
  t7525 = t2501*t363*t7519;
  t7526 = t7524 + t7525;
  t7528 = t2501*t7516;
  t7529 = -1.*t363*t2694*t7519;
  t7530 = t7528 + t7529;
  t7438 = t2729*t7436;
  t7450 = -0.1305*t120*t7448;
  t7453 = t1795*t7448;
  t7454 = t363*t2847*t7448;
  t7460 = t2926*t7458;
  t7465 = t2955*t7464;
  t7466 = -1.*t2920*t7458;
  t7467 = t2909*t7464;
  t7468 = t7466 + t7467;
  t7469 = -0.2707*t7468;
  t7470 = t2909*t7458;
  t7472 = t2920*t7464;
  t7473 = t7470 + t7472;
  t7476 = -0.0016*t7473;
  t7134 = -1.*t1604*t41*t363;
  t7144 = t120*t7118;
  t7146 = t7134 + t7144;
  t7544 = -0.135*t120;
  t7546 = -0.049*t363;
  t7548 = t7544 + t7546;
  t7551 = 0.049*t120;
  t7552 = t7551 + t388;
  t7573 = t1183*t7394;
  t7574 = t1648*t7513;
  t7575 = t7573 + t7574;
  t7577 = -1.*t41*t363*t593;
  t7578 = t120*t7575;
  t7579 = t7577 + t7578;
  t7598 = t41*t1509*t1183;
  t7599 = t1648*t41*t1614;
  t7600 = t7598 + t7599;
  t7602 = t363*t1525;
  t7603 = t120*t7600;
  t7604 = t7602 + t7603;
  t7640 = -1.*t2694*t7130;
  t7643 = -1.*t2501*t7153;
  t7644 = t7640 + t7643;
  t7184 = t2909*t7179;
  t7629 = 0.049*t2501;
  t7630 = t7629 + t2846;
  t7633 = -0.09*t2501;
  t7635 = -0.049*t2694;
  t7638 = t7633 + t7635;
  t7658 = t120*t41*t593;
  t7659 = t363*t7575;
  t7660 = t7658 + t7659;
  t7662 = -1.*t2694*t7519;
  t7663 = -1.*t2501*t7660;
  t7664 = t7662 + t7663;
  t7666 = t2501*t7519;
  t7668 = -1.*t2694*t7660;
  t7669 = t7666 + t7668;
  t7682 = -1.*t120*t1525;
  t7683 = t363*t7600;
  t7684 = t7682 + t7683;
  t7686 = -1.*t2694*t7448;
  t7687 = -1.*t2501*t7684;
  t7688 = t7686 + t7687;
  t7690 = t2501*t7448;
  t7691 = -1.*t2694*t7684;
  t7692 = t7690 + t7691;
  t7182 = -1.*t2920*t7161;
  t7185 = t7182 + t7184;
  t7653 = -1.*t2920*t7179;
  t7703 = -0.21*t2909;
  t7704 = -0.049*t2920;
  t7705 = t7703 + t7704;
  t7707 = 0.049*t2909;
  t7708 = t7707 + t2925;
  t7715 = t2694*t7519;
  t7716 = t2501*t7660;
  t7717 = t7715 + t7716;
  t7672 = t2909*t7669;
  t7676 = -1.*t2920*t7669;
  t7727 = t2694*t7448;
  t7728 = t2501*t7684;
  t7729 = t7727 + t7728;
  t7695 = t2909*t7692;
  t7699 = -1.*t2920*t7692;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1319*t1630 + t1668*t1679 + t1795*t2456 + t2729*t2781 + t2847*t2872 + t2926*t2937 + t2955*t2977 - 0.2707*(-1.*t2920*t2937 + t2909*t2977) - 0.0016*(t2909*t2937 + t2920*t2977) - 1.*t406*t41*t593 - 0.1305*(t120*t2456 + t363*t41*t593);
  p_output1[10]=t1604*t406*t41 + t1319*t7076 + t1668*t7110 + t1795*t7118 + t2729*t7130 - 0.1305*t7146 + t2847*t7153 + t2926*t7161 + t2955*t7179 - 0.0016*(t2909*t7161 + t2920*t7179) - 0.2707*t7185;
  p_output1[11]=0;
  p_output1[12]=-1.*t1525*t1604*t406 + t1319*t1509*t1604*t41 + t1604*t1614*t1668*t41 + t1795*t7208 - 0.1305*(t1525*t1604*t363 + t120*t7208) + t2729*t7218 + t2847*t7232 + t2926*t7239 + t2955*t7246 - 0.2707*(-1.*t2920*t7239 + t2909*t7246) - 0.0016*(t2909*t7239 + t2920*t7246);
  p_output1[13]=-1.*t1525*t406*t593 + t1319*t1509*t41*t593 + t1614*t1668*t41*t593 + t1795*t7268 - 0.1305*(t1525*t363*t593 + t120*t7268) + t2729*t7273 + t2847*t7284 + t2926*t7290 + t2955*t7294 - 0.2707*(-1.*t2920*t7290 + t2909*t7294) - 0.0016*(t2909*t7290 + t2920*t7294);
  p_output1[14]=-1.*t1319*t1509*t1525 - 1.*t1525*t1614*t1668 - 1.*t406*t41 + t1795*t7311 - 0.1305*(t363*t41 + t120*t7311) + t2729*t7317 + t2847*t7328 + t2926*t7332 + t2955*t7336 - 0.2707*(-1.*t2920*t7332 + t2909*t7336) - 0.0016*(t2909*t7332 + t2920*t7336);
  p_output1[15]=t1668*t7076 + t1319*t7356 + t2729*t7362 - 0.1305*t120*t7365 + t1795*t7365 + t2847*t363*t7365 + t2926*t7371 + t2955*t7377 - 0.2707*(-1.*t2920*t7371 + t2909*t7377) - 0.0016*(t2909*t7371 + t2920*t7377);
  p_output1[16]=t1319*t1679 + t1668*t7394 + t2729*t7398 - 0.1305*t120*t7404 + t1795*t7404 + t2847*t363*t7404 + t2926*t7412 + t2955*t7416 - 0.2707*(-1.*t2920*t7412 + t2909*t7416) - 0.0016*(t2909*t7412 + t2920*t7416);
  p_output1[17]=-1.*t1319*t1614*t41 + t1509*t1668*t41 + t7438 + t7450 + t7453 + t7454 + t7460 + t7465 + t7469 + t7476;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t1648*t7076 - 0.135*t1183*t7110 - 0.1305*t120*t7130 + t1795*t7130 + t2847*t363*t7130 + t2729*t7481 + t2926*t7488 + t2955*t7496 - 0.2707*(-1.*t2920*t7488 + t2909*t7496) - 0.0016*(t2909*t7488 + t2920*t7496);
  p_output1[40]=0.135*t1648*t7394 - 0.135*t1183*t7513 + t2729*t7516 - 0.1305*t120*t7519 + t1795*t7519 + t2847*t363*t7519 + t2926*t7526 + t2955*t7530 - 0.2707*(-1.*t2920*t7526 + t2909*t7530) - 0.0016*(t2909*t7526 + t2920*t7530);
  p_output1[41]=-0.135*t1183*t1614*t41 + 0.135*t1509*t1648*t41 + t7438 + t7450 + t7453 + t7454 + t7460 + t7465 + t7469 + t7476;
  p_output1[42]=-0.1305*(-1.*t120*t1604*t41 - 1.*t363*t7118) + t2847*t7146 + t2501*t2926*t7146 - 1.*t2694*t2955*t7146 - 0.2707*(-1.*t2694*t2909*t7146 - 1.*t2501*t2920*t7146) - 0.0016*(t2501*t2909*t7146 - 1.*t2694*t2920*t7146) + t1604*t41*t7548 + t7118*t7552;
  p_output1[43]=t41*t593*t7548 + t7552*t7575 - 0.1305*(t2851 - 1.*t363*t7575) + t2847*t7579 + t2501*t2926*t7579 - 1.*t2694*t2955*t7579 - 0.2707*(-1.*t2694*t2909*t7579 - 1.*t2501*t2920*t7579) - 0.0016*(t2501*t2909*t7579 - 1.*t2694*t2920*t7579);
  p_output1[44]=-1.*t1525*t7548 + t7552*t7600 - 0.1305*(t120*t1525 - 1.*t363*t7600) + t2847*t7604 + t2501*t2926*t7604 - 1.*t2694*t2955*t7604 - 0.2707*(-1.*t2694*t2909*t7604 - 1.*t2501*t2920*t7604) - 0.0016*(t2501*t2909*t7604 - 1.*t2694*t2920*t7604);
  p_output1[45]=t2926*t7179 + t7130*t7630 + t7153*t7638 + t2955*t7644 - 0.0016*(t7184 + t2920*t7644) - 0.2707*(t2909*t7644 + t7653);
  p_output1[46]=t7519*t7630 + t7638*t7660 + t2955*t7664 + t2926*t7669 - 0.0016*(t2920*t7664 + t7672) - 0.2707*(t2909*t7664 + t7676);
  p_output1[47]=t7448*t7630 + t7638*t7684 + t2955*t7688 + t2926*t7692 - 0.0016*(t2920*t7688 + t7695) - 0.2707*(t2909*t7688 + t7699);
  p_output1[48]=-0.0016*t7185 - 0.2707*(-1.*t2909*t7161 + t7653) + t7161*t7705 + t7179*t7708;
  p_output1[49]=t7669*t7708 + t7705*t7717 - 0.2707*(t7676 - 1.*t2909*t7717) - 0.0016*(t7672 - 1.*t2920*t7717);
  p_output1[50]=t7692*t7708 + t7705*t7729 - 0.2707*(t7699 - 1.*t2909*t7729) - 0.0016*(t7695 - 1.*t2920*t7729);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}