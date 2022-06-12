#include <iostream>
#include "src/factory.cpp"

int main(){
    vector* vec1 = new_vector(2, 5);
    vector* vec2 = new_vector(2, 5);
    vector* vec3 = vec1->add(vec2);
    std::cout << vec3->y << std::endl;
    return 0;
}