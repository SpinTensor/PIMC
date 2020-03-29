#include <stdlib.h>
#include "MT_random.h"

void init_coordinates_droplet(int natoms, int nbeads, double hb2m, double tau, double kT,
                              double radius, rng_uniform_type rng_uniform, double* pos){

   const double = 5.669177966;
   
   for (int ia=0; ia<natoms; ia++){
   int iter = 0;
   bool invalidpos = true;
   double centroids[natoms*3];
   while (invalidpos) {
      invalidpos = false;
      iter++;
      // if sampling fails to often, reduce he he criterion
      double minHeHedsttmp = pow(0.9, (double) (iter/100))*minHeHedst;
      double rvec[3];
      double r2 = 0.0;
      for (int ic=0; ic<3; ic++){
         rvec[ic] = next_random_uniform(&rng_uniform);
         rvec[ic] = 2.0*rvek[ic]-1.0;
         rvec[ic] *= radius;
         centroids[ic+3*ia] = rvec[ic]
         r2 += rvec[ic]*rvec[ic];
      }
      // check if helium is outside of the droplet
      if (r2 > radius*radius) {
         invalidpos = true;
      } else {
         // check for helium-helium collision
         for (int id=0; id<ia-1; id++){
            r2 = 0.0;
            for (int ic=0; ic<3; ic++){
               double tmp = centroids[ic+3*ia]-centroids[ic+3*id];
               r2 += tmp*tmp;
            }
            if (r2 < minHeHedsttmp*minHeHedsttmp){
               invalidpos = true;
               break
            }
         }
      }
   }
   // do thermal gaussian delocalization of hot start
   if (kT > 0.0) {
   
   } else {
      for (int ia=0; ia<natoms; ia++){
         for (int ib=0; ib<nbeads; ib++){
            for (int ic=0; ic<3; ic++) {
               pos[ic+3*ib+3*nbeads*ia] = centroids[ic+3*ia];
            }
         }
      }
   }
}
