#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";  // 3^K < N.
	cin >> n;
	int k = 1, stock = 3;
	while (stock < n) {
		stock *= 3;
		++k;
	}
	cout << "K = " << k << endl;
	system("pause");
}