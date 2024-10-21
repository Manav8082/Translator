#include"Writer.h"
#include"Point.h"
#include"Triangle.h"

Write::Write()
{
}
Write::~Write()
{
}

void Write::Writer(vector<Triangle> TriangleList, vector<double> get_points) {
    ofstream myfile("output.dat");
    for (auto i : TriangleList) {
        myfile << get_points[i.getP1Points()] << " "
            << get_points[i.get_p1_y_coordinate()] << " "
            << get_points[i.get_p1_z_coordinate()] << endl;
        myfile << get_points[i.get_p2_x_coordinate()] << " "
            << get_points[i.get_p2_y_coordinate()] << " "
            << get_points[i.get_p2_z_coordinate()] << endl;
        myfile << get_points[i.get_p3_x_coordinate()] << " "
            << get_points[i.get_p3_y_coordinate()] << " "
            << get_points[i.get_p3_z_coordinate()] << endl;
        myfile << get_points[i.get_p1_x_coordinate()] << " "
            << get_points[i.get_p1_y_coordinate()] << " "
            << get_points[i.get_p1_z_coordinate()] << endl;
        myfile << endl;
        myfile << endl;
    }
    myfile.close();
}