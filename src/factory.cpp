#include "factory.h"

vector* new_vector(int x, int y){
    return new vector(x, y);
}

triangle* new_triangle(int AB, int BC, int AC){
    return new triangle(
        new segment(AB),
        new segment(BC),
        new segment(AC)
    );
}