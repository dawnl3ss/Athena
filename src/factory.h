#ifndef ATHENA_FACTORY_H
#define ATHENA_FACTORY_H

#include "geometry/vector/vector.cpp"
#include "geometry/polygon/type/triangle.cpp"
#include "geometry/polygon/type/square.cpp"

vector* new_vector(int x, int y);
triangle* new_triangle(int a, int b, int c);
square* new_square(int side);

#endif
