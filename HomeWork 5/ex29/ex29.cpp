#include "pch.h"
#include <stdio.h>
#include <iostream>
using namespace std;
						//Дано целое число N и набор из N целых чисел. Найти максимальное количество подряд идущих минимальных элементов из данного набора.
int main(void)
{
	int n, i, ni, nmin, num = 0, maxnum = 0;
	cout << "N:";
	cin >> n;
	for (i = 1; i <= n; ++i) {
		cout << "i" << i << ":";
		cin >> ni;
		if ((i == 1) || (ni < nmin)) {
			nmin = ni;
			num = 0;
			maxnum = 0;
		}
		if (ni == nmin) ++num;
		else {
			if (num > maxnum) maxnum = num;
			num = 0;
		}
	}
	if ((num > maxnum) && (ni == nmin)) maxnum = num;

	cout << "maxnum = " << maxnum;
	return 0;
}
