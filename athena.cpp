#include <iostream>
#include "src/factory.cpp"

int main(){
    triangle* triangl = new_triangle(2, 5, 3);
    std::cout << triangl->get_perimeter() << std::endl;
    return 0;
}