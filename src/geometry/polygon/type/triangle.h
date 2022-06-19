#ifndef ATHENA_TRIANGLE_H
#define ATHENA_TRIANGLE_H

#include "../polygon.h"

class triangle : public polygon {

public:
    segment* a;
    segment* b;
    segment* c;
    bool isRectangle = false;

public:
    triangle(segment* a, segment* b, segment* c, bool isRectangle);
    segment* get_side(int id);
    float get_perimeter();
    float get_area();
    float pythagore();
};

#endif
