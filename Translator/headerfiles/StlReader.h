#pragma once
#include <vector>
#include <string>
#include "Triangulation.h"
#include "Point.h"
#include  "Reader_base.h"


using namespace std;
class StlReader : private Reader_base{
private:
	string inputFile="cube-ascii.stl";
public:
	StlReader();
	~StlReader();
	void read(const string& inputFile, Triangulation& triangulation);
	int findAndAdd(vector<double>& uniquePointsList, double& coordinate);
	void createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation);
};
