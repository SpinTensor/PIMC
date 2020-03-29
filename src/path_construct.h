#ifndef PATH_CONSTRUCT_H
#define PATH_CONSTRUCT_H

#include "MT_random.h"

void path_construct(double* ri, double* rj, int l, double mass, double tau,
                    enum cell_type cellshape, double cellsize,
                    rng_gaussian_type* rng_gaussian, double* new_path);

#endif
