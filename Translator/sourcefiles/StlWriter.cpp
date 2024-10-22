#include"StlWriter.h"
#include"Point.h"
#include"Triangle.h"
#include<fstream>
#include "triangulation.h"
#include"Triangulation.h"
using namespace std;

StlWriter::StlWriter()
{
}
StlWriter::~StlWriter()
{
}

void StlWriter::Write(string& outputFile,Triangulation& triangulation)
{
    ofstream myfile(outputFile);
    for (auto i : triangulation.TrianglesList)
    {
        myfile << triangulation.UniquePoints[i.getP1Point().getXCoordinate()] << " "<< triangulation.UniquePoints[i.getP1Point().getYCoordinate()] << " "<< triangulation.UniquePoints[i.getP1Point().getZCoordinate()] << endl;
        myfile << triangulation.UniquePoints[i.getP2Point().getXCoordinate()] << " "<< triangulation.UniquePoints[i.getP2Point().getYCoordinate()] << " "<< triangulation.UniquePoints[i.getP2Point().getZCoordinate()] << endl;
        myfile << triangulation.UniquePoints[i.getP3Point().getXCoordinate()] << " "<< triangulation.UniquePoints[i.getP3Point().getYCoordinate()] << " "<< triangulation.UniquePoints[i.getP3Point().getZCoordinate()] << endl;
        myfile << triangulation.UniquePoints[i.getP1Point().getXCoordinate()] << " "<< triangulation.UniquePoints[i.getP1Point().getYCoordinate()] << " "<< triangulation.UniquePoints[i.getP1Point().getZCoordinate()] << endl;
        myfile << endl;
        myfile << endl;
    }
    myfile.close();
}