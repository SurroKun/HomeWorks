#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "X=";
	cin >> x;
	int n;
	cout << "N=";
	cin >> n;

	float x1 = x, fin = x;

	int i, k = 1;

	for (i = 2; i <= n; ++i) {
		k += 2;
		x1 *= -1 * x*x;
		fin += x1 / k;
	}
	cout << fin;
	system("pause");
}