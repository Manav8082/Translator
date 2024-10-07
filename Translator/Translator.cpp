#include<iostream>
#include"triangulation.h"
#include"reader.h"
#include"Writer.h"
using namespace std;
int main() {
	read re;
	vector<point> get_points = re.reader();
	vector<double> u_points = re.unique();
	triangulation t;
	vector<triangle> get_triangles = t.add_unique_points( get_points);
	write w;
	w.writer(get_triangles,u_points);


}