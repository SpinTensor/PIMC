#include <math.h>
#include "MT_random.h"
#include "periodic.h"

void path_construct(double* ri, double* rj, int l, double mass, double tau,
                    enum cell_type cellshape, double cellsize,
                    rng_gaussian_type* rng_gaussian, double* new_path) {
   double imass = 1.0/mass;
   double rs[3], re[3];
   // dealing with periodicity
   for (int idim=0; idim<3; idim++){
      rs[idim] = ri[idim];
   }
   for (int idim=0; idim<3; idim++){
      re[idim] = rj[idim] - rs[idim];
   }
   apply_pbc(re, cellsize, cellshape);
   for (int idim=0; idim<3; idim++){
      re[idim] += rs[idim];
   }
   // first construciton by hand
   // reusable weight factor 1/(l+1)
   double rk = (double) l;
   double weight = 1.0/(rk+1.0);
   // staging mass needed for modified standard deviation
   double istagemass = rk * weight * imass;
   // proposing new positions
   for (int idim=0; idim<3; idim++){
      new_path[idim] = sqrt(tau*istagemass) * next_random_gaussian(rng_gaussian);
      new_path[idim] += weight*(re[idim]+rk*rs[idim]);
   }

   for (int istage=1; istage<l; istage++){
      // reusable weight factor 1/(k+1)
      rk = (double) (l-istage);
      weight = 1.0/(rk+1.0);
      // staging mass needed for modified variance
      istagemass = rk * weight * imass;
      // proposing new positions
      for (int idim=0; idim<3; idim++){
         new_path[istage*3+idim] = sqrt(tau*istagemass) * next_random_gaussian(rng_gaussian);
         new_path[istage*3+idim] += weight*(rk*new_path[(istage-1)*3+idim]+re[idim]);
      }
   }

   return;
}
