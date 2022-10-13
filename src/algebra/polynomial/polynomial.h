#ifndef ATHENA_POLYNOMIAL_H
#define ATHENA_POLYNOMIAL_H

#include "../algebra.h"

class polynomial : public algebra {

public:
    float x = 0, a = 0, b = 0, c = 0;

public:
    polynomial(float a, float b, float c);
    float resolve();
};

#endif