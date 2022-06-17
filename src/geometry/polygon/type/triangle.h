#ifndef ATHENA_TRIANGLE_H
#define ATHENA_TRIANGLE_H

#include "../polygon.h"
#include "../../line/segment.cpp"

class triangle : public polygon {

public:
    segment* AB;
    segment* BC;
    segment* AC;
    bool is_rectangle = false;

public:
    triangle(segment* AB, segment* BC, segment* AC);
    float get_area();
    float get_perimeter();
};

#endif
