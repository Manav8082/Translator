#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Point.h"
#include"Triangle.h"
class Write
{
public:
	Write();
	~Write();
	void Writer(vector<Triangle> TriangleList,vector<double> getpoints);
};
