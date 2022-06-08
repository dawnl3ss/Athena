#include "vector.h"

vector::vector(int x, int y):
    x(x),
    y(y)
{}

float vector::get_norm(){
    return sqrt((this->x * this->x) + (this->y * this->y));
}

float vector::get_determinant(vector* vec){
    return (this->x * vec->y) - (vec->x * this->y);
}

float vector::dot_product(vector* vec){
    return (this->x * vec->x) + (this->y * vec->y);
}

bool vector::is_collinear(vector* vec){
    return this->get_determinant(vec) == 0;
}