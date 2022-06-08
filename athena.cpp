#include <iostream>
#include "src/factory.cpp"

int main(){
    vector* vec1 = new_vector(2, 5);
    vector* vec2 = new_vector(4, 11);
    std::cout << vec1->is_collinear(vec2) << std::endl;
    return 0;
}