#include <iostream>
#include "src/factory.cpp"

int main(){
    triangle* triangle = new_triangle(2, 6, 3, true);
    std::cout << triangle->get_area() << std::endl;
    /*std::vector<int> test{ 10, 20, 30 };
    std::cout << dichotomy_search(test, 20) << std::endl;*/
    return 0;
}