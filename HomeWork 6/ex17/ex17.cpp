#include "pch.h"
#include <iostream>
using namespace std;		// сума и произведение К-ной строки

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

	int i, j;
	for (i = 0; i < m; ++i) {
		cout << i + 1 << "strochka : \n";
		for (j = 0; j < n; ++j) {
			cout << j + 1 << "stolbik : ";
			cin >> a[i][j];
		}
	}
	int sum = 0, mult = 1;
	for (j = 0; j < n; ++j) {
		sum += a[k - 1][j];
		mult *= a[k - 1][j];
	}
	cout << "Sum: " << sum << "  Mult: " << mult;
}

