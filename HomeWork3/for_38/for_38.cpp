#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	//Найти сумму 1^N+2^N–1 + ... + N^1
	int z, z2;
	float fin = 0, r;
	for (z = 1; z <= n; ++z) {
		r = z;
		for (z2 = 1; z2 <= n - z; ++z2)
			r *= z;
		fin += r;
	}
	cout << fin;
	system("pause");
}