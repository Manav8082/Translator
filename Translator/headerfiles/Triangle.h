#pragma once
#include"point.h"
class triangle {
private:
	point p1;
	point p2;
	point p3;
public:
	triangle(point p1,point p2,point p3);
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