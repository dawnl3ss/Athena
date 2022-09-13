#include "search.h"

bool search::linear_search(std::vector<int> haystack, int needle) {
    for (unsigned int i = 0; i < haystack.size(); i++){
        if (haystack[i] == needle) return true;
    }
    std::cout << std::endl;
    return false;
}