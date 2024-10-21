#include "Point.h"

Point::Point(int x,int y,int z):x(x),y(y),z(z) 
{
}
Point::~Point() 
{
}
int Point::getXCoordinate()
{
	return x;
}
int Point::getYCoordinate()
{
	return y;
}
int Point::getZCoordinate()
{
	return z;
}
