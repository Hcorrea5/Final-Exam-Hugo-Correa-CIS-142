#include "FileCreator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

FileCreator::FileCreator(string anything)
{
	this->MyFile.open(anything);
}

void FileCreator::WriteFile(string sname, double bio101, double chem200, double math101, double cis101, double average)
{
	this->MyFile << sname << ", " << bio101 << "," << chem200 << "," << math101 << "," << cis101 << "," << average << endl;
}

void FileCreator::WriteHeader()
{
	this->MyFile << "Student Name, BIO101, CHEM200, MATH101, CIS101, Average " << endl;
}

void FileCreator::CloseFile()
{
	this->MyFile.close();
}