#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Point.h"
#include"Triangle.h"
#include"StlReader.h"
#include"Writer.h"
class StlWriter:private Writer
{
public:
	StlWriter();
	~StlWriter();
	void Write(string& outputFile,Triangulation& triangulation);
};
