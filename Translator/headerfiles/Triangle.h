#pragma once
#include"point.h"
class triangle {
private:
	point p1;
	point p2;
	point p3;
public:
	triangle(point p1,point p2,point p3);
	void get_triangle();
	~triangle();
};