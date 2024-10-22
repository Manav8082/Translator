#pragma once
#include <vector>
#include <string>
#include "Triangulation.h"
#include "Point.h"
#include  "Reader_base.h"
#include<map>


using namespace std;
class StlReader : private Reader_base{
public:

	map<double, int, ToleranceComparator> doubleMap;
	StlReader();
	~StlReader();
	void read(const string& inputFile, Triangulation& triangulation);
	int findAndAdd(double& coordinate, Triangulation& triangulation,int& index);
	void createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation);
};
