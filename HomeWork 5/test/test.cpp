#include "pch.h"
#include <stdio.h>
#include <iostream>
using namespace std; 

int main(void)
{
	int n, i, ni, nmin, num = 0, maxnum = 0;
	printf("N:");
	scanf_s("%i", &n);
	for (i = 1; i <= n; ++i) {
		printf("%i>", i);
		scanf_s("%i", &ni);
		if ((i == 1) || (ni < nmin)) {
			nmin = ni;
			num = 0;
			maxnum = 0;
		}
		if (ni == nmin) ++num;
		else {
			if (num > maxnum) maxnum = num;
			num = 0;
		}
	}
	if ((num > maxnum) && (ni == nmin)) maxnum = num;

	printf("%i\n", maxnum);
	return 0;
}
