#include "pch.h"
#include <iostream>
using namespace std;

int main()	//Дано целое число N и набор из N чисел. Найти номер минимального элемента из данного набора.

{
	float r, min;
	int i, n, minnum;
	cout << "N:";
	cin >> n;
	for (i = 1; i <= n; ++i) {
		cout << i << ":";
		cin >> r;
		if ((i == 1) || (r < min)) {
			min = r;
			minnum = i;
		}
	}
	cout << "nomer min elementa = " << minnum;
}

