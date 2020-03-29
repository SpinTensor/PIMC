#include <stdio.h>
#include <stdlib.h>
#include "periodic.h"

void apply_pbc_cube(double* vec, double cellsize);
void apply_pbc_trocta(double* vec, double cellsize);

void apply_pbc(double* vec, double cellsize, enum cell_type cellshape){
   switch (cellshape){
   case cube:
      apply_pbc_cube(vec, cellsize);
      break;
   case trocta:
      apply_pbc_trocta(vec, cellsize);
      break;
   case none:
      break;
   default:
      printf("Encountered undefined cellshape for periodic boundary conditions");
      abort();
   }
}

void apply_pbc_cube(double* vec, double cellsize){
   double invcellsize = 1.0 / cellsize;
    for (int idim=0; idim<3; idim++){
       double s = invcellsize * vec[idim];
       if (s > 0.5) {
          s = s - (double)((int)(s+0.5));
       }else if (s < -0.5) {
          s = s - (double)((int)(s-0.5));
       }
       vec[idim] = s * cellsize;
    }
}

void apply_pbc_trocta(double*vec, double cellsize){
   double invcellsize = 1.0 / cellsize;
   double r[3];
   double s[3];
   for (int idim=0; idim<3; idim++){
      r[idim] = vec[idim]*invcellsize;
      if (r[idim] > 0.5) {
         r[idim] = r[idim] - (double)((int)r[idim]+0.5);
      } else if (r[idim] < -0.5) {
         r[idim] = r[idim] - (double)((int)r[idim]-0.5);
      }  
   }  
   double corr = 0.0;
   for (int idim=0; idim<3;idim++){
      if (r[idim] > 0.0) {
         corr += r[idim];
         s[idim] = 0.5;
      } else {
         corr -= r[idim];
         s[idim] = -0.5;
      }  
   }  
   if (corr > 0.75) {
      for (int idim=0; idim<3; idim++){
         r[idim] = r[idim] - s[idim];
      }  
   }  
   for (int idim=0; idim<3; idim++){
      vec[idim] = r[idim] * cellsize;
   }
}
