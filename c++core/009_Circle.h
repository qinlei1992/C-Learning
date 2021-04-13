#pragma once
#include <iostream>
using namespace std;
#include "009_Point.h"

class Circle{
    private:
        double radius;
        Point center;
    
    public:
        void set_radius(double radius);

        double get_radius();

        void set_center(Point p);

        Point get_center();
};
