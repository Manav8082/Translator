#pragma once
#include"point.h"
#include"triangle.h"
#include<vector>
class triangulation {
private:
	vector<double> points;
public:
	vector<triangle> add_unique_points(vector<point> points);
};
