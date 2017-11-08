/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_Multisense_src.h"

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
  double t1474;
  double t2994;
  double t979;
  double t3306;
  double t3361;
  double t3410;
  t1474 = Cos(var1[4]);
  t2994 = Sin(var1[3]);
  t979 = Cos(var1[3]);
  t3306 = Sin(var1[4]);
  t3361 = Cos(var1[5]);
  t3410 = Sin(var1[5]);
  p_output1[0]=t1474*t979;
  p_output1[1]=t1474*t2994;
  p_output1[2]=-1.*t3306;
  p_output1[3]=-1.*t2994*t3361 + t3306*t3410*t979;
  p_output1[4]=t2994*t3306*t3410 + t3361*t979;
  p_output1[5]=t1474*t3410;
  p_output1[6]=t2994*t3410 + t3306*t3361*t979;
  p_output1[7]=t2994*t3306*t3361 - 1.*t3410*t979;
  p_output1[8]=t1474*t3361;
}



void R_Multisense_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}