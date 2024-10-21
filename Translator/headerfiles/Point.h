#pragma once 

class Point 
{
private:
    int x, y, z;
public:
    Point(int x,int y,int z);
    ~Point();
    int getXCoordinate();
    int getYCoordinate();
    int getZCoordinate();
};
