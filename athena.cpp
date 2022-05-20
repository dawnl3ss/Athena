#include <iostream>
#include "src/geometry/vector/vector.cpp"

int main(){
    vector *vec = new vector(5, 6);
    vector *vec2 = new vector(10, 12);
    std::cout << vec->get_determinant(vec2) << std::endl;
    return 0;
}