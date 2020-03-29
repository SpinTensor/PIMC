#include <stdlib.h>

int* init_ptable(int n){
   int* ptab = (int*)malloc(n*sizeof(int));
   for (int i=0; i<n; i++){
      ptab[i] = i;
   }

   return ptab;
}

void invert_ptable(int n, int* ptable, int* iptable){
   for (int i=0; i<n; i++){
      iptable[ptable[i]] = i;
   }
   return;
}

int* init_iptable(int n, int* ptab){
   int* iptab = (int*)malloc(n*sizeof(int));
   invert_ptable(n, ptab, iptab);
   return ptab;
}

