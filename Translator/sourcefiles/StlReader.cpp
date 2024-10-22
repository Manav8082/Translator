#include"StlReader.h"
#include<fstream>
#include<sstream>
#include "Triangle.h"
#include "Triangulation.h"
#include<iostream>

using namespace std;

StlReader::StlReader()
{
}

StlReader::~StlReader()
{
}

int StlReader::findAndAdd(double& coordinate, Triangulation& triangulation, int& index)
{
	if (doubleMap.find(coordinate) == doubleMap.end())
	{
		doubleMap[coordinate] = index;
		triangulation.UniquePoints.push_back(coordinate);
		return index++;
	}
	else {
		return doubleMap[coordinate];
	}
}



void StlReader::read(const string& inputFile, Triangulation& triangulation)
{
	vector<Point> UniquePoints;
	vector<double>getPoints;
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
			if (iss >> token >> x >> y >> z) 
			{
				if (token == "vertex")
				{
					x1 = findAndAdd(x,triangulation,index);
					y1 = findAndAdd(y,triangulation,index);
					z1 = findAndAdd(z,triangulation,index);
					UniquePoints.push_back(Point(x1,y1,z1));
				}
			}
			if (UniquePoints.size() == 3)
			{
				createTriangles(UniquePoints[0], UniquePoints[1], UniquePoints[2], triangulation);
				UniquePoints.clear();
			}
		}
	}
	else 
	{
		throw("file doesn't exist");
	}
}
void StlReader::createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation)
{
	Triangle tri(p1, p2, p3);
	triangulation.insertTriangles(tri);
}

