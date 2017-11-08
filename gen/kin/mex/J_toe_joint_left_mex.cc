/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:20 GMT-05:00
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
  double t4431;
  double t4442;
  double t4443;
  double t4430;
  double t4444;
  double t1018;
  double t4433;
  double t4445;
  double t4448;
  double t4475;
  double t4478;
  double t4479;
  double t4482;
  double t4504;
  double t4505;
  double t4515;
  double t4522;
  double t4497;
  double t4498;
  double t4503;
  double t4528;
  double t4562;
  double t4563;
  double t4565;
  double t4570;
  double t4556;
  double t4558;
  double t4559;
  double t4578;
  double t4580;
  double t4581;
  double t4590;
  double t4598;
  double t4601;
  double t4604;
  double t4614;
  double t4615;
  double t4616;
  double t4627;
  double t4628;
  double t4629;
  double t4631;
  double t4632;
  double t4633;
  double t4635;
  double t4640;
  double t4641;
  double t4642;
  double t4649;
  double t4651;
  double t4652;
  double t4655;
  double t4657;
  double t4659;
  double t4663;
  double t4668;
  double t4669;
  double t4672;
  double t4681;
  double t4682;
  double t4684;
  double t4396;
  double t4398;
  double t4416;
  double t4428;
  double t4484;
  double t4495;
  double t4698;
  double t4699;
  double t4700;
  double t4702;
  double t4703;
  double t4704;
  double t4520;
  double t4523;
  double t4525;
  double t4529;
  double t4530;
  double t4532;
  double t4706;
  double t4707;
  double t4708;
  double t4566;
  double t4573;
  double t4575;
  double t4582;
  double t4584;
  double t4586;
  double t4603;
  double t4607;
  double t4611;
  double t4717;
  double t4719;
  double t4720;
  double t4722;
  double t4724;
  double t4725;
  double t4621;
  double t4623;
  double t4624;
  double t4634;
  double t4637;
  double t4638;
  double t4728;
  double t4730;
  double t4731;
  double t4733;
  double t4734;
  double t4736;
  double t4645;
  double t4646;
  double t4647;
  double t4662;
  double t4665;
  double t4666;
  double t4738;
  double t4740;
  double t4741;
  double t4745;
  double t4746;
  double t4747;
  double t4676;
  double t4679;
  double t4680;
  double t4749;
  double t4750;
  double t4751;
  double t4753;
  double t4754;
  double t4755;
  double t4768;
  double t4769;
  double t4770;
  double t4777;
  double t4778;
  double t4779;
  double t4781;
  double t4782;
  double t4783;
  double t4785;
  double t4786;
  double t4787;
  double t4789;
  double t4790;
  double t4791;
  double t4793;
  double t4794;
  double t4795;
  double t4797;
  double t4798;
  double t4799;
  double t4801;
  double t4802;
  double t4803;
  double t4805;
  double t4806;
  double t4807;
  double t4820;
  double t4821;
  double t4822;
  double t4829;
  double t4830;
  double t4831;
  double t4833;
  double t4834;
  double t4835;
  double t4837;
  double t4838;
  double t4839;
  double t4841;
  double t4842;
  double t4843;
  double t4845;
  double t4846;
  double t4847;
  double t4849;
  double t4850;
  double t4851;
  double t4853;
  double t4854;
  double t4855;
  double t4857;
  double t4858;
  double t4859;
  double t4872;
  double t4873;
  double t4874;
  double t4881;
  double t4882;
  double t4883;
  double t4885;
  double t4886;
  double t4887;
  double t4889;
  double t4890;
  double t4891;
  double t4893;
  double t4894;
  double t4895;
  double t4897;
  double t4898;
  double t4899;
  double t4901;
  double t4902;
  double t4903;
  double t4905;
  double t4906;
  double t4907;
  double t4909;
  double t4910;
  double t4911;
  double t4923;
  double t4924;
  double t4925;
  double t4927;
  double t4928;
  double t4932;
  double t4933;
  double t4934;
  double t4936;
  double t4937;
  double t4938;
  double t4940;
  double t4941;
  double t4942;
  double t4944;
  double t4945;
  double t4946;
  double t4948;
  double t4949;
  double t4950;
  double t4952;
  double t4953;
  double t4954;
  double t4956;
  double t4957;
  double t4958;
  double t4969;
  double t4970;
  double t4971;
  double t4974;
  double t4975;
  double t4976;
  double t4980;
  double t4981;
  double t4983;
  double t4984;
  double t4985;
  double t4987;
  double t4988;
  double t4989;
  double t4991;
  double t4992;
  double t4993;
  double t4995;
  double t4996;
  double t4997;
  double t4999;
  double t5000;
  double t5001;
  double t5003;
  double t5004;
  double t5005;
  double t5018;
  double t5019;
  double t5020;
  double t5024;
  double t5025;
  double t5026;
  double t5028;
  double t5029;
  double t5030;
  double t5032;
  double t5033;
  double t5034;
  double t5036;
  double t5037;
  double t5038;
  double t5040;
  double t5041;
  double t5042;
  double t5044;
  double t5045;
  double t5046;
  double t5048;
  double t5049;
  double t5050;
  double t5066;
  double t5067;
  double t5069;
  double t5070;
  double t5071;
  double t5073;
  double t5074;
  double t5075;
  double t5077;
  double t5078;
  double t5079;
  double t5081;
  double t5082;
  double t5083;
  double t5085;
  double t5086;
  double t5087;
  double t5089;
  double t5090;
  double t5091;
  double t5103;
  double t5104;
  double t5105;
  double t5107;
  double t5108;
  double t5112;
  double t5113;
  double t5115;
  double t5116;
  double t5117;
  double t5119;
  double t5120;
  double t5121;
  double t5123;
  double t5124;
  double t5125;
  double t5127;
  double t5128;
  double t5129;
  double t5131;
  double t5132;
  double t5133;
  double t5135;
  double t5136;
  double t5137;
  double t5021;
  double t5022;
  double t5023;
  double t5027;
  double t5031;
  double t5035;
  double t5039;
  double t5043;
  double t5047;
  double t5051;
  double t5052;
  double t5053;
  double t5054;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t5059;
  double t4711;
  double t4712;
  double t4714;
  double t5165;
  double t5166;
  double t5167;
  double t5169;
  double t5170;
  double t5171;
  double t5173;
  double t5174;
  double t5175;
  double t5177;
  double t5178;
  double t5179;
  double t5151;
  double t5152;
  double t5153;
  double t5155;
  double t5156;
  double t5191;
  double t5192;
  double t5193;
  double t5195;
  double t5196;
  double t5197;
  double t5204;
  double t5205;
  double t5206;
  double t5208;
  double t5209;
  double t5210;
  double t5212;
  double t5213;
  double t5214;
  double t5216;
  double t5217;
  double t5218;
  double t5230;
  double t5231;
  double t5232;
  double t5234;
  double t5235;
  double t5236;
  double t5244;
  double t5245;
  double t5246;
  double t5248;
  double t5249;
  double t5250;
  double t5252;
  double t5253;
  double t5254;
  double t5256;
  double t5257;
  double t5258;
  double t5276;
  double t5277;
  double t5278;
  double t5281;
  double t5282;
  double t5284;
  double t5285;
  double t5286;
  double t5288;
  double t5289;
  double t5290;
  double t5292;
  double t5293;
  double t5294;
  double t5269;
  double t5270;
  double t5272;
  double t5273;
  double t5274;
  double t5306;
  double t5307;
  double t5308;
  double t5310;
  double t5311;
  double t5312;
  double t5314;
  double t5315;
  double t5316;
  double t5318;
  double t5319;
  double t5320;
  double t5322;
  double t5323;
  double t5324;
  double t5326;
  double t5327;
  double t5328;
  double t5330;
  double t5331;
  double t5332;
  double t5344;
  double t5345;
  double t5346;
  double t5348;
  double t5349;
  double t5350;
  double t5352;
  double t5353;
  double t5354;
  double t5356;
  double t5357;
  double t5358;
  double t5360;
  double t5361;
  double t5362;
  double t5364;
  double t5365;
  double t5366;
  double t5368;
  double t5369;
  double t5370;
  double t5389;
  double t5390;
  double t5392;
  double t5393;
  double t5394;
  double t5396;
  double t5397;
  double t5381;
  double t5382;
  double t5383;
  double t5385;
  double t5386;
  double t5408;
  double t5409;
  double t5410;
  double t5413;
  double t5414;
  double t5416;
  double t5417;
  double t5419;
  double t5420;
  double t5421;
  double t5423;
  double t5424;
  double t5425;
  double t5436;
  double t5437;
  double t5438;
  double t5441;
  double t5442;
  double t5444;
  double t5445;
  double t5447;
  double t5448;
  double t5449;
  double t5451;
  double t5452;
  double t5453;
  double t5471;
  double t5472;
  double t4758;
  double t5464;
  double t5465;
  double t5467;
  double t5468;
  double t5469;
  double t5484;
  double t5485;
  double t5486;
  double t5488;
  double t5489;
  double t5491;
  double t5492;
  double t5504;
  double t5505;
  double t5506;
  double t5508;
  double t5509;
  double t5511;
  double t5512;
  double t4757;
  double t4759;
  double t5479;
  double t5523;
  double t5524;
  double t5525;
  double t5527;
  double t5528;
  double t5535;
  double t5536;
  double t5537;
  double t5495;
  double t5499;
  double t5547;
  double t5548;
  double t5549;
  double t5515;
  double t5519;
  t4431 = Cos(var1[5]);
  t4442 = Sin(var1[3]);
  t4443 = Sin(var1[4]);
  t4430 = Cos(var1[3]);
  t4444 = Sin(var1[5]);
  t1018 = Cos(var1[6]);
  t4433 = -1.*t4430*t4431;
  t4445 = -1.*t4442*t4443*t4444;
  t4448 = t4433 + t4445;
  t4475 = -1.*t4431*t4442*t4443;
  t4478 = t4430*t4444;
  t4479 = t4475 + t4478;
  t4482 = Sin(var1[6]);
  t4504 = Cos(var1[7]);
  t4505 = -1.*t4504;
  t4515 = 1. + t4505;
  t4522 = Sin(var1[7]);
  t4497 = t1018*t4448;
  t4498 = t4479*t4482;
  t4503 = t4497 + t4498;
  t4528 = Cos(var1[4]);
  t4562 = Cos(var1[8]);
  t4563 = -1.*t4562;
  t4565 = 1. + t4563;
  t4570 = Sin(var1[8]);
  t4556 = -1.*t4528*t4504*t4442;
  t4558 = t4503*t4522;
  t4559 = t4556 + t4558;
  t4578 = t1018*t4479;
  t4580 = -1.*t4448*t4482;
  t4581 = t4578 + t4580;
  t4590 = Cos(var1[9]);
  t4598 = -1.*t4590;
  t4601 = 1. + t4598;
  t4604 = Sin(var1[9]);
  t4614 = t4562*t4559;
  t4615 = t4581*t4570;
  t4616 = t4614 + t4615;
  t4627 = t4562*t4581;
  t4628 = -1.*t4559*t4570;
  t4629 = t4627 + t4628;
  t4631 = Cos(var1[10]);
  t4632 = -1.*t4631;
  t4633 = 1. + t4632;
  t4635 = Sin(var1[10]);
  t4640 = -1.*t4604*t4616;
  t4641 = t4590*t4629;
  t4642 = t4640 + t4641;
  t4649 = t4590*t4616;
  t4651 = t4604*t4629;
  t4652 = t4649 + t4651;
  t4655 = Cos(var1[11]);
  t4657 = -1.*t4655;
  t4659 = 1. + t4657;
  t4663 = Sin(var1[11]);
  t4668 = t4635*t4642;
  t4669 = t4631*t4652;
  t4672 = t4668 + t4669;
  t4681 = t4631*t4642;
  t4682 = -1.*t4635*t4652;
  t4684 = t4681 + t4682;
  t4396 = -1.*t1018;
  t4398 = 1. + t4396;
  t4416 = 0.135*t4398;
  t4428 = 0. + t4416;
  t4484 = -0.135*t4482;
  t4495 = 0. + t4484;
  t4698 = -1.*t4431*t4442;
  t4699 = t4430*t4443*t4444;
  t4700 = t4698 + t4699;
  t4702 = t4430*t4431*t4443;
  t4703 = t4442*t4444;
  t4704 = t4702 + t4703;
  t4520 = 0.135*t4515;
  t4523 = 0.049*t4522;
  t4525 = 0. + t4520 + t4523;
  t4529 = -0.049*t4515;
  t4530 = 0.135*t4522;
  t4532 = 0. + t4529 + t4530;
  t4706 = t1018*t4700;
  t4707 = t4704*t4482;
  t4708 = t4706 + t4707;
  t4566 = -0.049*t4565;
  t4573 = -0.09*t4570;
  t4575 = 0. + t4566 + t4573;
  t4582 = -0.09*t4565;
  t4584 = 0.049*t4570;
  t4586 = 0. + t4582 + t4584;
  t4603 = -0.049*t4601;
  t4607 = -0.21*t4604;
  t4611 = 0. + t4603 + t4607;
  t4717 = t4430*t4528*t4504;
  t4719 = t4708*t4522;
  t4720 = t4717 + t4719;
  t4722 = t1018*t4704;
  t4724 = -1.*t4700*t4482;
  t4725 = t4722 + t4724;
  t4621 = -0.21*t4601;
  t4623 = 0.049*t4604;
  t4624 = 0. + t4621 + t4623;
  t4634 = -0.2707*t4633;
  t4637 = 0.0016*t4635;
  t4638 = 0. + t4634 + t4637;
  t4728 = t4562*t4720;
  t4730 = t4725*t4570;
  t4731 = t4728 + t4730;
  t4733 = t4562*t4725;
  t4734 = -1.*t4720*t4570;
  t4736 = t4733 + t4734;
  t4645 = -0.0016*t4633;
  t4646 = -0.2707*t4635;
  t4647 = 0. + t4645 + t4646;
  t4662 = 0.0184*t4659;
  t4665 = -0.7055*t4663;
  t4666 = 0. + t4662 + t4665;
  t4738 = -1.*t4604*t4731;
  t4740 = t4590*t4736;
  t4741 = t4738 + t4740;
  t4745 = t4590*t4731;
  t4746 = t4604*t4736;
  t4747 = t4745 + t4746;
  t4676 = -0.7055*t4659;
  t4679 = -0.0184*t4663;
  t4680 = 0. + t4676 + t4679;
  t4749 = t4635*t4741;
  t4750 = t4631*t4747;
  t4751 = t4749 + t4750;
  t4753 = t4631*t4741;
  t4754 = -1.*t4635*t4747;
  t4755 = t4753 + t4754;
  t4768 = t4430*t4528*t1018*t4444;
  t4769 = t4430*t4528*t4431*t4482;
  t4770 = t4768 + t4769;
  t4777 = -1.*t4430*t4504*t4443;
  t4778 = t4770*t4522;
  t4779 = t4777 + t4778;
  t4781 = t4430*t4528*t4431*t1018;
  t4782 = -1.*t4430*t4528*t4444*t4482;
  t4783 = t4781 + t4782;
  t4785 = t4562*t4779;
  t4786 = t4783*t4570;
  t4787 = t4785 + t4786;
  t4789 = t4562*t4783;
  t4790 = -1.*t4779*t4570;
  t4791 = t4789 + t4790;
  t4793 = -1.*t4604*t4787;
  t4794 = t4590*t4791;
  t4795 = t4793 + t4794;
  t4797 = t4590*t4787;
  t4798 = t4604*t4791;
  t4799 = t4797 + t4798;
  t4801 = t4635*t4795;
  t4802 = t4631*t4799;
  t4803 = t4801 + t4802;
  t4805 = t4631*t4795;
  t4806 = -1.*t4635*t4799;
  t4807 = t4805 + t4806;
  t4820 = t4528*t1018*t4442*t4444;
  t4821 = t4528*t4431*t4442*t4482;
  t4822 = t4820 + t4821;
  t4829 = -1.*t4504*t4442*t4443;
  t4830 = t4822*t4522;
  t4831 = t4829 + t4830;
  t4833 = t4528*t4431*t1018*t4442;
  t4834 = -1.*t4528*t4442*t4444*t4482;
  t4835 = t4833 + t4834;
  t4837 = t4562*t4831;
  t4838 = t4835*t4570;
  t4839 = t4837 + t4838;
  t4841 = t4562*t4835;
  t4842 = -1.*t4831*t4570;
  t4843 = t4841 + t4842;
  t4845 = -1.*t4604*t4839;
  t4846 = t4590*t4843;
  t4847 = t4845 + t4846;
  t4849 = t4590*t4839;
  t4850 = t4604*t4843;
  t4851 = t4849 + t4850;
  t4853 = t4635*t4847;
  t4854 = t4631*t4851;
  t4855 = t4853 + t4854;
  t4857 = t4631*t4847;
  t4858 = -1.*t4635*t4851;
  t4859 = t4857 + t4858;
  t4872 = -1.*t1018*t4443*t4444;
  t4873 = -1.*t4431*t4443*t4482;
  t4874 = t4872 + t4873;
  t4881 = -1.*t4528*t4504;
  t4882 = t4874*t4522;
  t4883 = t4881 + t4882;
  t4885 = -1.*t4431*t1018*t4443;
  t4886 = t4443*t4444*t4482;
  t4887 = t4885 + t4886;
  t4889 = t4562*t4883;
  t4890 = t4887*t4570;
  t4891 = t4889 + t4890;
  t4893 = t4562*t4887;
  t4894 = -1.*t4883*t4570;
  t4895 = t4893 + t4894;
  t4897 = -1.*t4604*t4891;
  t4898 = t4590*t4895;
  t4899 = t4897 + t4898;
  t4901 = t4590*t4891;
  t4902 = t4604*t4895;
  t4903 = t4901 + t4902;
  t4905 = t4635*t4899;
  t4906 = t4631*t4903;
  t4907 = t4905 + t4906;
  t4909 = t4631*t4899;
  t4910 = -1.*t4635*t4903;
  t4911 = t4909 + t4910;
  t4923 = t4431*t4442;
  t4924 = -1.*t4430*t4443*t4444;
  t4925 = t4923 + t4924;
  t4927 = t4925*t4482;
  t4928 = t4722 + t4927;
  t4932 = t1018*t4925;
  t4933 = -1.*t4704*t4482;
  t4934 = t4932 + t4933;
  t4936 = t4562*t4928*t4522;
  t4937 = t4934*t4570;
  t4938 = t4936 + t4937;
  t4940 = t4562*t4934;
  t4941 = -1.*t4928*t4522*t4570;
  t4942 = t4940 + t4941;
  t4944 = -1.*t4604*t4938;
  t4945 = t4590*t4942;
  t4946 = t4944 + t4945;
  t4948 = t4590*t4938;
  t4949 = t4604*t4942;
  t4950 = t4948 + t4949;
  t4952 = t4635*t4946;
  t4953 = t4631*t4950;
  t4954 = t4952 + t4953;
  t4956 = t4631*t4946;
  t4957 = -1.*t4635*t4950;
  t4958 = t4956 + t4957;
  t4969 = t4431*t4442*t4443;
  t4970 = -1.*t4430*t4444;
  t4971 = t4969 + t4970;
  t4974 = t1018*t4971;
  t4975 = t4448*t4482;
  t4976 = t4974 + t4975;
  t4980 = -1.*t4971*t4482;
  t4981 = t4497 + t4980;
  t4983 = t4562*t4976*t4522;
  t4984 = t4981*t4570;
  t4985 = t4983 + t4984;
  t4987 = t4562*t4981;
  t4988 = -1.*t4976*t4522*t4570;
  t4989 = t4987 + t4988;
  t4991 = -1.*t4604*t4985;
  t4992 = t4590*t4989;
  t4993 = t4991 + t4992;
  t4995 = t4590*t4985;
  t4996 = t4604*t4989;
  t4997 = t4995 + t4996;
  t4999 = t4635*t4993;
  t5000 = t4631*t4997;
  t5001 = t4999 + t5000;
  t5003 = t4631*t4993;
  t5004 = -1.*t4635*t4997;
  t5005 = t5003 + t5004;
  t5018 = t4528*t4431*t1018;
  t5019 = -1.*t4528*t4444*t4482;
  t5020 = t5018 + t5019;
  t5024 = -1.*t4528*t1018*t4444;
  t5025 = -1.*t4528*t4431*t4482;
  t5026 = t5024 + t5025;
  t5028 = t4562*t5020*t4522;
  t5029 = t5026*t4570;
  t5030 = t5028 + t5029;
  t5032 = t4562*t5026;
  t5033 = -1.*t5020*t4522*t4570;
  t5034 = t5032 + t5033;
  t5036 = -1.*t4604*t5030;
  t5037 = t4590*t5034;
  t5038 = t5036 + t5037;
  t5040 = t4590*t5030;
  t5041 = t4604*t5034;
  t5042 = t5040 + t5041;
  t5044 = t4635*t5038;
  t5045 = t4631*t5042;
  t5046 = t5044 + t5045;
  t5048 = t4631*t5038;
  t5049 = -1.*t4635*t5042;
  t5050 = t5048 + t5049;
  t5066 = -1.*t1018*t4700;
  t5067 = t5066 + t4933;
  t5069 = t4562*t4725*t4522;
  t5070 = t5067*t4570;
  t5071 = t5069 + t5070;
  t5073 = t4562*t5067;
  t5074 = -1.*t4725*t4522*t4570;
  t5075 = t5073 + t5074;
  t5077 = -1.*t4604*t5071;
  t5078 = t4590*t5075;
  t5079 = t5077 + t5078;
  t5081 = t4590*t5071;
  t5082 = t4604*t5075;
  t5083 = t5081 + t5082;
  t5085 = t4635*t5079;
  t5086 = t4631*t5083;
  t5087 = t5085 + t5086;
  t5089 = t4631*t5079;
  t5090 = -1.*t4635*t5083;
  t5091 = t5089 + t5090;
  t5103 = t4430*t4431;
  t5104 = t4442*t4443*t4444;
  t5105 = t5103 + t5104;
  t5107 = -1.*t5105*t4482;
  t5108 = t4974 + t5107;
  t5112 = -1.*t1018*t5105;
  t5113 = t5112 + t4980;
  t5115 = t4562*t5108*t4522;
  t5116 = t5113*t4570;
  t5117 = t5115 + t5116;
  t5119 = t4562*t5113;
  t5120 = -1.*t5108*t4522*t4570;
  t5121 = t5119 + t5120;
  t5123 = -1.*t4604*t5117;
  t5124 = t4590*t5121;
  t5125 = t5123 + t5124;
  t5127 = t4590*t5117;
  t5128 = t4604*t5121;
  t5129 = t5127 + t5128;
  t5131 = t4635*t5125;
  t5132 = t4631*t5129;
  t5133 = t5131 + t5132;
  t5135 = t4631*t5125;
  t5136 = -1.*t4635*t5129;
  t5137 = t5135 + t5136;
  t5021 = 0.1305*t4504*t5020;
  t5022 = t5020*t4525;
  t5023 = t5020*t4522*t4575;
  t5027 = t5026*t4586;
  t5031 = t4611*t5030;
  t5035 = t4624*t5034;
  t5039 = t4638*t5038;
  t5043 = t4647*t5042;
  t5047 = t4666*t5046;
  t5051 = t4680*t5050;
  t5052 = -1.*t4663*t5046;
  t5053 = t4655*t5050;
  t5054 = t5052 + t5053;
  t5055 = -1.1135*t5054;
  t5056 = t4655*t5046;
  t5057 = t4663*t5050;
  t5058 = t5056 + t5057;
  t5059 = -0.0216*t5058;
  t4711 = t4504*t4708;
  t4712 = -1.*t4430*t4528*t4522;
  t4714 = t4711 + t4712;
  t5165 = -1.*t4562*t4604*t4714;
  t5166 = -1.*t4590*t4714*t4570;
  t5167 = t5165 + t5166;
  t5169 = t4590*t4562*t4714;
  t5170 = -1.*t4604*t4714*t4570;
  t5171 = t5169 + t5170;
  t5173 = t4635*t5167;
  t5174 = t4631*t5171;
  t5175 = t5173 + t5174;
  t5177 = t4631*t5167;
  t5178 = -1.*t4635*t5171;
  t5179 = t5177 + t5178;
  t5151 = 0.135*t4504;
  t5152 = -0.049*t4522;
  t5153 = t5151 + t5152;
  t5155 = 0.049*t4504;
  t5156 = t5155 + t4530;
  t5191 = t1018*t5105;
  t5192 = t4971*t4482;
  t5193 = t5191 + t5192;
  t5195 = t4504*t5193;
  t5196 = -1.*t4528*t4442*t4522;
  t5197 = t5195 + t5196;
  t5204 = -1.*t4562*t4604*t5197;
  t5205 = -1.*t4590*t5197*t4570;
  t5206 = t5204 + t5205;
  t5208 = t4590*t4562*t5197;
  t5209 = -1.*t4604*t5197*t4570;
  t5210 = t5208 + t5209;
  t5212 = t4635*t5206;
  t5213 = t4631*t5210;
  t5214 = t5212 + t5213;
  t5216 = t4631*t5206;
  t5217 = -1.*t4635*t5210;
  t5218 = t5216 + t5217;
  t5230 = t4528*t1018*t4444;
  t5231 = t4528*t4431*t4482;
  t5232 = t5230 + t5231;
  t5234 = t4504*t5232;
  t5235 = t4443*t4522;
  t5236 = t5234 + t5235;
  t5244 = -1.*t4562*t4604*t5236;
  t5245 = -1.*t4590*t5236*t4570;
  t5246 = t5244 + t5245;
  t5248 = t4590*t4562*t5236;
  t5249 = -1.*t4604*t5236*t4570;
  t5250 = t5248 + t5249;
  t5252 = t4635*t5246;
  t5253 = t4631*t5250;
  t5254 = t5252 + t5253;
  t5256 = t4631*t5246;
  t5257 = -1.*t4635*t5250;
  t5258 = t5256 + t5257;
  t5276 = -1.*t4562*t4720;
  t5277 = -1.*t4725*t4570;
  t5278 = t5276 + t5277;
  t5281 = t4604*t5278;
  t5282 = t5281 + t4740;
  t5284 = t4590*t5278;
  t5285 = -1.*t4604*t4736;
  t5286 = t5284 + t5285;
  t5288 = -1.*t4635*t5282;
  t5289 = t4631*t5286;
  t5290 = t5288 + t5289;
  t5292 = t4631*t5282;
  t5293 = t4635*t5286;
  t5294 = t5292 + t5293;
  t5269 = 0.049*t4562;
  t5270 = t5269 + t4573;
  t5272 = -0.09*t4562;
  t5273 = -0.049*t4570;
  t5274 = t5272 + t5273;
  t5306 = t4528*t4504*t4442;
  t5307 = t5193*t4522;
  t5308 = t5306 + t5307;
  t5310 = -1.*t4562*t5308;
  t5311 = -1.*t5108*t4570;
  t5312 = t5310 + t5311;
  t5314 = t4562*t5108;
  t5315 = -1.*t5308*t4570;
  t5316 = t5314 + t5315;
  t5318 = t4604*t5312;
  t5319 = t4590*t5316;
  t5320 = t5318 + t5319;
  t5322 = t4590*t5312;
  t5323 = -1.*t4604*t5316;
  t5324 = t5322 + t5323;
  t5326 = -1.*t4635*t5320;
  t5327 = t4631*t5324;
  t5328 = t5326 + t5327;
  t5330 = t4631*t5320;
  t5331 = t4635*t5324;
  t5332 = t5330 + t5331;
  t5344 = -1.*t4504*t4443;
  t5345 = t5232*t4522;
  t5346 = t5344 + t5345;
  t5348 = -1.*t4562*t5346;
  t5349 = -1.*t5020*t4570;
  t5350 = t5348 + t5349;
  t5352 = t4562*t5020;
  t5353 = -1.*t5346*t4570;
  t5354 = t5352 + t5353;
  t5356 = t4604*t5350;
  t5357 = t4590*t5354;
  t5358 = t5356 + t5357;
  t5360 = t4590*t5350;
  t5361 = -1.*t4604*t5354;
  t5362 = t5360 + t5361;
  t5364 = -1.*t4635*t5358;
  t5365 = t4631*t5362;
  t5366 = t5364 + t5365;
  t5368 = t4631*t5358;
  t5369 = t4635*t5362;
  t5370 = t5368 + t5369;
  t5389 = -1.*t4590*t4731;
  t5390 = t5389 + t5285;
  t5392 = -1.*t4635*t4741;
  t5393 = t4631*t5390;
  t5394 = t5392 + t5393;
  t5396 = t4635*t5390;
  t5397 = t4753 + t5396;
  t5381 = -0.21*t4590;
  t5382 = -0.049*t4604;
  t5383 = t5381 + t5382;
  t5385 = 0.049*t4590;
  t5386 = t5385 + t4607;
  t5408 = t4562*t5308;
  t5409 = t5108*t4570;
  t5410 = t5408 + t5409;
  t5413 = -1.*t4604*t5410;
  t5414 = t5413 + t5319;
  t5416 = -1.*t4590*t5410;
  t5417 = t5416 + t5323;
  t5419 = -1.*t4635*t5414;
  t5420 = t4631*t5417;
  t5421 = t5419 + t5420;
  t5423 = t4631*t5414;
  t5424 = t4635*t5417;
  t5425 = t5423 + t5424;
  t5436 = t4562*t5346;
  t5437 = t5020*t4570;
  t5438 = t5436 + t5437;
  t5441 = -1.*t4604*t5438;
  t5442 = t5441 + t5357;
  t5444 = -1.*t4590*t5438;
  t5445 = t5444 + t5361;
  t5447 = -1.*t4635*t5442;
  t5448 = t4631*t5445;
  t5449 = t5447 + t5448;
  t5451 = t4631*t5442;
  t5452 = t4635*t5445;
  t5453 = t5451 + t5452;
  t5471 = -1.*t4631*t4747;
  t5472 = t5392 + t5471;
  t4758 = t4655*t4755;
  t5464 = 0.0016*t4631;
  t5465 = t5464 + t4646;
  t5467 = -0.2707*t4631;
  t5468 = -0.0016*t4635;
  t5469 = t5467 + t5468;
  t5484 = t4590*t5410;
  t5485 = t4604*t5316;
  t5486 = t5484 + t5485;
  t5488 = -1.*t4631*t5486;
  t5489 = t5419 + t5488;
  t5491 = -1.*t4635*t5486;
  t5492 = t5423 + t5491;
  t5504 = t4590*t5438;
  t5505 = t4604*t5354;
  t5506 = t5504 + t5505;
  t5508 = -1.*t4631*t5506;
  t5509 = t5447 + t5508;
  t5511 = -1.*t4635*t5506;
  t5512 = t5451 + t5511;
  t4757 = -1.*t4663*t4751;
  t4759 = t4757 + t4758;
  t5479 = -1.*t4663*t4755;
  t5523 = -0.7055*t4655;
  t5524 = 0.0184*t4663;
  t5525 = t5523 + t5524;
  t5527 = -0.0184*t4655;
  t5528 = t5527 + t4665;
  t5535 = t4635*t5414;
  t5536 = t4631*t5486;
  t5537 = t5535 + t5536;
  t5495 = t4655*t5492;
  t5499 = -1.*t4663*t5492;
  t5547 = t4635*t5442;
  t5548 = t4631*t5506;
  t5549 = t5547 + t5548;
  t5515 = t4655*t5512;
  t5519 = -1.*t4663*t5512;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4428*t4448 + t4479*t4495 + t4503*t4525 + 0.1305*(t4503*t4504 + t4442*t4522*t4528) - 1.*t4442*t4528*t4532 + t4559*t4575 + t4581*t4586 + t4611*t4616 + t4624*t4629 + t4638*t4642 + t4647*t4652 + t4666*t4672 + t4680*t4684 - 1.1135*(-1.*t4663*t4672 + t4655*t4684) - 0.0216*(t4655*t4672 + t4663*t4684);
  p_output1[10]=t4430*t4528*t4532 + t4428*t4700 + t4495*t4704 + t4525*t4708 + 0.1305*t4714 + t4575*t4720 + t4586*t4725 + t4611*t4731 + t4624*t4736 + t4638*t4741 + t4647*t4747 + t4666*t4751 + t4680*t4755 - 0.0216*(t4655*t4751 + t4663*t4755) - 1.1135*t4759;
  p_output1[11]=0;
  p_output1[12]=t4428*t4430*t4444*t4528 + t4430*t4431*t4495*t4528 - 1.*t4430*t4443*t4532 + t4525*t4770 + 0.1305*(t4430*t4443*t4522 + t4504*t4770) + t4575*t4779 + t4586*t4783 + t4611*t4787 + t4624*t4791 + t4638*t4795 + t4647*t4799 + t4666*t4803 + t4680*t4807 - 1.1135*(-1.*t4663*t4803 + t4655*t4807) - 0.0216*(t4655*t4803 + t4663*t4807);
  p_output1[13]=t4428*t4442*t4444*t4528 + t4431*t4442*t4495*t4528 - 1.*t4442*t4443*t4532 + t4525*t4822 + 0.1305*(t4442*t4443*t4522 + t4504*t4822) + t4575*t4831 + t4586*t4835 + t4611*t4839 + t4624*t4843 + t4638*t4847 + t4647*t4851 + t4666*t4855 + t4680*t4859 - 1.1135*(-1.*t4663*t4855 + t4655*t4859) - 0.0216*(t4655*t4855 + t4663*t4859);
  p_output1[14]=-1.*t4428*t4443*t4444 - 1.*t4431*t4443*t4495 - 1.*t4528*t4532 + t4525*t4874 + 0.1305*(t4522*t4528 + t4504*t4874) + t4575*t4883 + t4586*t4887 + t4611*t4891 + t4624*t4895 + t4638*t4899 + t4647*t4903 + t4666*t4907 + t4680*t4911 - 1.1135*(-1.*t4663*t4907 + t4655*t4911) - 0.0216*(t4655*t4907 + t4663*t4911);
  p_output1[15]=t4428*t4704 + t4495*t4925 + 0.1305*t4504*t4928 + t4525*t4928 + t4522*t4575*t4928 + t4586*t4934 + t4611*t4938 + t4624*t4942 + t4638*t4946 + t4647*t4950 + t4666*t4954 + t4680*t4958 - 1.1135*(-1.*t4663*t4954 + t4655*t4958) - 0.0216*(t4655*t4954 + t4663*t4958);
  p_output1[16]=t4448*t4495 + t4428*t4971 + 0.1305*t4504*t4976 + t4525*t4976 + t4522*t4575*t4976 + t4586*t4981 + t4611*t4985 + t4624*t4989 + t4638*t4993 + t4647*t4997 + t4666*t5001 + t4680*t5005 - 1.1135*(-1.*t4663*t5001 + t4655*t5005) - 0.0216*(t4655*t5001 + t4663*t5005);
  p_output1[17]=t4428*t4431*t4528 - 1.*t4444*t4495*t4528 + t5021 + t5022 + t5023 + t5027 + t5031 + t5035 + t5039 + t5043 + t5047 + t5051 + t5055 + t5059;
  p_output1[18]=0.135*t4482*t4700 - 0.135*t1018*t4704 + 0.1305*t4504*t4725 + t4525*t4725 + t4522*t4575*t4725 + t4586*t5067 + t4611*t5071 + t4624*t5075 + t4638*t5079 + t4647*t5083 + t4666*t5087 + t4680*t5091 - 1.1135*(-1.*t4663*t5087 + t4655*t5091) - 0.0216*(t4655*t5087 + t4663*t5091);
  p_output1[19]=-0.135*t1018*t4971 + 0.135*t4482*t5105 + 0.1305*t4504*t5108 + t4525*t5108 + t4522*t4575*t5108 + t4586*t5113 + t4611*t5117 + t4624*t5121 + t4638*t5125 + t4647*t5129 + t4666*t5133 + t4680*t5137 - 1.1135*(-1.*t4663*t5133 + t4655*t5137) - 0.0216*(t4655*t5133 + t4663*t5137);
  p_output1[20]=-0.135*t1018*t4431*t4528 + 0.135*t4444*t4482*t4528 + t5021 + t5022 + t5023 + t5027 + t5031 + t5035 + t5039 + t5043 + t5047 + t5051 + t5055 + t5059;
  p_output1[21]=0.1305*(-1.*t4430*t4504*t4528 - 1.*t4522*t4708) + t4575*t4714 + t4562*t4611*t4714 - 1.*t4570*t4624*t4714 + t4430*t4528*t5153 + t4708*t5156 + t4638*t5167 + t4647*t5171 + t4666*t5175 + t4680*t5179 - 1.1135*(-1.*t4663*t5175 + t4655*t5179) - 0.0216*(t4655*t5175 + t4663*t5179);
  p_output1[22]=t4442*t4528*t5153 + t5156*t5193 + 0.1305*(t4556 - 1.*t4522*t5193) + t4575*t5197 + t4562*t4611*t5197 - 1.*t4570*t4624*t5197 + t4638*t5206 + t4647*t5210 + t4666*t5214 + t4680*t5218 - 1.1135*(-1.*t4663*t5214 + t4655*t5218) - 0.0216*(t4655*t5214 + t4663*t5218);
  p_output1[23]=-1.*t4443*t5153 + t5156*t5232 + 0.1305*(t4443*t4504 - 1.*t4522*t5232) + t4575*t5236 + t4562*t4611*t5236 - 1.*t4570*t4624*t5236 + t4638*t5246 + t4647*t5250 + t4666*t5254 + t4680*t5258 - 1.1135*(-1.*t4663*t5254 + t4655*t5258) - 0.0216*(t4655*t5254 + t4663*t5258);
  p_output1[24]=t4611*t4736 + t4725*t5270 + t4720*t5274 + t4624*t5278 + t4647*t5282 + t4638*t5286 + t4680*t5290 + t4666*t5294 - 0.0216*(t4663*t5290 + t4655*t5294) - 1.1135*(t4655*t5290 - 1.*t4663*t5294);
  p_output1[25]=t5108*t5270 + t5274*t5308 + t4624*t5312 + t4611*t5316 + t4647*t5320 + t4638*t5324 + t4680*t5328 + t4666*t5332 - 0.0216*(t4663*t5328 + t4655*t5332) - 1.1135*(t4655*t5328 - 1.*t4663*t5332);
  p_output1[26]=t5020*t5270 + t5274*t5346 + t4624*t5350 + t4611*t5354 + t4647*t5358 + t4638*t5362 + t4680*t5366 + t4666*t5370 - 0.0216*(t4663*t5366 + t4655*t5370) - 1.1135*(t4655*t5366 - 1.*t4663*t5370);
  p_output1[27]=t4647*t4741 + t4731*t5383 + t4736*t5386 + t4638*t5390 + t4680*t5394 + t4666*t5397 - 0.0216*(t4663*t5394 + t4655*t5397) - 1.1135*(t4655*t5394 - 1.*t4663*t5397);
  p_output1[28]=t5316*t5386 + t5383*t5410 + t4647*t5414 + t4638*t5417 + t4680*t5421 + t4666*t5425 - 0.0216*(t4663*t5421 + t4655*t5425) - 1.1135*(t4655*t5421 - 1.*t4663*t5425);
  p_output1[29]=t5354*t5386 + t5383*t5438 + t4647*t5442 + t4638*t5445 + t4680*t5449 + t4666*t5453 - 0.0216*(t4663*t5449 + t4655*t5453) - 1.1135*(t4655*t5449 - 1.*t4663*t5453);
  p_output1[30]=t4666*t4755 + t4741*t5465 + t4747*t5469 + t4680*t5472 - 0.0216*(t4758 + t4663*t5472) - 1.1135*(t4655*t5472 + t5479);
  p_output1[31]=t5414*t5465 + t5469*t5486 + t4680*t5489 + t4666*t5492 - 0.0216*(t4663*t5489 + t5495) - 1.1135*(t4655*t5489 + t5499);
  p_output1[32]=t5442*t5465 + t5469*t5506 + t4680*t5509 + t4666*t5512 - 0.0216*(t4663*t5509 + t5515) - 1.1135*(t4655*t5509 + t5519);
  p_output1[33]=-0.0216*t4759 - 1.1135*(-1.*t4655*t4751 + t5479) + t4751*t5525 + t4755*t5528;
  p_output1[34]=t5492*t5528 + t5525*t5537 - 1.1135*(t5499 - 1.*t4655*t5537) - 0.0216*(t5495 - 1.*t4663*t5537);
  p_output1[35]=t5512*t5528 + t5525*t5549 - 1.1135*(t5519 - 1.*t4655*t5549) - 0.0216*(t5515 - 1.*t4663*t5549);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
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

#include "J_toe_joint_left_mex.hh"

namespace SymExpression
{

void J_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE