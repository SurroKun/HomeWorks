#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	ofstream fout;

	int N;
	cout << "add" << endl; cin >> N;

	string path = "myFile.txt";
	fout.open(path); //тескт сохраниться в файле с работой

	int A = 2; int B = N;

	for (int i = A; i <= B; i++)
		if (i % 2 == 0)
			if (!fout.is_open()) {
				cout << "False" << endl;
			}
			else {
				fout << i << "\n";
			}
	fout.close();
	system("myFile.txt");

	return 0;
}