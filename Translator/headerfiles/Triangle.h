#pragma once
#include"Point.h"
class Triangle {
private:
	Point p1;
	Point p2;
	Point p3;
public:
	triangle(Point p1,Point p2,Point p3);
	~triangle();
	int get_p1_x_coodinate();
	int get_p1_y_coodinate();
	int get_p1_z_coodinate();
	int get_p2_x_coodinate();
	int get_p2_y_coodinate();
	int get_p2_z_coodinate();
	int get_p3_x_coodinate();
	int get_p3_y_coodinate();
	int get_p3_z_coodinate();
};
