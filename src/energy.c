#include <math.h>

double aziz79(double r){
   const double d = 1.241314;
   const double a = 0.54485046e6;
   const double alpha = 13.353384;
   const double c6 = 1.3732412;
   const double c8 = 0.4253785;
   const double c10 = 0.178100;
   const double eps = 3.4236e-5;
   const double rm = 5.607383926;

   const double x = r/rm; 
   const double ix = 1.0/x;
   const double ix2 = ix*ix;
   const double ix6  = ix2*ix2*ix2;
   double h = 1.0;

   if (x < d) {
      h = d*ix-1.0;
      h = h*h;
      h = exp(-h);
   }

   double u = (c8 + c10 * ix2);
   u = c6 + ix2 * u;
   u = ix6 * u * h;
   u =  a * exp(-alpha*x) - u;
   return eps * u;
}
