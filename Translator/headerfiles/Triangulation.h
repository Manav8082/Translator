#pragma once
#include"Point.h"
#include"Triangle.h"
#include<vector>

using namespace std;

class Triangulation {
public:
	Triangulation();
	~Triangulation();
	vector<double> UniquePoints;
	vector<Triangle> TrianglesList;
	void insertTriangles(Triangle& triangle);
	
};
