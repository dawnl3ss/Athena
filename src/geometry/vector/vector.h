#ifndef ATHENA_VECTOR_H
#define ATHENA_VECTOR_H

#include "../geometry.h"

class vector : public geometry {

public:
    int x = 0, y = 0;

public:
    vector(int x, int y);
    float get_norm();
    float get_determinant(vector* vec);
    bool is_collinear(vector* vec);
};

#endif