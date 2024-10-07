#include"triangle.h"
#include"point.h"
triangle::triangle(point p1,point p2,point p3) :p1(p1), p2(p2), p3(p3) {}
triangle::~triangle() {}
void triangle::get_triangle() {
    /*cout << "enter the x,y,z  coordinate of p1" << endl;
    cin >> p1.x >> p1.y >> p1.z;
    cout << "enter the x,y,z  coordinate of p2" << endl;
    cin >> p2.x >> p2.y >> p2.z;
    cout << "enter the x,y,z  coordinate of p3" << endl;
    cin >> p3.x >> p3.y >> p3.z;*/
    /*cout << "enter the x,y,z  coordinate of p1" << endl;
    p1.get_point();
    cout << "enter the x,y,z  coordinate of p2" << endl;
    p2.get_point();
    cout << "enter the x,y,z  coordinate of p3" << endl;
    p3.get_point();*/
}
//double triangle::area() {
//    double x1 = p1.x, y1 = p1.y, z1 = p1.z;
//    double x2 = p2.x, y2 = p2.y, z2 = p2.z;
//    double x3 = p3.x, y3 = p3.y, z3 = p3.z;
//
//    // Vectors AB and AC
//    double ABx = x2 - x1;
//    double ABy = y2 - y1;
//    double ABz = z2 - z1;
//
//    double ACx = x3 - x1;
//    double ACy = y3 - y1;
//    double ACz = z3 - z1;
//
//    // Cross product AB x AC
//    double N_x = ABy * ACz - ABz * ACy;
//    double N_y = ABz * ACx - ABx * ACz;
//    double N_z = ABx * ACy - ABy * ACx;
//
//    // Magnitude of the cross product
//    double area = 0.5 * sqrt(N_x * N_x + N_y * N_y + N_z * N_z);
//    return area;
//}