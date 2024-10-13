#include"Reader.h"
#include<string>
#include<sstream>
#include"Point.h"
#include<vector>

#include<unordered_map>
vector<Point> u_points;
vector<double>get_points;
vector<Point> Read::reader() {
	ifstream myfile("sphere-ascii.stl");
	unordered_map<double, int> umap;
	string line;
	int index = 0, x1, y1, z1;
	while (getline(myfile, line)) {
		string token;
		istringstream iss(line);
		double x, y, z;

		if (iss >> token >> x >> y >> z) {
			if (token == "vertex") {
				if (umap.find(x) == umap.end()) {
					umap[x] = index;
					x1 = index;
					get_points.push_back(x);
					index++;
				}
				else {
					x1 = umap[x];
				}
				if (umap.find(y) == umap.end()) {
					umap[y] = index;
					y1 = index;
					get_points.push_back(y);
					index++;
				}
				else {
					y1 = umap[y];
				}
				if (umap.find(z) == umap.end()) {
					umap[z] = index;
					z1 = index;
					get_points.push_back(z);
					index++;
				}
				else {
					z1 = umap[z];
				}
			}
			Point p(x1, y1, z1);
			u_points.push_back(p);
		}
	}
	return u_points;

}
vector<double> Read::unique() {
	return get_points;
}
