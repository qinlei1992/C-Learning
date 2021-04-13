#include "009_Point.h"
#include "009_Circle.h"


void Circle::set_radius(double radius){
    this->radius = radius;
}

double Circle::get_radius(){
    return radius;
}

void Circle::set_center(Point p){
    center = p;
}

Point Circle::get_center(){
    return center;
}
