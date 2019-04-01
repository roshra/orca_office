// orca_office.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

void style_1();

int main()
{
	std::cout << "getting to read orca file\n";
	style_1();	// Just opens and reads entire file
}

void style_1() {

	string line;
	ifstream myfile("C:\\Users\\ravir\\source\\repos\\orchestration_info.txt", ios::in);
	if (myfile.is_open()) {

		while (getline(myfile, line)) {

			// cout << line << endl;
			regex r("(Obj ID                                  : )(.*)");
			smatch m;
			regex_search(line, m, r);
			for (auto x : m)
				cout << x << " " << endl;

		}

	}

	myfile.close();

}
	