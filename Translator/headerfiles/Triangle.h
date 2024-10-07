#pragma once
#include"point.h"
class triangle {
public:
	point p1;
	point p2;
	point p3;
	triangle(point p1,point p2,point p3);
	void get_triangle();
	~triangle();
	//double area();
};