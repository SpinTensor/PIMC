#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MT_random.h"

int main(int argc, char **argv){

   bool passed = (argc == 1) ;

   rng_int_type rng_int = init_rng_int(123456);

   for (int i=0; i<65535;i++){
      next_random_int(&rng_int);
   }

   char* state = get_random_state_int(&rng_int);
   rng_int_type rng_int2 = restore_rng_state_int(state);
   free(state);
   state = NULL;

   int rng1, rng2;
   for (int i=0; i<65535; i++){
      rng1 = next_random_int(&rng_int);
      rng2 = next_random_int(&rng_int2);
      passed = passed && (rng1 == rng2);
   }

   passed = passed && (-859255933 == rng1);

   if (passed) {
      printf("%-72s[PASSED]\n", argv[0]);
   }else{
      printf("%-72s[ FAIL ]\n", argv[0]);
   }

}
