#include "pch.h"
#include <iostream>
using namespace std;		//Lано целое число N и набор из N вещественных чисел:A1,A2...An . Вывести следующие числа:A1, A2^2...An^n .

int main()
{
	int n;
	cout << "N:";
	cin >> n;

	int i, i2;
	float a, pow;
	for (i = 1; i <= n; ++i) {
		cout << ">";
		cin >> a;
		for (i2 = 1, pow = 1; i2 <= i; ++i2) pow *= a;
		cout << pow << endl;
	}
}