
#pragma once
#include<iostream>
using namespace std;
class Point {
private:
    int x, y, z;
public:
    Point(int x,int y,int z);
    ~Point();
    int get_x_coordinate();
    int get_y_coordinate();
    int get_z_coordinate();
    

};
