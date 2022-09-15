#include "search.h"

bool search::linear_search(std::vector<int> haystack, int needle) {
    for (unsigned int i = 0; i < haystack.size(); i++){
        if (haystack[i] == needle) return true;
    }
    std::cout << std::endl;
    return false;
}

bool search::dichotomy_search(std::vector<int> haystack, int needle){
    int left = 0;
    int right = haystack.size();

    while (left <= right){
        int middle = round((left + right) / 2);

        if (haystack[middle] == needle){
            return true;
        } else if (haystack[middle] > needle){
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return false;
}