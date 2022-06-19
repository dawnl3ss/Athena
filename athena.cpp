#include <iostream>
#include "src/factory.cpp"

int main(){
    square* square = new_square(5);
    std::cout << square->get_area() << std::endl;
    return 0;
}