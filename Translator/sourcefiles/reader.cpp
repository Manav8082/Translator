#include"reader.h"
#include<string>
#include<sstream>
#include"point.h"
#include<vector>

#include<unordered_map>
vector<point> u_points;
vector<double>get_points;
vector<point> read::reader() {
	ifstream myfile("sphere-ascii.stl");
	unordered_map<double, int> umap;
	string line;
	//point p;
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
					//x = x1;
					get_points.push_back(x);
					index++;
				}
				else {
					x1 = umap[x];
				}
				if (umap.find(y) == umap.end()) {
					umap[y] = index;
					y1 = index;
					//y = y1;
					get_points.push_back(y);
					index++;
				}
				else {
					y1 = umap[y];
				}
				if (umap.find(z) == umap.end()) {
					umap[z] = index;
					z1 = index;
					//z = z1;
					get_points.push_back(z);
					index++;
				}
				else {
					z1 = umap[z];
				}
			}
			point p(x1, y1, z1);
			u_points.push_back(p);
		}
	}
	return u_points;

}
vector<double> read::unique() {
	return get_points;
}