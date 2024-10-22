#include"Triangulation.h"
#include"Point.h"
#include"StlReader.h"
#include"Triangle.h"
#include<vector>
#include <iostream>

Triangulation::Triangulation()
{
}

Triangulation::~Triangulation()
{
}
void Triangulation::insertTriangles(Triangle& triangle)
{
	TrianglesList.push_back(triangle);
}

