#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[10][10];
	int m, n;

	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;

	int i, j;				//zadaem znacheniya
	for (i = 0; i < m; ++i)
	{
		cout << i + 1 << " строчка: \n";
		for (j = 0; j < n; ++j)
		{
			cout << j + 1 << " столбик : ";
			cin >> a[i][j];
		}
	}

	int sum, num;
	int sred;

	for (j = 0; j < n; ++j) {
		sum = 0;
		for (i = 0; i < m; ++i) {
			sum += a[i][j];
			sred = sum / n;
			num = 0;
			for (i = 0; i < m; ++i)
				if (a[i][j] > sred) ++num;
			cout << " В столбце " << i << " кол-во элементов равно  " << num;
		}
	}
}

