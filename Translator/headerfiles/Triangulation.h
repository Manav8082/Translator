#pragma once
#include"point.h"
#include"triangle.h"
#include<vector>
class triangulation {
public:
	vector<double> points;
	vector<triangle> add_unique_points(vector<point> points);
};
