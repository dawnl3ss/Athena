#include "segment.h"

segment::segment(int length){
    this->length = length;
}

float segment::get_length(){
    return this->length;
}

float segment::get_middle(){
    return this->length / 2;
}