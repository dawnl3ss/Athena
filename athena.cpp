#include <iostream>
#include "src/factory.cpp"

int main(){
    vector* vec1 = new_vector(2, 5);
    vector* vec2 = new_vector(2, 5);
    std::cout << vec1->dot_product(vec2) << std::endl;
    return 0;
}