#include"Point.h"
point::point(int x,int y,int z):x(x),y(y),z(z) {}
point::~point() {}
int point::get_x_coordinate() {
	return x;
}int point::get_y_coordinate() {
	return y;
}int point::get_z_coordinate() {
	return z;
}
