#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите А\n";
	cin >> a;
	if (a > 0) {
		b = a + 1;
		cout << b;
	}
	else if (a < 0) {
		b = a - 2;
		cout << b;
	}
	else if (a = 0) {
		b = 10;
		cout << b;
	}
	system("pause");
}