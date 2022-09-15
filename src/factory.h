#ifndef ATHENA_FACTORY_H
#define ATHENA_FACTORY_H

#include "geometry/vector/vector.cpp"
#include "geometry/polygon/type/triangle.cpp"
#include "geometry/polygon/type/square.cpp"
#include "algorithm/search/search.cpp"

vector* new_vector(int x, int y);
triangle* new_triangle(int a, int b, int c);
square* new_square(int side);
bool linear_search(std::vector<int> array, int needle);
bool dichotomy_search(std::vector<int> array, int needle);

#endif
