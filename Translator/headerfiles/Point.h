
#pragma once
#include<iostream>
using namespace std;
class point {
private:
    int x, y, z;
public:
    point(int x,int y,int z);
    ~point();
    int get_x_coordeinate();
    int get_y_coordeinate();
    int get_z_coordeinate();
    

};
