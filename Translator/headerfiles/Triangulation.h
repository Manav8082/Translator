#pragma once
#include"Point.h"
#include"Triangle.h"
#include<vector>
class Triangulation {
private:
	vector<double> points;
public:
	vector<Triangle> add_unique_points(vector<Point> points);
};
