#include "vector.h"

vector::vector(int x, int y):
    x(x),
    y(y)
{}

float vector::get_norm() {
    return sqrt((this->x * this->x) + (this->y * this->y));
}