/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:05 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t869;
  double t926;
  double t1064;
  double t862;
  double t1152;
  double t109;
  double t920;
  double t1156;
  double t1173;
  double t1335;
  double t1469;
  double t1640;
  double t1642;
  double t2392;
  double t2461;
  double t2544;
  double t2786;
  double t1988;
  double t2053;
  double t2076;
  double t3011;
  double t3789;
  double t4054;
  double t4074;
  double t4153;
  double t3487;
  double t3570;
  double t3587;
  double t4209;
  double t4241;
  double t4247;
  double t4257;
  double t4258;
  double t4261;
  double t4271;
  double t4277;
  double t4281;
  double t4283;
  double t4298;
  double t4305;
  double t4310;
  double t4315;
  double t4316;
  double t4317;
  double t4324;
  double t4329;
  double t4331;
  double t4336;
  double t4348;
  double t4349;
  double t4350;
  double t4353;
  double t4357;
  double t4358;
  double t4378;
  double t4593;
  double t4891;
  double t4900;
  double t5189;
  double t5200;
  double t5206;
  double t5254;
  double t5258;
  double t5316;
  double t5389;
  double t5532;
  double t5541;
  double t5544;
  double t5604;
  double t5607;
  double t5609;
  double t213;
  double t494;
  double t556;
  double t797;
  double t1704;
  double t1772;
  double t5638;
  double t5640;
  double t5642;
  double t5645;
  double t5646;
  double t5647;
  double t2712;
  double t2857;
  double t2867;
  double t3097;
  double t3105;
  double t3189;
  double t5653;
  double t5655;
  double t5665;
  double t4108;
  double t4157;
  double t4191;
  double t4248;
  double t4251;
  double t4253;
  double t4267;
  double t4272;
  double t4275;
  double t5679;
  double t5680;
  double t5683;
  double t5692;
  double t5693;
  double t5695;
  double t4290;
  double t4291;
  double t4297;
  double t4319;
  double t4325;
  double t4328;
  double t5701;
  double t5703;
  double t5704;
  double t5706;
  double t5708;
  double t5709;
  double t4341;
  double t4342;
  double t4344;
  double t4364;
  double t4381;
  double t4498;
  double t5715;
  double t5724;
  double t5728;
  double t5734;
  double t5740;
  double t5743;
  double t5068;
  double t5156;
  double t5184;
  double t5323;
  double t5405;
  double t5417;
  double t5745;
  double t5747;
  double t5748;
  double t5750;
  double t5751;
  double t5752;
  double t5594;
  double t5599;
  double t5603;
  double t5756;
  double t5757;
  double t5761;
  double t6048;
  double t6262;
  double t6346;
  double t8741;
  double t8742;
  double t8754;
  double t8791;
  double t8797;
  double t8816;
  double t8828;
  double t8834;
  double t8836;
  double t8852;
  double t8853;
  double t8860;
  double t8877;
  double t8887;
  double t8889;
  double t8902;
  double t8909;
  double t8915;
  double t8932;
  double t8935;
  double t8940;
  double t8953;
  double t8954;
  double t8955;
  double t8962;
  double t8964;
  double t8966;
  double t8971;
  double t8972;
  double t8978;
  double t8992;
  double t9026;
  double t9032;
  double t9116;
  double t9118;
  double t9123;
  double t9145;
  double t9152;
  double t9156;
  double t9166;
  double t9175;
  double t9185;
  double t9192;
  double t9205;
  double t9206;
  double t9212;
  double t9213;
  double t9214;
  double t9219;
  double t9223;
  double t9224;
  double t9235;
  double t9236;
  double t9237;
  double t9240;
  double t9243;
  double t9244;
  double t9250;
  double t9256;
  double t9265;
  double t9270;
  double t9271;
  double t9274;
  double t9278;
  double t9279;
  double t9285;
  double t9327;
  double t9332;
  double t9337;
  double t9354;
  double t9356;
  double t9357;
  double t9360;
  double t9362;
  double t9363;
  double t9368;
  double t9370;
  double t9372;
  double t9374;
  double t9375;
  double t9376;
  double t9381;
  double t9390;
  double t9392;
  double t9400;
  double t9401;
  double t9403;
  double t9407;
  double t9412;
  double t9415;
  double t9418;
  double t9420;
  double t9422;
  double t9424;
  double t9426;
  double t9428;
  double t9433;
  double t9434;
  double t9435;
  double t9465;
  double t9468;
  double t9469;
  double t9473;
  double t9474;
  double t9479;
  double t9481;
  double t9485;
  double t9489;
  double t9492;
  double t9493;
  double t9497;
  double t9500;
  double t9501;
  double t9505;
  double t9506;
  double t9508;
  double t9515;
  double t9518;
  double t9520;
  double t9526;
  double t9527;
  double t9528;
  double t9531;
  double t9532;
  double t9533;
  double t9535;
  double t9536;
  double t9538;
  double t9542;
  double t9544;
  double t9547;
  double t9567;
  double t9569;
  double t9572;
  double t9576;
  double t9577;
  double t9579;
  double t9583;
  double t9584;
  double t9588;
  double t9589;
  double t9592;
  double t9595;
  double t9596;
  double t9597;
  double t9600;
  double t9602;
  double t9603;
  double t9609;
  double t9612;
  double t9615;
  double t9617;
  double t9619;
  double t9620;
  double t9622;
  double t9623;
  double t9624;
  double t9626;
  double t9627;
  double t9629;
  double t9633;
  double t9635;
  double t9637;
  double t9654;
  double t9655;
  double t9656;
  double t9663;
  double t9665;
  double t9666;
  double t9670;
  double t9671;
  double t9672;
  double t9675;
  double t9676;
  double t9677;
  double t9679;
  double t9680;
  double t9681;
  double t9683;
  double t9684;
  double t9685;
  double t9687;
  double t9688;
  double t9689;
  double t9692;
  double t9693;
  double t9694;
  double t9696;
  double t9697;
  double t9698;
  double t9701;
  double t9702;
  double t9703;
  double t9725;
  double t9727;
  double t9730;
  double t9733;
  double t9734;
  double t9737;
  double t9738;
  double t9740;
  double t9742;
  double t9743;
  double t9744;
  double t9746;
  double t9747;
  double t9748;
  double t9750;
  double t9751;
  double t9752;
  double t9754;
  double t9755;
  double t9756;
  double t9759;
  double t9760;
  double t9761;
  double t9763;
  double t9764;
  double t9765;
  double t9778;
  double t9779;
  double t9780;
  double t9782;
  double t9783;
  double t9787;
  double t9788;
  double t9790;
  double t9791;
  double t9792;
  double t9794;
  double t9795;
  double t9796;
  double t9798;
  double t9799;
  double t9800;
  double t9802;
  double t9803;
  double t9804;
  double t9806;
  double t9807;
  double t9808;
  double t9810;
  double t9811;
  double t9812;
  double t9814;
  double t9815;
  double t9816;
  double t9818;
  double t9819;
  double t9820;
  double t9657;
  double t9659;
  double t9660;
  double t9668;
  double t9674;
  double t9678;
  double t9682;
  double t9686;
  double t9690;
  double t9695;
  double t9700;
  double t9704;
  double t9705;
  double t9707;
  double t9709;
  double t9710;
  double t9713;
  double t9714;
  double t9716;
  double t9717;
  double t5670;
  double t5674;
  double t5675;
  double t9848;
  double t9849;
  double t9850;
  double t9852;
  double t9853;
  double t9854;
  double t9856;
  double t9857;
  double t9858;
  double t9860;
  double t9861;
  double t9862;
  double t9864;
  double t9865;
  double t9866;
  double t9868;
  double t9869;
  double t9870;
  double t9834;
  double t9835;
  double t9836;
  double t9838;
  double t9839;
  double t9882;
  double t9883;
  double t9884;
  double t9886;
  double t9887;
  double t9888;
  double t9895;
  double t9896;
  double t9897;
  double t9899;
  double t9900;
  double t9901;
  double t9903;
  double t9904;
  double t9905;
  double t9907;
  double t9908;
  double t9909;
  double t9911;
  double t9912;
  double t9913;
  double t9915;
  double t9916;
  double t9917;
  double t9929;
  double t9930;
  double t9931;
  double t9933;
  double t9934;
  double t9935;
  double t9943;
  double t9944;
  double t9945;
  double t9947;
  double t9948;
  double t9949;
  double t9951;
  double t9952;
  double t9953;
  double t9955;
  double t9956;
  double t9957;
  double t9959;
  double t9960;
  double t9961;
  double t9963;
  double t9964;
  double t9965;
  double t9983;
  double t9984;
  double t9985;
  double t9988;
  double t9989;
  double t9991;
  double t9992;
  double t9993;
  double t9995;
  double t9996;
  double t9997;
  double t9999;
  double t10000;
  double t10001;
  double t10003;
  double t10004;
  double t10005;
  double t10007;
  double t10008;
  double t10009;
  double t9976;
  double t9977;
  double t9979;
  double t9980;
  double t9981;
  double t10021;
  double t10022;
  double t10023;
  double t10025;
  double t10026;
  double t10027;
  double t10029;
  double t10030;
  double t10031;
  double t10033;
  double t10034;
  double t10035;
  double t10037;
  double t10038;
  double t10039;
  double t10041;
  double t10042;
  double t10043;
  double t10045;
  double t10046;
  double t10047;
  double t10049;
  double t10050;
  double t10051;
  double t10053;
  double t10054;
  double t10055;
  double t10067;
  double t10068;
  double t10069;
  double t10071;
  double t10072;
  double t10073;
  double t10075;
  double t10076;
  double t10077;
  double t10079;
  double t10080;
  double t10081;
  double t10083;
  double t10084;
  double t10085;
  double t10087;
  double t10088;
  double t10089;
  double t10091;
  double t10092;
  double t10093;
  double t10095;
  double t10096;
  double t10097;
  double t10099;
  double t10100;
  double t10101;
  double t10120;
  double t10121;
  double t10123;
  double t10124;
  double t10125;
  double t10127;
  double t10128;
  double t10130;
  double t10131;
  double t10132;
  double t10134;
  double t10135;
  double t10136;
  double t10112;
  double t10113;
  double t10114;
  double t10116;
  double t10117;
  double t10147;
  double t10148;
  double t10149;
  double t10152;
  double t10153;
  double t10155;
  double t10156;
  double t10158;
  double t10159;
  double t10160;
  double t10162;
  double t10163;
  double t10164;
  double t10166;
  double t10167;
  double t10168;
  double t10170;
  double t10171;
  double t10172;
  double t10183;
  double t10184;
  double t10185;
  double t10188;
  double t10189;
  double t10191;
  double t10192;
  double t10194;
  double t10195;
  double t10196;
  double t10198;
  double t10199;
  double t10200;
  double t10202;
  double t10203;
  double t10204;
  double t10206;
  double t10207;
  double t10208;
  double t10226;
  double t10227;
  double t10230;
  double t10231;
  double t10233;
  double t10234;
  double t10235;
  double t10219;
  double t10220;
  double t10222;
  double t10223;
  double t10224;
  double t10247;
  double t10248;
  double t10249;
  double t10251;
  double t10252;
  double t10254;
  double t10255;
  double t10257;
  double t10258;
  double t10259;
  double t10261;
  double t10262;
  double t10263;
  double t10275;
  double t10276;
  double t10277;
  double t10279;
  double t10280;
  double t10282;
  double t10283;
  double t10285;
  double t10286;
  double t10287;
  double t10289;
  double t10290;
  double t10291;
  double t10310;
  double t10311;
  double t8528;
  double t10302;
  double t10303;
  double t10304;
  double t10306;
  double t10307;
  double t10321;
  double t10322;
  double t10323;
  double t10326;
  double t10327;
  double t10329;
  double t10330;
  double t10341;
  double t10342;
  double t10343;
  double t10346;
  double t10347;
  double t10349;
  double t10350;
  double t10313;
  double t8707;
  double t8710;
  double t10361;
  double t10362;
  double t10364;
  double t10365;
  double t10366;
  double t10332;
  double t10374;
  double t10375;
  double t10376;
  double t10336;
  double t10352;
  double t10386;
  double t10387;
  double t10388;
  double t10356;
  t869 = Cos(var1[5]);
  t926 = Sin(var1[3]);
  t1064 = Sin(var1[4]);
  t862 = Cos(var1[3]);
  t1152 = Sin(var1[5]);
  t109 = Cos(var1[6]);
  t920 = -1.*t862*t869;
  t1156 = -1.*t926*t1064*t1152;
  t1173 = t920 + t1156;
  t1335 = -1.*t869*t926*t1064;
  t1469 = t862*t1152;
  t1640 = t1335 + t1469;
  t1642 = Sin(var1[6]);
  t2392 = Cos(var1[7]);
  t2461 = -1.*t2392;
  t2544 = 1. + t2461;
  t2786 = Sin(var1[7]);
  t1988 = t109*t1173;
  t2053 = t1640*t1642;
  t2076 = t1988 + t2053;
  t3011 = Cos(var1[4]);
  t3789 = Cos(var1[8]);
  t4054 = -1.*t3789;
  t4074 = 1. + t4054;
  t4153 = Sin(var1[8]);
  t3487 = -1.*t3011*t2392*t926;
  t3570 = t2076*t2786;
  t3587 = t3487 + t3570;
  t4209 = t109*t1640;
  t4241 = -1.*t1173*t1642;
  t4247 = t4209 + t4241;
  t4257 = Cos(var1[9]);
  t4258 = -1.*t4257;
  t4261 = 1. + t4258;
  t4271 = Sin(var1[9]);
  t4277 = t3789*t3587;
  t4281 = t4247*t4153;
  t4283 = t4277 + t4281;
  t4298 = t3789*t4247;
  t4305 = -1.*t3587*t4153;
  t4310 = t4298 + t4305;
  t4315 = Cos(var1[10]);
  t4316 = -1.*t4315;
  t4317 = 1. + t4316;
  t4324 = Sin(var1[10]);
  t4329 = -1.*t4271*t4283;
  t4331 = t4257*t4310;
  t4336 = t4329 + t4331;
  t4348 = t4257*t4283;
  t4349 = t4271*t4310;
  t4350 = t4348 + t4349;
  t4353 = Cos(var1[11]);
  t4357 = -1.*t4353;
  t4358 = 1. + t4357;
  t4378 = Sin(var1[11]);
  t4593 = t4324*t4336;
  t4891 = t4315*t4350;
  t4900 = t4593 + t4891;
  t5189 = t4315*t4336;
  t5200 = -1.*t4324*t4350;
  t5206 = t5189 + t5200;
  t5254 = Cos(var1[12]);
  t5258 = -1.*t5254;
  t5316 = 1. + t5258;
  t5389 = Sin(var1[12]);
  t5532 = -1.*t4378*t4900;
  t5541 = t4353*t5206;
  t5544 = t5532 + t5541;
  t5604 = t4353*t4900;
  t5607 = t4378*t5206;
  t5609 = t5604 + t5607;
  t213 = -1.*t109;
  t494 = 1. + t213;
  t556 = 0.135*t494;
  t797 = 0. + t556;
  t1704 = -0.135*t1642;
  t1772 = 0. + t1704;
  t5638 = -1.*t869*t926;
  t5640 = t862*t1064*t1152;
  t5642 = t5638 + t5640;
  t5645 = t862*t869*t1064;
  t5646 = t926*t1152;
  t5647 = t5645 + t5646;
  t2712 = 0.135*t2544;
  t2857 = 0.049*t2786;
  t2867 = 0. + t2712 + t2857;
  t3097 = -0.049*t2544;
  t3105 = 0.135*t2786;
  t3189 = 0. + t3097 + t3105;
  t5653 = t109*t5642;
  t5655 = t5647*t1642;
  t5665 = t5653 + t5655;
  t4108 = -0.049*t4074;
  t4157 = -0.09*t4153;
  t4191 = 0. + t4108 + t4157;
  t4248 = -0.09*t4074;
  t4251 = 0.049*t4153;
  t4253 = 0. + t4248 + t4251;
  t4267 = -0.049*t4261;
  t4272 = -0.21*t4271;
  t4275 = 0. + t4267 + t4272;
  t5679 = t862*t3011*t2392;
  t5680 = t5665*t2786;
  t5683 = t5679 + t5680;
  t5692 = t109*t5647;
  t5693 = -1.*t5642*t1642;
  t5695 = t5692 + t5693;
  t4290 = -0.21*t4261;
  t4291 = 0.049*t4271;
  t4297 = 0. + t4290 + t4291;
  t4319 = -0.2707*t4317;
  t4325 = 0.0016*t4324;
  t4328 = 0. + t4319 + t4325;
  t5701 = t3789*t5683;
  t5703 = t5695*t4153;
  t5704 = t5701 + t5703;
  t5706 = t3789*t5695;
  t5708 = -1.*t5683*t4153;
  t5709 = t5706 + t5708;
  t4341 = -0.0016*t4317;
  t4342 = -0.2707*t4324;
  t4344 = 0. + t4341 + t4342;
  t4364 = 0.0184*t4358;
  t4381 = -0.7055*t4378;
  t4498 = 0. + t4364 + t4381;
  t5715 = -1.*t4271*t5704;
  t5724 = t4257*t5709;
  t5728 = t5715 + t5724;
  t5734 = t4257*t5704;
  t5740 = t4271*t5709;
  t5743 = t5734 + t5740;
  t5068 = -0.7055*t4358;
  t5156 = -0.0184*t4378;
  t5184 = 0. + t5068 + t5156;
  t5323 = -1.1135*t5316;
  t5405 = 0.0216*t5389;
  t5417 = 0. + t5323 + t5405;
  t5745 = t4324*t5728;
  t5747 = t4315*t5743;
  t5748 = t5745 + t5747;
  t5750 = t4315*t5728;
  t5751 = -1.*t4324*t5743;
  t5752 = t5750 + t5751;
  t5594 = -0.0216*t5316;
  t5599 = -1.1135*t5389;
  t5603 = 0. + t5594 + t5599;
  t5756 = -1.*t4378*t5748;
  t5757 = t4353*t5752;
  t5761 = t5756 + t5757;
  t6048 = t4353*t5748;
  t6262 = t4378*t5752;
  t6346 = t6048 + t6262;
  t8741 = t862*t3011*t109*t1152;
  t8742 = t862*t3011*t869*t1642;
  t8754 = t8741 + t8742;
  t8791 = -1.*t862*t2392*t1064;
  t8797 = t8754*t2786;
  t8816 = t8791 + t8797;
  t8828 = t862*t3011*t869*t109;
  t8834 = -1.*t862*t3011*t1152*t1642;
  t8836 = t8828 + t8834;
  t8852 = t3789*t8816;
  t8853 = t8836*t4153;
  t8860 = t8852 + t8853;
  t8877 = t3789*t8836;
  t8887 = -1.*t8816*t4153;
  t8889 = t8877 + t8887;
  t8902 = -1.*t4271*t8860;
  t8909 = t4257*t8889;
  t8915 = t8902 + t8909;
  t8932 = t4257*t8860;
  t8935 = t4271*t8889;
  t8940 = t8932 + t8935;
  t8953 = t4324*t8915;
  t8954 = t4315*t8940;
  t8955 = t8953 + t8954;
  t8962 = t4315*t8915;
  t8964 = -1.*t4324*t8940;
  t8966 = t8962 + t8964;
  t8971 = -1.*t4378*t8955;
  t8972 = t4353*t8966;
  t8978 = t8971 + t8972;
  t8992 = t4353*t8955;
  t9026 = t4378*t8966;
  t9032 = t8992 + t9026;
  t9116 = t3011*t109*t926*t1152;
  t9118 = t3011*t869*t926*t1642;
  t9123 = t9116 + t9118;
  t9145 = -1.*t2392*t926*t1064;
  t9152 = t9123*t2786;
  t9156 = t9145 + t9152;
  t9166 = t3011*t869*t109*t926;
  t9175 = -1.*t3011*t926*t1152*t1642;
  t9185 = t9166 + t9175;
  t9192 = t3789*t9156;
  t9205 = t9185*t4153;
  t9206 = t9192 + t9205;
  t9212 = t3789*t9185;
  t9213 = -1.*t9156*t4153;
  t9214 = t9212 + t9213;
  t9219 = -1.*t4271*t9206;
  t9223 = t4257*t9214;
  t9224 = t9219 + t9223;
  t9235 = t4257*t9206;
  t9236 = t4271*t9214;
  t9237 = t9235 + t9236;
  t9240 = t4324*t9224;
  t9243 = t4315*t9237;
  t9244 = t9240 + t9243;
  t9250 = t4315*t9224;
  t9256 = -1.*t4324*t9237;
  t9265 = t9250 + t9256;
  t9270 = -1.*t4378*t9244;
  t9271 = t4353*t9265;
  t9274 = t9270 + t9271;
  t9278 = t4353*t9244;
  t9279 = t4378*t9265;
  t9285 = t9278 + t9279;
  t9327 = -1.*t109*t1064*t1152;
  t9332 = -1.*t869*t1064*t1642;
  t9337 = t9327 + t9332;
  t9354 = -1.*t3011*t2392;
  t9356 = t9337*t2786;
  t9357 = t9354 + t9356;
  t9360 = -1.*t869*t109*t1064;
  t9362 = t1064*t1152*t1642;
  t9363 = t9360 + t9362;
  t9368 = t3789*t9357;
  t9370 = t9363*t4153;
  t9372 = t9368 + t9370;
  t9374 = t3789*t9363;
  t9375 = -1.*t9357*t4153;
  t9376 = t9374 + t9375;
  t9381 = -1.*t4271*t9372;
  t9390 = t4257*t9376;
  t9392 = t9381 + t9390;
  t9400 = t4257*t9372;
  t9401 = t4271*t9376;
  t9403 = t9400 + t9401;
  t9407 = t4324*t9392;
  t9412 = t4315*t9403;
  t9415 = t9407 + t9412;
  t9418 = t4315*t9392;
  t9420 = -1.*t4324*t9403;
  t9422 = t9418 + t9420;
  t9424 = -1.*t4378*t9415;
  t9426 = t4353*t9422;
  t9428 = t9424 + t9426;
  t9433 = t4353*t9415;
  t9434 = t4378*t9422;
  t9435 = t9433 + t9434;
  t9465 = t869*t926;
  t9468 = -1.*t862*t1064*t1152;
  t9469 = t9465 + t9468;
  t9473 = t9469*t1642;
  t9474 = t5692 + t9473;
  t9479 = t109*t9469;
  t9481 = -1.*t5647*t1642;
  t9485 = t9479 + t9481;
  t9489 = t3789*t9474*t2786;
  t9492 = t9485*t4153;
  t9493 = t9489 + t9492;
  t9497 = t3789*t9485;
  t9500 = -1.*t9474*t2786*t4153;
  t9501 = t9497 + t9500;
  t9505 = -1.*t4271*t9493;
  t9506 = t4257*t9501;
  t9508 = t9505 + t9506;
  t9515 = t4257*t9493;
  t9518 = t4271*t9501;
  t9520 = t9515 + t9518;
  t9526 = t4324*t9508;
  t9527 = t4315*t9520;
  t9528 = t9526 + t9527;
  t9531 = t4315*t9508;
  t9532 = -1.*t4324*t9520;
  t9533 = t9531 + t9532;
  t9535 = -1.*t4378*t9528;
  t9536 = t4353*t9533;
  t9538 = t9535 + t9536;
  t9542 = t4353*t9528;
  t9544 = t4378*t9533;
  t9547 = t9542 + t9544;
  t9567 = t869*t926*t1064;
  t9569 = -1.*t862*t1152;
  t9572 = t9567 + t9569;
  t9576 = t109*t9572;
  t9577 = t1173*t1642;
  t9579 = t9576 + t9577;
  t9583 = -1.*t9572*t1642;
  t9584 = t1988 + t9583;
  t9588 = t3789*t9579*t2786;
  t9589 = t9584*t4153;
  t9592 = t9588 + t9589;
  t9595 = t3789*t9584;
  t9596 = -1.*t9579*t2786*t4153;
  t9597 = t9595 + t9596;
  t9600 = -1.*t4271*t9592;
  t9602 = t4257*t9597;
  t9603 = t9600 + t9602;
  t9609 = t4257*t9592;
  t9612 = t4271*t9597;
  t9615 = t9609 + t9612;
  t9617 = t4324*t9603;
  t9619 = t4315*t9615;
  t9620 = t9617 + t9619;
  t9622 = t4315*t9603;
  t9623 = -1.*t4324*t9615;
  t9624 = t9622 + t9623;
  t9626 = -1.*t4378*t9620;
  t9627 = t4353*t9624;
  t9629 = t9626 + t9627;
  t9633 = t4353*t9620;
  t9635 = t4378*t9624;
  t9637 = t9633 + t9635;
  t9654 = t3011*t869*t109;
  t9655 = -1.*t3011*t1152*t1642;
  t9656 = t9654 + t9655;
  t9663 = -1.*t3011*t109*t1152;
  t9665 = -1.*t3011*t869*t1642;
  t9666 = t9663 + t9665;
  t9670 = t3789*t9656*t2786;
  t9671 = t9666*t4153;
  t9672 = t9670 + t9671;
  t9675 = t3789*t9666;
  t9676 = -1.*t9656*t2786*t4153;
  t9677 = t9675 + t9676;
  t9679 = -1.*t4271*t9672;
  t9680 = t4257*t9677;
  t9681 = t9679 + t9680;
  t9683 = t4257*t9672;
  t9684 = t4271*t9677;
  t9685 = t9683 + t9684;
  t9687 = t4324*t9681;
  t9688 = t4315*t9685;
  t9689 = t9687 + t9688;
  t9692 = t4315*t9681;
  t9693 = -1.*t4324*t9685;
  t9694 = t9692 + t9693;
  t9696 = -1.*t4378*t9689;
  t9697 = t4353*t9694;
  t9698 = t9696 + t9697;
  t9701 = t4353*t9689;
  t9702 = t4378*t9694;
  t9703 = t9701 + t9702;
  t9725 = -1.*t109*t5642;
  t9727 = t9725 + t9481;
  t9730 = t3789*t5695*t2786;
  t9733 = t9727*t4153;
  t9734 = t9730 + t9733;
  t9737 = t3789*t9727;
  t9738 = -1.*t5695*t2786*t4153;
  t9740 = t9737 + t9738;
  t9742 = -1.*t4271*t9734;
  t9743 = t4257*t9740;
  t9744 = t9742 + t9743;
  t9746 = t4257*t9734;
  t9747 = t4271*t9740;
  t9748 = t9746 + t9747;
  t9750 = t4324*t9744;
  t9751 = t4315*t9748;
  t9752 = t9750 + t9751;
  t9754 = t4315*t9744;
  t9755 = -1.*t4324*t9748;
  t9756 = t9754 + t9755;
  t9759 = -1.*t4378*t9752;
  t9760 = t4353*t9756;
  t9761 = t9759 + t9760;
  t9763 = t4353*t9752;
  t9764 = t4378*t9756;
  t9765 = t9763 + t9764;
  t9778 = t862*t869;
  t9779 = t926*t1064*t1152;
  t9780 = t9778 + t9779;
  t9782 = -1.*t9780*t1642;
  t9783 = t9576 + t9782;
  t9787 = -1.*t109*t9780;
  t9788 = t9787 + t9583;
  t9790 = t3789*t9783*t2786;
  t9791 = t9788*t4153;
  t9792 = t9790 + t9791;
  t9794 = t3789*t9788;
  t9795 = -1.*t9783*t2786*t4153;
  t9796 = t9794 + t9795;
  t9798 = -1.*t4271*t9792;
  t9799 = t4257*t9796;
  t9800 = t9798 + t9799;
  t9802 = t4257*t9792;
  t9803 = t4271*t9796;
  t9804 = t9802 + t9803;
  t9806 = t4324*t9800;
  t9807 = t4315*t9804;
  t9808 = t9806 + t9807;
  t9810 = t4315*t9800;
  t9811 = -1.*t4324*t9804;
  t9812 = t9810 + t9811;
  t9814 = -1.*t4378*t9808;
  t9815 = t4353*t9812;
  t9816 = t9814 + t9815;
  t9818 = t4353*t9808;
  t9819 = t4378*t9812;
  t9820 = t9818 + t9819;
  t9657 = 0.1305*t2392*t9656;
  t9659 = t9656*t2867;
  t9660 = t9656*t2786*t4191;
  t9668 = t9666*t4253;
  t9674 = t4275*t9672;
  t9678 = t4297*t9677;
  t9682 = t4328*t9681;
  t9686 = t4344*t9685;
  t9690 = t4498*t9689;
  t9695 = t5184*t9694;
  t9700 = t5417*t9698;
  t9704 = t5603*t9703;
  t9705 = t5389*t9698;
  t9707 = t5254*t9703;
  t9709 = t9705 + t9707;
  t9710 = 0.0306*t9709;
  t9713 = t5254*t9698;
  t9714 = -1.*t5389*t9703;
  t9716 = t9713 + t9714;
  t9717 = -1.1312*t9716;
  t5670 = t2392*t5665;
  t5674 = -1.*t862*t3011*t2786;
  t5675 = t5670 + t5674;
  t9848 = -1.*t3789*t4271*t5675;
  t9849 = -1.*t4257*t5675*t4153;
  t9850 = t9848 + t9849;
  t9852 = t4257*t3789*t5675;
  t9853 = -1.*t4271*t5675*t4153;
  t9854 = t9852 + t9853;
  t9856 = t4324*t9850;
  t9857 = t4315*t9854;
  t9858 = t9856 + t9857;
  t9860 = t4315*t9850;
  t9861 = -1.*t4324*t9854;
  t9862 = t9860 + t9861;
  t9864 = -1.*t4378*t9858;
  t9865 = t4353*t9862;
  t9866 = t9864 + t9865;
  t9868 = t4353*t9858;
  t9869 = t4378*t9862;
  t9870 = t9868 + t9869;
  t9834 = 0.135*t2392;
  t9835 = -0.049*t2786;
  t9836 = t9834 + t9835;
  t9838 = 0.049*t2392;
  t9839 = t9838 + t3105;
  t9882 = t109*t9780;
  t9883 = t9572*t1642;
  t9884 = t9882 + t9883;
  t9886 = t2392*t9884;
  t9887 = -1.*t3011*t926*t2786;
  t9888 = t9886 + t9887;
  t9895 = -1.*t3789*t4271*t9888;
  t9896 = -1.*t4257*t9888*t4153;
  t9897 = t9895 + t9896;
  t9899 = t4257*t3789*t9888;
  t9900 = -1.*t4271*t9888*t4153;
  t9901 = t9899 + t9900;
  t9903 = t4324*t9897;
  t9904 = t4315*t9901;
  t9905 = t9903 + t9904;
  t9907 = t4315*t9897;
  t9908 = -1.*t4324*t9901;
  t9909 = t9907 + t9908;
  t9911 = -1.*t4378*t9905;
  t9912 = t4353*t9909;
  t9913 = t9911 + t9912;
  t9915 = t4353*t9905;
  t9916 = t4378*t9909;
  t9917 = t9915 + t9916;
  t9929 = t3011*t109*t1152;
  t9930 = t3011*t869*t1642;
  t9931 = t9929 + t9930;
  t9933 = t2392*t9931;
  t9934 = t1064*t2786;
  t9935 = t9933 + t9934;
  t9943 = -1.*t3789*t4271*t9935;
  t9944 = -1.*t4257*t9935*t4153;
  t9945 = t9943 + t9944;
  t9947 = t4257*t3789*t9935;
  t9948 = -1.*t4271*t9935*t4153;
  t9949 = t9947 + t9948;
  t9951 = t4324*t9945;
  t9952 = t4315*t9949;
  t9953 = t9951 + t9952;
  t9955 = t4315*t9945;
  t9956 = -1.*t4324*t9949;
  t9957 = t9955 + t9956;
  t9959 = -1.*t4378*t9953;
  t9960 = t4353*t9957;
  t9961 = t9959 + t9960;
  t9963 = t4353*t9953;
  t9964 = t4378*t9957;
  t9965 = t9963 + t9964;
  t9983 = -1.*t3789*t5683;
  t9984 = -1.*t5695*t4153;
  t9985 = t9983 + t9984;
  t9988 = t4271*t9985;
  t9989 = t9988 + t5724;
  t9991 = t4257*t9985;
  t9992 = -1.*t4271*t5709;
  t9993 = t9991 + t9992;
  t9995 = -1.*t4324*t9989;
  t9996 = t4315*t9993;
  t9997 = t9995 + t9996;
  t9999 = t4315*t9989;
  t10000 = t4324*t9993;
  t10001 = t9999 + t10000;
  t10003 = t4378*t9997;
  t10004 = t4353*t10001;
  t10005 = t10003 + t10004;
  t10007 = t4353*t9997;
  t10008 = -1.*t4378*t10001;
  t10009 = t10007 + t10008;
  t9976 = 0.049*t3789;
  t9977 = t9976 + t4157;
  t9979 = -0.09*t3789;
  t9980 = -0.049*t4153;
  t9981 = t9979 + t9980;
  t10021 = t3011*t2392*t926;
  t10022 = t9884*t2786;
  t10023 = t10021 + t10022;
  t10025 = -1.*t3789*t10023;
  t10026 = -1.*t9783*t4153;
  t10027 = t10025 + t10026;
  t10029 = t3789*t9783;
  t10030 = -1.*t10023*t4153;
  t10031 = t10029 + t10030;
  t10033 = t4271*t10027;
  t10034 = t4257*t10031;
  t10035 = t10033 + t10034;
  t10037 = t4257*t10027;
  t10038 = -1.*t4271*t10031;
  t10039 = t10037 + t10038;
  t10041 = -1.*t4324*t10035;
  t10042 = t4315*t10039;
  t10043 = t10041 + t10042;
  t10045 = t4315*t10035;
  t10046 = t4324*t10039;
  t10047 = t10045 + t10046;
  t10049 = t4378*t10043;
  t10050 = t4353*t10047;
  t10051 = t10049 + t10050;
  t10053 = t4353*t10043;
  t10054 = -1.*t4378*t10047;
  t10055 = t10053 + t10054;
  t10067 = -1.*t2392*t1064;
  t10068 = t9931*t2786;
  t10069 = t10067 + t10068;
  t10071 = -1.*t3789*t10069;
  t10072 = -1.*t9656*t4153;
  t10073 = t10071 + t10072;
  t10075 = t3789*t9656;
  t10076 = -1.*t10069*t4153;
  t10077 = t10075 + t10076;
  t10079 = t4271*t10073;
  t10080 = t4257*t10077;
  t10081 = t10079 + t10080;
  t10083 = t4257*t10073;
  t10084 = -1.*t4271*t10077;
  t10085 = t10083 + t10084;
  t10087 = -1.*t4324*t10081;
  t10088 = t4315*t10085;
  t10089 = t10087 + t10088;
  t10091 = t4315*t10081;
  t10092 = t4324*t10085;
  t10093 = t10091 + t10092;
  t10095 = t4378*t10089;
  t10096 = t4353*t10093;
  t10097 = t10095 + t10096;
  t10099 = t4353*t10089;
  t10100 = -1.*t4378*t10093;
  t10101 = t10099 + t10100;
  t10120 = -1.*t4257*t5704;
  t10121 = t10120 + t9992;
  t10123 = -1.*t4324*t5728;
  t10124 = t4315*t10121;
  t10125 = t10123 + t10124;
  t10127 = t4324*t10121;
  t10128 = t5750 + t10127;
  t10130 = t4378*t10125;
  t10131 = t4353*t10128;
  t10132 = t10130 + t10131;
  t10134 = t4353*t10125;
  t10135 = -1.*t4378*t10128;
  t10136 = t10134 + t10135;
  t10112 = -0.21*t4257;
  t10113 = -0.049*t4271;
  t10114 = t10112 + t10113;
  t10116 = 0.049*t4257;
  t10117 = t10116 + t4272;
  t10147 = t3789*t10023;
  t10148 = t9783*t4153;
  t10149 = t10147 + t10148;
  t10152 = -1.*t4271*t10149;
  t10153 = t10152 + t10034;
  t10155 = -1.*t4257*t10149;
  t10156 = t10155 + t10038;
  t10158 = -1.*t4324*t10153;
  t10159 = t4315*t10156;
  t10160 = t10158 + t10159;
  t10162 = t4315*t10153;
  t10163 = t4324*t10156;
  t10164 = t10162 + t10163;
  t10166 = t4378*t10160;
  t10167 = t4353*t10164;
  t10168 = t10166 + t10167;
  t10170 = t4353*t10160;
  t10171 = -1.*t4378*t10164;
  t10172 = t10170 + t10171;
  t10183 = t3789*t10069;
  t10184 = t9656*t4153;
  t10185 = t10183 + t10184;
  t10188 = -1.*t4271*t10185;
  t10189 = t10188 + t10080;
  t10191 = -1.*t4257*t10185;
  t10192 = t10191 + t10084;
  t10194 = -1.*t4324*t10189;
  t10195 = t4315*t10192;
  t10196 = t10194 + t10195;
  t10198 = t4315*t10189;
  t10199 = t4324*t10192;
  t10200 = t10198 + t10199;
  t10202 = t4378*t10196;
  t10203 = t4353*t10200;
  t10204 = t10202 + t10203;
  t10206 = t4353*t10196;
  t10207 = -1.*t4378*t10200;
  t10208 = t10206 + t10207;
  t10226 = -1.*t4315*t5743;
  t10227 = t10123 + t10226;
  t10230 = t4378*t10227;
  t10231 = t10230 + t5757;
  t10233 = t4353*t10227;
  t10234 = -1.*t4378*t5752;
  t10235 = t10233 + t10234;
  t10219 = 0.0016*t4315;
  t10220 = t10219 + t4342;
  t10222 = -0.2707*t4315;
  t10223 = -0.0016*t4324;
  t10224 = t10222 + t10223;
  t10247 = t4257*t10149;
  t10248 = t4271*t10031;
  t10249 = t10247 + t10248;
  t10251 = -1.*t4315*t10249;
  t10252 = t10158 + t10251;
  t10254 = -1.*t4324*t10249;
  t10255 = t10162 + t10254;
  t10257 = t4378*t10252;
  t10258 = t4353*t10255;
  t10259 = t10257 + t10258;
  t10261 = t4353*t10252;
  t10262 = -1.*t4378*t10255;
  t10263 = t10261 + t10262;
  t10275 = t4257*t10185;
  t10276 = t4271*t10077;
  t10277 = t10275 + t10276;
  t10279 = -1.*t4315*t10277;
  t10280 = t10194 + t10279;
  t10282 = -1.*t4324*t10277;
  t10283 = t10198 + t10282;
  t10285 = t4378*t10280;
  t10286 = t4353*t10283;
  t10287 = t10285 + t10286;
  t10289 = t4353*t10280;
  t10290 = -1.*t4378*t10283;
  t10291 = t10289 + t10290;
  t10310 = -1.*t4353*t5748;
  t10311 = t10310 + t10234;
  t8528 = t5254*t5761;
  t10302 = -0.7055*t4353;
  t10303 = 0.0184*t4378;
  t10304 = t10302 + t10303;
  t10306 = -0.0184*t4353;
  t10307 = t10306 + t4381;
  t10321 = t4324*t10153;
  t10322 = t4315*t10249;
  t10323 = t10321 + t10322;
  t10326 = -1.*t4378*t10323;
  t10327 = t10326 + t10258;
  t10329 = -1.*t4353*t10323;
  t10330 = t10329 + t10262;
  t10341 = t4324*t10189;
  t10342 = t4315*t10277;
  t10343 = t10341 + t10342;
  t10346 = -1.*t4378*t10343;
  t10347 = t10346 + t10286;
  t10349 = -1.*t4353*t10343;
  t10350 = t10349 + t10290;
  t10313 = -1.*t5389*t5761;
  t8707 = -1.*t5389*t6346;
  t8710 = t8528 + t8707;
  t10361 = 0.0216*t5254;
  t10362 = t10361 + t5599;
  t10364 = -1.1135*t5254;
  t10365 = -0.0216*t5389;
  t10366 = t10364 + t10365;
  t10332 = -1.*t5389*t10327;
  t10374 = t4353*t10323;
  t10375 = t4378*t10255;
  t10376 = t10374 + t10375;
  t10336 = t5254*t10327;
  t10352 = -1.*t5389*t10347;
  t10386 = t4353*t10343;
  t10387 = t4378*t10283;
  t10388 = t10386 + t10387;
  t10356 = t5254*t10347;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1640*t1772 + t2076*t2867 + t3587*t4191 + t4247*t4253 + t4275*t4283 + t4297*t4310 + t4328*t4336 + t4344*t4350 + t4498*t4900 + t5184*t5206 + t5417*t5544 + t5603*t5609 + 0.0306*(t5389*t5544 + t5254*t5609) - 1.1312*(t5254*t5544 - 1.*t5389*t5609) + t1173*t797 - 1.*t3011*t3189*t926 + 0.1305*(t2076*t2392 + t2786*t3011*t926);
  p_output1[10]=t1772*t5647 + t2867*t5665 + 0.1305*t5675 + t4191*t5683 + t4253*t5695 + t4275*t5704 + t4297*t5709 + t4328*t5728 + t4344*t5743 + t4498*t5748 + t5184*t5752 + t5417*t5761 + t5603*t6346 + 0.0306*(t5389*t5761 + t5254*t6346) + t5642*t797 + t3011*t3189*t862 - 1.1312*t8710;
  p_output1[11]=0;
  p_output1[12]=-1.*t1064*t3189*t862 + t1152*t3011*t797*t862 + t1772*t3011*t862*t869 + t2867*t8754 + 0.1305*(t1064*t2786*t862 + t2392*t8754) + t4191*t8816 + t4253*t8836 + t4275*t8860 + t4297*t8889 + t4328*t8915 + t4344*t8940 + t4498*t8955 + t5184*t8966 + t5417*t8978 + t5603*t9032 + 0.0306*(t5389*t8978 + t5254*t9032) - 1.1312*(t5254*t8978 - 1.*t5389*t9032);
  p_output1[13]=t2867*t9123 + t4191*t9156 + t4253*t9185 + t4275*t9206 + t4297*t9214 + t4328*t9224 + t4344*t9237 + t4498*t9244 - 1.*t1064*t3189*t926 + t1152*t3011*t797*t926 + t1772*t3011*t869*t926 + 0.1305*(t2392*t9123 + t1064*t2786*t926) + t5184*t9265 + t5417*t9274 + t5603*t9285 + 0.0306*(t5389*t9274 + t5254*t9285) - 1.1312*(t5254*t9274 - 1.*t5389*t9285);
  p_output1[14]=-1.*t3011*t3189 - 1.*t1064*t1152*t797 - 1.*t1064*t1772*t869 + t2867*t9337 + 0.1305*(t2786*t3011 + t2392*t9337) + t4191*t9357 + t4253*t9363 + t4275*t9372 + t4297*t9376 + t4328*t9392 + t4344*t9403 + t4498*t9415 + t5184*t9422 + t5417*t9428 + t5603*t9435 + 0.0306*(t5389*t9428 + t5254*t9435) - 1.1312*(t5254*t9428 - 1.*t5389*t9435);
  p_output1[15]=t5647*t797 + t1772*t9469 + 0.1305*t2392*t9474 + t2867*t9474 + t2786*t4191*t9474 + t4253*t9485 + t4275*t9493 + t4297*t9501 + t4328*t9508 + t4344*t9520 + t4498*t9528 + t5184*t9533 + t5417*t9538 + t5603*t9547 + 0.0306*(t5389*t9538 + t5254*t9547) - 1.1312*(t5254*t9538 - 1.*t5389*t9547);
  p_output1[16]=t1173*t1772 + t797*t9572 + 0.1305*t2392*t9579 + t2867*t9579 + t2786*t4191*t9579 + t4253*t9584 + t4275*t9592 + t4297*t9597 + t4328*t9603 + t4344*t9615 + t4498*t9620 + t5184*t9624 + t5417*t9629 + t5603*t9637 + 0.0306*(t5389*t9629 + t5254*t9637) - 1.1312*(t5254*t9629 - 1.*t5389*t9637);
  p_output1[17]=-1.*t1152*t1772*t3011 + t3011*t797*t869 + t9657 + t9659 + t9660 + t9668 + t9674 + t9678 + t9682 + t9686 + t9690 + t9695 + t9700 + t9704 + t9710 + t9717;
  p_output1[18]=0.135*t1642*t5642 - 0.135*t109*t5647 + 0.1305*t2392*t5695 + t2867*t5695 + t2786*t4191*t5695 + t4253*t9727 + t4275*t9734 + t4297*t9740 + t4328*t9744 + t4344*t9748 + t4498*t9752 + t5184*t9756 + t5417*t9761 + t5603*t9765 + 0.0306*(t5389*t9761 + t5254*t9765) - 1.1312*(t5254*t9761 - 1.*t5389*t9765);
  p_output1[19]=-0.135*t109*t9572 + 0.135*t1642*t9780 + 0.1305*t2392*t9783 + t2867*t9783 + t2786*t4191*t9783 + t4253*t9788 + t4275*t9792 + t4297*t9796 + t4328*t9800 + t4344*t9804 + t4498*t9808 + t5184*t9812 + t5417*t9816 + t5603*t9820 + 0.0306*(t5389*t9816 + t5254*t9820) - 1.1312*(t5254*t9816 - 1.*t5389*t9820);
  p_output1[20]=0.135*t1152*t1642*t3011 - 0.135*t109*t3011*t869 + t9657 + t9659 + t9660 + t9668 + t9674 + t9678 + t9682 + t9686 + t9690 + t9695 + t9700 + t9704 + t9710 + t9717;
  p_output1[21]=t4191*t5675 + t3789*t4275*t5675 - 1.*t4153*t4297*t5675 + 0.1305*(-1.*t2786*t5665 - 1.*t2392*t3011*t862) + t3011*t862*t9836 + t5665*t9839 + t4328*t9850 + t4344*t9854 + t4498*t9858 + t5184*t9862 + t5417*t9866 + t5603*t9870 + 0.0306*(t5389*t9866 + t5254*t9870) - 1.1312*(t5254*t9866 - 1.*t5389*t9870);
  p_output1[22]=t3011*t926*t9836 + t9839*t9884 + 0.1305*(t3487 - 1.*t2786*t9884) + t4191*t9888 + t3789*t4275*t9888 - 1.*t4153*t4297*t9888 + t4328*t9897 + t4344*t9901 + t4498*t9905 + t5184*t9909 + t5417*t9913 + t5603*t9917 + 0.0306*(t5389*t9913 + t5254*t9917) - 1.1312*(t5254*t9913 - 1.*t5389*t9917);
  p_output1[23]=-1.*t1064*t9836 + t9839*t9931 + 0.1305*(t1064*t2392 - 1.*t2786*t9931) + t4191*t9935 + t3789*t4275*t9935 - 1.*t4153*t4297*t9935 + t4328*t9945 + t4344*t9949 + t4498*t9953 + t5184*t9957 + t5417*t9961 + t5603*t9965 + 0.0306*(t5389*t9961 + t5254*t9965) - 1.1312*(t5254*t9961 - 1.*t5389*t9965);
  p_output1[24]=t10001*t4498 - 1.1312*(t10009*t5254 - 1.*t10005*t5389) + 0.0306*(t10005*t5254 + t10009*t5389) + t10009*t5417 + t10005*t5603 + t4275*t5709 + t5695*t9977 + t5683*t9981 + t4297*t9985 + t4344*t9989 + t4328*t9993 + t5184*t9997;
  p_output1[25]=t10031*t4275 + t10027*t4297 + t10039*t4328 + t10035*t4344 + t10047*t4498 + t10043*t5184 - 1.1312*(t10055*t5254 - 1.*t10051*t5389) + 0.0306*(t10051*t5254 + t10055*t5389) + t10055*t5417 + t10051*t5603 + t9783*t9977 + t10023*t9981;
  p_output1[26]=t10077*t4275 + t10073*t4297 + t10085*t4328 + t10081*t4344 + t10093*t4498 + t10089*t5184 - 1.1312*(t10101*t5254 - 1.*t10097*t5389) + 0.0306*(t10097*t5254 + t10101*t5389) + t10101*t5417 + t10097*t5603 + t9656*t9977 + t10069*t9981;
  p_output1[27]=t10121*t4328 + t10128*t4498 + t10125*t5184 - 1.1312*(t10136*t5254 - 1.*t10132*t5389) + 0.0306*(t10132*t5254 + t10136*t5389) + t10136*t5417 + t10132*t5603 + t10114*t5704 + t10117*t5709 + t4344*t5728;
  p_output1[28]=t10031*t10117 + t10114*t10149 + t10156*t4328 + t10153*t4344 + t10164*t4498 + t10160*t5184 - 1.1312*(t10172*t5254 - 1.*t10168*t5389) + 0.0306*(t10168*t5254 + t10172*t5389) + t10172*t5417 + t10168*t5603;
  p_output1[29]=t10077*t10117 + t10114*t10185 + t10192*t4328 + t10189*t4344 + t10200*t4498 + t10196*t5184 - 1.1312*(t10208*t5254 - 1.*t10204*t5389) + 0.0306*(t10204*t5254 + t10208*t5389) + t10208*t5417 + t10204*t5603;
  p_output1[30]=t10227*t5184 - 1.1312*(t10235*t5254 - 1.*t10231*t5389) + 0.0306*(t10231*t5254 + t10235*t5389) + t10235*t5417 + t10231*t5603 + t10220*t5728 + t10224*t5743 + t4498*t5752;
  p_output1[31]=t10153*t10220 + t10224*t10249 + t10255*t4498 + t10252*t5184 - 1.1312*(t10263*t5254 - 1.*t10259*t5389) + 0.0306*(t10259*t5254 + t10263*t5389) + t10263*t5417 + t10259*t5603;
  p_output1[32]=t10189*t10220 + t10224*t10277 + t10283*t4498 + t10280*t5184 - 1.1312*(t10291*t5254 - 1.*t10287*t5389) + 0.0306*(t10287*t5254 + t10291*t5389) + t10291*t5417 + t10287*t5603;
  p_output1[33]=-1.1312*(t10313 + t10311*t5254) + t10311*t5417 + t10304*t5748 + t10307*t5752 + t5603*t5761 + 0.0306*(t10311*t5389 + t8528);
  p_output1[34]=t10255*t10307 + t10304*t10323 - 1.1312*(t10332 + t10330*t5254) + 0.0306*(t10336 + t10330*t5389) + t10330*t5417 + t10327*t5603;
  p_output1[35]=t10283*t10307 + t10304*t10343 - 1.1312*(t10352 + t10350*t5254) + 0.0306*(t10356 + t10350*t5389) + t10350*t5417 + t10347*t5603;
  p_output1[36]=t10362*t5761 + t10366*t6346 - 1.1312*(t10313 - 1.*t5254*t6346) + 0.0306*t8710;
  p_output1[37]=t10327*t10362 + t10366*t10376 - 1.1312*(t10332 - 1.*t10376*t5254) + 0.0306*(t10336 - 1.*t10376*t5389);
  p_output1[38]=t10347*t10362 + t10366*t10388 - 1.1312*(t10352 - 1.*t10388*t5254) + 0.0306*(t10356 - 1.*t10388*t5389);
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE