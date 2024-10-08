#include"Point.h"
point::point(int x,int y,int z):x(x),y(y),z(z) {}
point::~point() {}
void point::getcoordinates() {
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
