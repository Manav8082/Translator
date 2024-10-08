#include"Triangulation.h"
#include"Point.h"
#include"Reader.h"
#include"Triangle.h"
#include<vector>
vector<triangle> triangulation::add_unique_points(vector<point> points){
	
	vector<triangle> get_triangle;
	if (points.size() % 3 == 0) {
		int differentiate_triangle = points.size() / 3;
		for (int i = 0; i < differentiate_triangle; i++) {
			point p1(points[(i * 3) + 0].get_x_coordinate(), points[(i * 3) + 0].get_y_coordinate(), points[(i * 3) + 0].get_z_coordinate());
			point p2(points[(i * 3) + 1].get_x_coordinate(), points[(i * 3) + 1].get_y_coordinate(), points[(i * 3) + 1].get_z_coordinate());
			point p3(points[(i * 3) + 2].get_x_coordinate(), points[(i * 3) + 2].get_y_coordinate(), points[(i * 3) + 2].get_z_coordinate());
			triangle t1(p1, p2, p3);
			get_triangle.push_back(t1);
		}
	}
	return get_triangle;
}