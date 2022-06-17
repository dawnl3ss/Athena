#ifndef ATHENA_SEGMENT_H
#define ATHENA_SEGMENT_H

#include "../geometry.h"

class segment : public geometry {

public:
    int length = 0;

public:
    segment(int length);
    float get_length();
    float get_middle();
};

#endif
