#ifndef ATHENA_POLYGON_H
#define ATHENA_POLYGON_H

#include "../geometry.h"

class polygon : public geometry {

public:
    float get_area();
    float get_perimeter();
};
#endif
