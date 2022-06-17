#include <iostream>
#include "src/factory.cpp"

int main(){
    triangle* triangle = new_triangle(2, 5, 3);
    std::cout << triangle->get_perimeter() << std::endl;
    return 0;
}