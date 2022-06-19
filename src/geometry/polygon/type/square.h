#ifndef ATHENA_SQUARE_H
#define ATHENA_SQUARE_H

#include "../polygon.h"

class square : public polygon {

public:
    segment* side;

public:
    square(segment* side);
    float get_perimeter();
    float get_area();
};

#endif
