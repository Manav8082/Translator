#include"Writer.h"
void write::writer(vector<triangle> get_triangles, vector<double> get_points) {
	ofstream myfile("output.dat");
	for(auto i:get_triangles){
		myfile << get_points[i.get_p1_x_coodinate()] << " " << get_points[i.get_p1_y_coodinate()] << " " << get_points[i.get_p1_z_coodinate()] << endl;
		myfile << get_points[i.get_p2_x_coodinate()] << " " << get_points[i.get_p2_y_coodinate()] << " " << get_points[i.get_p2_z_coodinate()] << endl;
		myfile << get_points[i.get_p3_x_coodinate()] << " " << get_points[i.get_p3_y_coodinate()] << " " << get_points[i.get_p3_z_coodinate()] << endl;
		myfile << get_points[i.get_p1_x_coodinate()] << " " << get_points[i.get_p1_y_coodinate()] << " " << get_points[i.get_p1_z_coodinate()] << endl;
		myfile << endl;
		myfile << endl;
	}
	myfile.close();
}