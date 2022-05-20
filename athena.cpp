#include <iostream>
#include "src/geometry/vector/vector.cpp"

int main(){
    vector *vec = new vector(5, 6);
    std::cout << vec->get_norm() << std::endl;
    return 0;
}