#ifndef ATHENA_TRIANGLE_H
#define ATHENA_TRIANGLE_H

#include "../polygon.h"
#include "../../line/segment.cpp"

class triangle : public polygon {

public:
    segment* a;
    segment* b;
    segment* c;
    bool is_rectangle = false;

public:
    triangle(segment* a, segment* b, segment* c);
    float get_perimeter();
    float get_area();
};

#endif
