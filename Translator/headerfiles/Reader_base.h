#pragma once
#include <string>
#define Tolerance 0.000001
#include"Triangulation.h"
class Reader_base 
{
public:
	Reader_base();
	~Reader_base();
	virtual void read(const std::string& inputFile, Triangulation& triangulation)=0;
	bool isEqualChecker(double num1,double num2);
	struct ToleranceComparator
	{
		bool operator()(double a, double b) const
		{
			return (fabs(a - b) > Tolerance) ? a < b : false;
		}
	};
};