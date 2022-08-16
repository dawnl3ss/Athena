#ifndef ATHENA_SEARCH_H
#define ATHENA_SEARCH_H

#include <vector>
#include <iostream>
#include "../algorithm.h"

class search : public algorithm {

public:
    bool linear_search(int haystack, int needle);
};

#endif
