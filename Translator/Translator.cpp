#include<iostream>
#include"Triangulation.h"
#include"Reader.h"
#include"Writer.h"
using namespace std;
int main() {
	Read re;
	vector<Point> get_points = re.reader();
	vector<double> u_points = re.unique();
	Triangulation t;
	vector<Triangle> get_triangles = t.add_unique_points( get_points);
	Write w;
	w.Writer(get_triangles,u_points);


}
