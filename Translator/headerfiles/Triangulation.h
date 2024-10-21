#pragma once
#include"Point.h"
#include"Triangle.h"
#include<vector>

class Triangulation {
private:
	vector <Triangle> TrianglesList;
public:
	void insertTriangles(Triangle& triangle);
};
