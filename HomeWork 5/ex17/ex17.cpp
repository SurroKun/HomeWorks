#include "pch.h"
#include <stdio.h>
#include <iostream>
using namespace std;		//Дано целое число N и набор из N целых чисел. Найти количество элементов, расположенных после последнего максимального элемента.


int main()
{
	int n, maxnum, i, r, max;
	cout << "N:";
	cin >> n;
	max = 0;
	for (i = 1; i <= n; ++i) {
		cout << "i" << i << ":";
		cin >> r;

		if (r >= max) {
			max = r;
			maxnum = i;
		}
	}
	cout << "После максимального значения стоят еще " << n - maxnum << "значений";
}

