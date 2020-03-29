#include <stdlib.h>
#include "mc_types.h"
#include "periodic.h"
#include "permtables.h"

mcSystem_type init_mc_system(int nsteps, int natoms, int nbeads, 
                             double kT, double mass, 
                             enum cell_type cell_type, double density, 
                             int stage_l, double worm_centroid_drmax, double worm_open_close_scale,
                             bool worm_allow_open, int seed){
   mcSystem_type mcSystem;
   mcSystem.nsteps = nsteps;
   mcSystem.natoms = natoms;
   mcSystem.nbeads = nbeads;

   mcSystem.hb2m = 100;
   mcSystem.tau = 100;

   mcSystem.cell_type = cell_type;
   mcSystem.density = density;
   mcSystem.cell_size = 0.0;

   mcSystem.worm_staging_l = stage_l;
   mcSystem.worm_centroid_drmax = worm_centroid_drmax;
   mcSystem.worm_open_close_scale = worm_open_close_scale;

   //double rtmp = 2.0*PI*mcSystem.hb2m;
   //rtmp = sqrt(rtmp);
   //rtmp = rtmp*rtmp*rtmp;
   //rtmp *= mcSystem.worm_open_close_scale;
   //mcSystem.worm_ln_openclose_scale
   mcSystem.worm_allow_open = false;
   mcSystem.worm_show_statistics = false;

   mcSystem.worm_xtra_bead[0] = 0.0;
   mcSystem.worm_xtra_bead[1] = 0.0;
   mcSystem.worm_xtra_bead[2] = 0.0;
   mcSystem.worm_xtra_bead_work[0] = 0.0;
   mcSystem.worm_xtra_bead_work[1] = 0.0;
   mcSystem.worm_xtra_bead_work[2] = 0.0;
   mcSystem.worm_atom_idx = 0;
   mcSystem.worm_bead_idx = 0;
   mcSystem.worm_atom_idx_work = 0;
   mcSystem.worm_bead_idx_work = 0;
   mcSystem.iw = 0;
   mcSystem.it = 0;
   mcSystem.worm_is_closed = true;

	// init positions
   mcSystem.pos = (double*)malloc(3*nbeads*natoms*sizeof(double));
   mcSystem.wpos = (double*)malloc(3*nbeads*natoms*sizeof(double));

   mcSystem.ptab = init_ptable(natoms);
   mcSystem.iptab = init_iptable(natoms, mcSystem.ptab);
   mcSystem.rng_uniform = init_rng_uniform(seed, 0.0, 1.0);
   mcSystem.rng_gaussian = init_rng_gaussian(2*seed, 0.0, 1.0);

   return mcSystem;
}

void free_mc_system(mcSystem_type* mcSystem){
   mcSystem->nsteps = 0.0;
   mcSystem->natoms = 0.0;
   mcSystem->nbeads = 0.0;

   mcSystem->hb2m = 0.0;
   mcSystem->tau = 0.0;

   mcSystem->cell_type = 0.0;
   mcSystem->density = 0.0;
   mcSystem->cell_size = 0.0;

   mcSystem->worm_staging_l = 0.0;
   mcSystem->worm_centroid_drmax = 0.0;
   mcSystem->worm_open_close_scale = 0.0;

   mcSystem->worm_allow_open = 0.0;
   mcSystem->worm_show_statistics = 0.0;

   mcSystem->worm_xtra_bead[0] = 0.0;
   mcSystem->worm_xtra_bead[1] = 0.0;
   mcSystem->worm_xtra_bead[2] = 0.0;
   mcSystem->worm_xtra_bead_work[0] = 0.0;
   mcSystem->worm_xtra_bead_work[1] = 0.0;
   mcSystem->worm_xtra_bead_work[2] = 0.0;
   mcSystem->worm_atom_idx = 0.0;
   mcSystem->worm_bead_idx = 0.0;
   mcSystem->worm_atom_idx_work = 0.0;
   mcSystem->worm_bead_idx_work = 0.0;
   mcSystem->iw = 0.0;
   mcSystem->it = 0.0;
   mcSystem->worm_is_closed = 0.0;

   free(mcSystem->pos);
   mcSystem->pos = NULL;
   free(mcSystem->wpos);
   mcSystem->wpos = NULL;
   free(mcSystem->ptab);
   mcSystem->ptab = NULL;
   free(mcSystem->iptab);
   mcSystem->iptab = NULL;
}

//void init_pos(
