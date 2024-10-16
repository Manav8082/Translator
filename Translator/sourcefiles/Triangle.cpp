#include "Triangle.h"
#include "Point.h"

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
Triangle::~Triangle() {}

int Triangle::get_p1_x_coordinate() {
    return p1.get_x_coordinate();
}

int Triangle::get_p1_y_coordinate() {
    return p1.get_y_coordinate();
}

int Triangle::get_p1_z_coordinate() {
    return p1.get_z_coordinate();
}

int Triangle::get_p2_x_coordinate() {
    return p2.get_x_coordinate();
}

int Triangle::get_p2_y_coordinate() {
    return p2.get_y_coordinate();
}

int Triangle::get_p2_z_coordinate() {
    return p2.get_z_coordinate();
}

int Triangle::get_p3_x_coordinate() {
    return p3.get_x_coordinate();
}

int Triangle::get_p3_y_coordinate() {
    return p3.get_y_coordinate();
}

int Triangle::get_p3_z_coordinate() {
    return p3.get_z_coordinate();
}
