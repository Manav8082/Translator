#include"Point.h"
point::point(int x,int y,int z):x(x),y(y),z(z) {}
point::~point() {}
//void point::get_point() {
//    cout << "enter the x coordinate of a point" << endl;
//    cin >> x;
//    cout << "enter the y coordinate of a point" << endl;
//    cin >> y;
//    cout << "enter the z coordinate of a point" << endl;
//    cin >> z;
//}
void point::getcoordinates() {
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
