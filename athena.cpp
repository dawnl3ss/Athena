#include <iostream>
#include "src/factory.cpp"

int main(){
    triangle* triangle = new_triangle(5, 0, 2, true);
    std::cout << triangle->pythagore() << std::endl;
    return 0;
}