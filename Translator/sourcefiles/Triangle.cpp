#include"Triangle.h"
#include"Point.h"
triangle::triangle(point p1,point p2,point p3) :p1(p1), p2(p2), p3(p3) {}
triangle::~triangle() {}
int triangle::get_p1_x_coodinate() {
	return p1.get_x_coordinate();
}int triangle::get_p1_y_coodinate() {
	return p1.get_y_coordinate();
}int triangle::get_p1_z_coodinate() {
	return p1.get_z_coordinate();
}int triangle::get_p2_x_coodinate() {
	return p2.get_x_coordinate();
}int triangle::get_p2_y_coodinate() {
	return p2.get_y_coordinate();
}int triangle::get_p2_z_coodinate() {
	return p2.get_z_coordinate();
}int triangle::get_p3_x_coodinate() {
	return p3.get_x_coordinate();
}int triangle::get_p3_y_coodinate() {
	return p3.get_y_coordinate();
}int triangle::get_p3_z_coodinate() {
	return p1.get_z_coordinate();
}