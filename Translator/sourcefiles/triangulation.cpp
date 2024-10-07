#include"triangulation.h"
#include"point.h"
#include"reader.h"
#include"triangle.h"
#include<vector>
vector<triangle> triangulation::add_unique_points(vector<point> points){
	
	vector<triangle> get_triangle;
	if (points.size() % 3 == 0) {
		int differentiate_triangle = points.size() / 3;
		for (int i = 0; i < differentiate_triangle; i++) {
			point p1(points[(i * 3) + 0].x, points[(i * 3) + 0].y, points[(i * 3) + 0].z);
			point p2(points[(i * 3) + 1].x, points[(i * 3) + 1].y, points[(i * 3) + 1].z);
			point p3(points[(i * 3) + 2].x, points[(i * 3) + 2].y, points[(i * 3) + 2].z);
			triangle t1(p1, p2, p3);
			get_triangle.push_back(t1);
		}
	}
	return get_triangle;
}