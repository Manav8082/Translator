#include"Triangulation.h"
#include"Point.h"
#include"StlReader.h"
#include"Triangle.h"
#include<vector>

void Triangulation::insertTriangles(Triangle& triangle)
{
	TrianglesList.push_back(triangle);
}

