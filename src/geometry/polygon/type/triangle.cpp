#include "triangle.h"

triangle::triangle(segment* a, segment* b, segment* c){
    this->a = a;
    this->b = b;
    this->c = c;
}

float triangle::get_perimeter(){
    return this->a->get_length() + this->b->get_length() + this->c->get_length();
}

// Formule de Heron | ne marche pas quand un des cotés >= dp
float triangle::get_area(){
    float dp = this->get_perimeter() / 2;
    return sqrt((dp * (dp - this->a->get_length())) * (dp - this->b->get_length()) * (dp - this->c->get_length()));
}

