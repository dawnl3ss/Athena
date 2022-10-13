#include "factory.h"

vector* new_vector(int x, int y){
    return new vector(x, y);
}

triangle* new_triangle(int a, int b, int c, bool isRectangle = false){
    return new triangle(
        new segment(a),
        new segment(b),
        new segment(c),
        isRectangle
    );
}

square* new_square(int side){
    return new square(new segment(side));
}

binomial* new_binomial(float a, float b){
    return new binomial(a, b);
}

bool linear_search(std::vector<int> array, int needle){
    search* instance = new search();
    return instance->linear_search(array, needle);
}

bool dichotomy_search(std::vector<int> array, int needle){
    search* instance = new search();
    return instance->dichotomy_search(array, needle);
}