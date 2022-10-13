#ifndef ATHENA_FACTORY_H
#define ATHENA_FACTORY_H

#include "geometry/vector/vector.cpp"
#include "geometry/polygon/type/triangle.cpp"
#include "geometry/polygon/type/square.cpp"
#include "algebra/polynomial/type/binomial.cpp"
#include "algorithm/search/search.cpp"

vector* new_vector(int x, int y);
triangle* new_triangle(int a, int b, int c);
square* new_square(int side);
binomial* new_binomial(float a, float b);
bool linear_search(std::vector<int> array, int needle);
bool dichotomy_search(std::vector<int> array, int needle);

#endif
