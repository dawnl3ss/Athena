#include <iostream>
#include "src/factory.cpp"

int main(){
    triangle* triangle = new_triangle(2, 3, 6);
    std::cout << triangle->get_area() << std::endl;
    return 0;
}