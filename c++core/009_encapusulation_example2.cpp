#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include "009_Point.h"
#include "009_Circle.h"


void isIncircle(Circle &c, Point &p){
    double distance1 = pow(c.get_center().get_x() - p.get_x(),2) + pow(c.get_center().get_y() - p.get_y(),2);
    double distance2 = pow(c.get_radius(), 2);
    if (distance1 > distance2 ){
        cout << "outside!" << endl;
    } else if (distance1 == distance2){
        cout << "on!" << endl;
    } else{
        cout << "inside!" << endl;
    }
}


int main(int argc, char const *argv[])
{   

    double radius = 10;
    Point center;
    center.set_x(10);
    center.set_y(0);

    Circle c;
    c.set_radius(radius);
    c.set_center(center);

    Point P;
    P.set_x(10);
    P.set_y(20);

    isIncircle(c, P);
    // cout << P.get_x() << endl;


    return 0;
}
