#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, x2, y1, y2;
	cout << "Введите x1\n";
	cin >> x1;
	cout << "Введите y1\n";
	cin >> y1;
	cout << "Введите x2\n";
	cin >> x2;
	cout << "Введите y2\n";
	cin >> y2;
	int x3, y3;
	if ((x1 = x2) && (y1 = y2)) {
		cout << "error1";
	}
	else if ((x1 < 0) || (x2 < 0) || (y1 < 0) || (y2 < 0) || (x1 > 8) || (x2 > 8) || (y1 > 8) || (y2 > 8)) {
		cout << "error2";
	}
	if (x1 < x2) {
		x3 = x2 - x1;
	}
	else if (x2 < x1) {
		x3 = x1 - x2;
	}
	else if (y1 < y2) {
		y3 = y2 - y1;
	}
	else if (y2 < y1) {
		y3 = y1 - y2;
	}
	if ((x3 = 2) && (y3 = 1)) {
		bool lol = true;
	}
	else if ((x3 = 1) && (y3 = 2)) {
		bool lol = true;
	}
	else {
		bool lol = false;
	}
	system("pause");
}

