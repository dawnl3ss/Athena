#ifndef ATHENA_BINOMIAL_H
#define ATHENA_BINOMIAL_H

#include "../polynomial.cpp"

class binomial : public polynomial {
    
public:
    binomial(float a, float b);
    float resolve();
};

#endif