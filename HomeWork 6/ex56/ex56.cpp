#include "pch.h"
#include <iostream>
using namespace std;



void swap(int &x, int &y) {
	if (x != y) {
		x += y;
		y = x - y;
		x -= y;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

int a[10][10];
int m, n;




	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;
	if (n % 2 != 0)
	{
		cout << "N должна быть чётной!";
	}

else
{

	int i, j;			//zadaem matricy
	for (i = 0; i < m; ++i) {
		cout << "Ryadok: " << i + 1 << endl;
		for (j = 0; j < n; ++j) {
			cout << "Stolbec:" << j + 1 << " ";
			cin >> a[i][j];
		}
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n / 2; ++j)
			swap(a[i][j], a[i][n / 2 + j]);
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) cout << " : " << a[i][j] << " : ";
		printf("\n");
	}

	return 0;
}
}

