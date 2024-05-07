#include "FileCreator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string anything;
    string sname;
    double bio101 = 0;
    double chem200;
    double math101;
    double cis101;
    double average;
    cout << "Please Enter the name of the file: ";
    getline(cin, anything);
    anything = anything + ".csv";
    FileCreator file(anything);
    file.WriteHeader();
    int x = 0;
    while (x < 5)
    {
        cout << endl << "Enter the Name of Student #" << x+1 << ": ";
        getline(cin, sname);
        cout << endl << "Enter the Grade for BIO101: ";
        cin >> bio101;
        cout << endl << "Enter the Grade for CHEM200: ";
        cin >> chem200;
        cout << endl << "Enter the Grade for MATH101: ";
        cin >> math101;
        cout << endl << "Enter the Grade for CIS101: ";
        cin >> cis101;
        average = (bio101 + math101 + chem200 + cis101) / 4;
        file.WriteFile(sname, bio101, chem200, math101, cis101, average);
        x++;
        cin.ignore();
    }
    file.CloseFile();
}