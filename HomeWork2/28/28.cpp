#include "pch.h"
#include <iostream>
using namespace std;

int main()	// Високосный or not
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, z;
	cout << "Введите год\n";
	cin >> a;
	b = a % 4;
	c = a % 400;
	z = a % 100;
	if ((c != 0) && (z == 0)) {
		cout << "365\n";
	}
	else if (b == 0) {
		cout << "366\n";
	}
	else if (b != 0) {
		cout << "365\n";
	}
	system("pause");
}

