#include "pch.h"
#include <iostream>
using namespace std;

int main() // Найти сумму двух наибольших
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, f;
	cout << "a\n";
	cin >> a;
	cout << "b\n";
	cin >> b;
	cout << "c\n";
	cin >> c;
	if ((a <= b) && (b <= c)) {
		f = b + c;
	}
	if ((b <= c) && (c <= a)) {
		f = a + c;
	}
	if ((c <= a) && (a <= b)) {
		f = a + b;
	}
	cout << "Сумма двух наибольших - " << f << endl;
	system("pause");
}