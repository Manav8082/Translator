#include"Writer.h"
void write::writer(vector<triangle> get_triangles, vector<double> get_points) {
	ofstream myfile("output.dat");
	for(auto i:get_triangles){
		myfile << get_points[i.p1.x] << " " << get_points[i.p1.y] << " " << get_points[i.p1.z] << endl;
		myfile << get_points[i.p2.x] << " " << get_points[i.p2.y] << " " << get_points[i.p2.z] << endl;
		myfile << get_points[i.p3.x] << " " << get_points[i.p3.y] << " " << get_points[i.p3.z] << endl;
		myfile << get_points[i.p1.x] << " " << get_points[i.p1.y] << " " << get_points[i.p1.z] << endl;
		myfile << endl;
		myfile << endl;
	}
	myfile.close();
}