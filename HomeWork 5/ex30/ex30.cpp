#include "pch.h"
#include <iostream>
using namespace std; 

int main()
{
	int n, i, ni, nmax;
	cout << "N:";
	cin >> n;
	int minnum = n, num = 0;
	for (i = 1; i <= n; ++i) {
		cout << "i" << i << ":";
		cin >> ni;
		if ((i == 1) || (ni > nmax)) {
			nmax = ni;
			num = 1;
			minnum = n;
		}
		if (ni == nmax) ++num;
		else {
			if (num < minnum) {
				minnum = num;
				num = 0;
			}
		}
	}
	if ((num < minnum) && (ni == nmax)) minnum = num;

	cout << "minimum - " << minnum;
	return 0;
}
