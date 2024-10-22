#pragma once
#include<string>
#include"Triangulation.h"
class Writer
{
public:
	Writer();
	~Writer();
	virtual void Write(string& outputFile, Triangulation& traingulation) = 0;
};
