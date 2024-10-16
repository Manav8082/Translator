#include "Point.h"
Point::Point(int x,int y,int z):x(x),y(y),z(z) {}
Point::~Point() {}
int Point::get_x_coordinate() {
	return x;
}int Point::get_y_coordinate() {
	return y;
}int Point::get_z_coordinate() {
	return z;
}
