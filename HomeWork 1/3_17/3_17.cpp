#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if ((a > 99) && (a < 1000) && (a % 2 != 0)) {
		cout << "Число " << a << " является трехзначным, нечётным." << endl;
		bool lel = true;
		cout << lel << endl;
	}
	else {
		cout << "Число " << a << " Не является трехзначным и/или нечётным." << endl;
		bool lel = false;
		cout << lel << endl;
	}
	system("pause");
}
