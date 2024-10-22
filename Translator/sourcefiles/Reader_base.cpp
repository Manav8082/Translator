#include"Reader_base.h"
#include"Triangulation.h"
#include<string>
Reader_base::Reader_base()
{
}
Reader_base::~Reader_base()
{
}
void Reader_base::read(const std::string& inputfile, Triangulation& triangulation)
{
}
bool Reader_base::isEqualChecker(double num1, double num2)
{
	if (fabs(num1 - num2)>Tolerance) 
	{
		return false;
	}
	return true;
}
