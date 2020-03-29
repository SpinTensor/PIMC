#ifndef PERIODIC_H
#define PERIODIC_H
   enum cell_type {none, cube, trocta} cell_type;

   void apply_pbc(double* vec, double cellsize, enum cell_type cellshape);
#endif
