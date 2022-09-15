#include "triangle.h"

triangle::triangle(segment* a, segment* b, segment* c, bool isRectangle){
    this->a = a;
    this->b = b;
    this->c = c;
    this->isRectangle = isRectangle;
}

segment* triangle::get_side(int id){
    switch (id){
        case 1:
            return this->a;
        case 2:
            return this->b;
        case 3:
            return this->c;
        default:
            return new segment(0);
    }
}

float triangle::get_perimeter(){
    return this->a->get_length() + this->b->get_length() + this->c->get_length();
}

// Formule de Heron | ne marche pas quand un des cotés >= dp
float triangle::get_area(){
    float dp = this->get_perimeter() / 2;
    return sqrt((dp * (dp - this->a->get_length())) * (dp - this->b->get_length()) * (dp - this->c->get_length()));
}

float triangle::pythagore(){
    if (this->isRectangle){
        std::vector<segment*> sides;

        for (int i = 1; i <= 3; i++){
            if (this->get_side(i)->get_length() != 0) {
                sides.push_back(this->get_side(i));
            }
        }
        return sqrt(pow(sides.at(0)->get_length(), 2) + pow(sides.at(1)->get_length(), 2));
    } else std::cout << "Your triangle is not rectangle." << std::endl;
    return -1;
}