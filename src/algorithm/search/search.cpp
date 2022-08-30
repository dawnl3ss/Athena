#include "search.h"

bool search::linear_search(std::vector<int> haystack, int needle) {
    for (unsigned int i = 0; i < haystack.size(); i++){
        std::cout << haystack.at(i) << " ";
    }
    std::cout << std::endl;
    return true;
}