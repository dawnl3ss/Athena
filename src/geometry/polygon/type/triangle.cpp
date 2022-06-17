#include "triangle.h"

triangle::triangle(segment* AB, segment* BC, segment* AC){
    this->AB = AB;
    this->BC = BC;
    this->AC = AC;
}

float triangle::get_area(){
    return 0.0;
}

float triangle::get_perimeter(){
    return this->AB->get_length() + this->BC->get_length() + this->AC->get_length();
}