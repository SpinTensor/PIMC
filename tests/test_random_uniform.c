#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MT_random.h"

int main(int argc, char **argv){

   bool passed = (argc == 1) ;

   rng_uniform_type rng_uniform = init_rng_uniform(123456, -1, 1);

   for (int i=0; i<65535;i++){
      next_random_uniform(&rng_uniform);
   }

   char* state = get_random_state_uniform(&rng_uniform);
   rng_uniform_type rng_uniform2 = restore_rng_state_uniform(state);
   free(state);
   state = NULL;

   double rng1, rng2;
   for (int i=0; i<65535; i++){
      rng1 = next_random_uniform(&rng_uniform);
      rng2 = next_random_uniform(&rng_uniform2);
      passed = passed && (rng1 == rng2);
   }

   passed = passed && (0.599877776368120230 == rng1);

   if (passed) {
      printf("%-72s[PASSED]\n", argv[0]);
   }else{
      printf("%-72s[ FAIL ]\n", argv[0]);
   }

}
