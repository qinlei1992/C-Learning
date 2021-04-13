#pragma once
#include <iostream>
using namespace std;

class Point{
    private:
        double x;
        double y;
    public:
        void set_x(double x);

        double get_x();

        void set_y(double y);

        double get_y();
};
