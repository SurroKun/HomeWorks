// ex43.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"				//MxN - найти количество убывающих столбцов
#include <iostream>
using namespace std;

int main()
{
	int a[10][10];
	int m, n;

	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;

	int i, j;			//zadaem matricy
	for (i = 0; i < m; ++i) {
		cout << "Ryadok " << i + 1 << endl;
		for (j = 0; j < n; ++j) {
			cout << "Stolbec " << j + 1;
			cin >> a[i][j];
		}
	}


	int num = 0;
	for (j = 0; j < n; ++j) {
		for (i = 1; (a[i - 1][j] >= a[i][j] && (i < m)); ++i);
		if (i == m) ++num;
	}

	cout << "kolichestvo stolbcov: " << num;

	return 0;
}