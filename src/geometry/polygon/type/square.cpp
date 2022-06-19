#include "square.h"

square::square(segment* side){
    this->side = side;
}

float square::get_perimeter(){
    return this->side->get_length() * 4;
}

float square::get_area(){
    return this->side->get_length() * this->side->get_length();
}