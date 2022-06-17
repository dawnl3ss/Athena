#ifndef ATHENA_FACTORY_H
#define ATHENA_FACTORY_H

#include "geometry/vector/vector.cpp"
#include "geometry/polygon/type/triangle.cpp"

vector* new_vector(int x, int y);
triangle* new_triangle(int AB, int BC, int AC);

#endif
