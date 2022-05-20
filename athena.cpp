#include <iostream>
#include "src/factory.cpp"

int main(){
    std::cout << new_vector(2, 5)->get_norm() << std::endl;
    return 0;
}