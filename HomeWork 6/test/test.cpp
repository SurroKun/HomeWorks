#include "pch.h"
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m, n, i, j, k;
	double sr;
	int a[10][10];
	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;
	cout << endl << "Введите " << m * n << " элементов матрицы: \n";				
	for (i = 0; i < m; ++i)
	{
		cout << i + 1 << " строчка: \n";
		for (j = 0; j < n; ++j)
		{
			cout << j + 1 << " столбик: ";
			cin >> a[i][j];
		}
	}
	cout << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
	for (j = 0; j < n; j++) {
		for (sr = 0, i = 0; i < m; i++)
			sr += a[i][j];
		sr /= m;
		for (k = i = 0; i < m; i++)
			if (a[i][j] > sr)
				k++;
		cout << endl << "Stolbec " << j + 1 << " = " << k;
	}
}