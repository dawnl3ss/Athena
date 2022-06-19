#ifndef ATHENA_POLYGON_H
#define ATHENA_POLYGON_H

#include "../geometry.h"
#include "../line/segment.cpp"


class polygon : public geometry {

protected:
    float get_area();
    float get_perimeter();
};
#endif
