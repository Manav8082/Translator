#pragma once
#include "Point.h"

class Triangle {
private:
    Point p1;
    Point p2;
    Point p3;
public:
    Triangle(Point p1, Point p2, Point p3);
    ~Triangle();
    int get_p1_x_coordinate();
    int get_p1_y_coordinate();
    int get_p1_z_coordinate();
    int get_p2_x_coordinate();
    int get_p2_y_coordinate();
    int get_p2_z_coordinate();
    int get_p3_x_coordinate();
    int get_p3_y_coordinate();
    int get_p3_z_coordinate();
};
