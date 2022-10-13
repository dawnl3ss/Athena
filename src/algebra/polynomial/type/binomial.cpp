#include "binomial.h"

binomial::binomial(float a, float b) : polynomial(a, b, 0.0){}

float binomial::resolve(){
    if (this->a != 0){
        return (-(this->b) / this->a);
    }
    return -1.0;
}