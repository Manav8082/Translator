#include"StlReader.h"
#include<fstream>
#include<sstream>
#include "Triangle.h"
StlReader::StlReader()
{
}

StlReader::~StlReader()
{
}

int StlReader::findAndAdd(vector<double>& uniquePointsList,double& coordinate)
{
	for (int i = 0; i < uniquePointsList.size(); i++)
	{
		if (isEqualChecker(uniquePointsList[i], coordinate))
		{
			return i;
		}
		uniquePointsList.push_back(coordinate);
		return uniquePointsList.size() - 1;
	}
	
}


vector<Point> u_points;
vector<double>get_points;

void StlReader::read(const string& inputFile, Triangulation& triangulation)
{
	ifstream myfile(inputFile);
	string line;
	int index = 0;
	int x1; 
	int y1;
	int z1;
	if(myfile.is_open())
	{
		while (getline(myfile, line))
		{
			string token;
			istringstream iss(line);
			double x;
			double y;
			double z;

			if (iss >> token >> x >> y >> z) {
				if (token == "vertex")
				{
					x1 = findAndAdd(get_points, x);
					y1 = findAndAdd(get_points, y);
					z1 = findAndAdd(get_points, z);
				}
				Point p(x1, y1, z1);
				u_points.push_back(p);
			}
			if (u_points.size() == 3)
			{
				createTriangles(u_points[0], u_points[1], u_points[2], triangulation);
				u_points.clear();
			}
		}
	}
	else 
	{
		throw("file doesn't exist");
	}
	//return u_points;

}
void StlReader::createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation)
{
	Triangle tri(p1, p2, p3);
	triangulation.insertTriangles(tri);
}

