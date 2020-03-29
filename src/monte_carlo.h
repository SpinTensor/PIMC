#ifndef MONTE_CARLO_H
#define MONTE_CARLO_H

mcSystem_type init_mc_system(int nsteps, int natoms, int nbeads, 
                             double kT, double mass, 
                             enum cell_type cell_type, double density, 
                             int stage_l, double worm_centroid_drmax, double worm_open_close_scale,
                             bool worm_allow_open, int seed);
void free_mc_system(mcSystem_type* mcSystem);

#endif
