#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MT_random.h"

int main(int argc, char **argv){
   
   bool passed = (argc == 1) ;

   rng_gaussian_type rng_gaussian = init_rng_gaussian(123456, 1, 2);

   for (int i=0; i<65535;i++){
      next_random_gaussian(&rng_gaussian);
   }

   char* state = get_random_state_gaussian(&rng_gaussian);
   rng_gaussian_type rng_gaussian2 = restore_rng_state_gaussian(state);
   free(state);
   state = NULL;

   double rng1, rng2;
   for (int i=0; i<65535; i++){
      rng1 = next_random_gaussian(&rng_gaussian);
      rng2 = next_random_gaussian(&rng_gaussian2);
      passed = passed && (rng1 == rng2);
   }


   passed = passed && (-0.273359882927033837 == rng1);

   if (passed) {
      printf("%-72s[PASSED]\n", argv[0]);
   }else{
      printf("%-72s[ FAIL ]\n", argv[0]);
   }

}
