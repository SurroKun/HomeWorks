#include "pch.h"
#include <iostream>	
#include <fstream>
#include <string>		//ios::app
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	setlocale(LC_ALL, "ru");
	ofstream fout;

	fout.open("input.txt", ios::app);
	fout << s;
	system("input.txt");
}

