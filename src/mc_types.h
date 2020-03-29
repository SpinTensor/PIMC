#ifndef TYPES_H
#define TYPES_H
   #include <stdbool.h>
   #include "periodic.h"
   #include "MT_random.h"

   typedef struct mcSystem_s{
      // integer parameters
      int nsteps;
      int natoms;
      int nbeads;
      int naccept;
      // real parameters
      double hb2m;
      double tau;
      // pbc related
      enum cell_type cell_type;
      double density;
      double cell_size;
      // worm sampling parameters
      int worm_staging_l;
      double worm_centroid_drmax;
      double worm_open_close_scale;
      double worm_ln_openclose_scale;
      bool worm_allow_open, worm_show_statistics;
      // worm specific variables;
      double worm_xtra_bead[3], worm_xtra_bead_work[3];
      int worm_atom_idx, worm_bead_idx;
      int worm_atom_idx_work, worm_bead_idx_work;
      int iw, it;
      bool worm_is_closed;
      // atomic variables
      double* pos; 
      double* wpos;
      int* ptab;
      int* iptab;
      // random number generators
      rng_uniform_type rng_uniform;
      rng_gaussian_type rng_gaussian;
   } mcSystem_type ;
#endif
