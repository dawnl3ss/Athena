#include <iostream>
#include "src/factory.cpp"

int main(){
    /*triangle* triangle = new_triangle(5, 0, 2, true);
    std::cout << triangle->pythagore() << std::endl;*/
    std::vector<int> test{ 10, 20, 30 };
    std::cout << linear_search(test, 320) << std::endl;
    return 0;
}