#include<iostream>
#include"Triangulation.h"
#include"StlReader.h"
#include"StlWriter.h"
using namespace std;
int main() {
	Triangulation tri;
	StlReader reader1;
    StlWriter writer1;
	string inputFile;
	cout << "Enter the input file: ";
	cin >> inputFile;
	reader1.read(inputFile, tri);
	string outputFile;
	cout << "Enter the name of output file: ";
	cin >> outputFile;
	writer1.Write(outputFile,tri);
}