// ex69.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10][10];
	int m, n, k;
	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;
	cout << "K: ";
	cin >> k;

	int i, j;			//zadaem matricy
	for (i = 0; i < m; ++i) {
		cout << "Ryadok: " << i + 1 << endl;
		for (j = 0; j < n; ++j) {
			cout << "Stolbec:" << j + 1 << " ";
			cin >> a[i][j];
		}
	}

	++n; // +stolbec i sdvig
	for (j = n - 1; j > k; --j)
		for (i = 0; i < n; ++i)
			a[i][j] = a[i][j - 1];

	for (i = 0; i < m; ++i) a[i][k] = 1;
	//vivod
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) cout << " : " << a[i][j]);
		cout << " : \n";
	}
	return 0;
}


