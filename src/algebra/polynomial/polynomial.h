#ifndef ATHENA_POLYNOMIAL_H
#define ATHENA_POLYNOMIAL_H

#include "../algebra.h"

class polynomial : public algebra {

public:
    int x = 0,
        a = 0,
        b = 0,
        c = 0;

public:
    polynomial(int a, int b, int c = 0);
    int resolve();
};

#endif