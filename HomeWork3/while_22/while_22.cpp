#include "pch.h"
#include <iostream>
using namespace std; // простые числа

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	if (n == 2) {
		bool lel = true;
		cout << "True";
	}
	else {
		int k = 2;
		while ((k < n - 1) & ((n%k) != 0)) {
			++k;
		}
		if ((n%k) != 0) {
			bool lel = true;
			cout << "True";
		}
		else
		{
			bool lel = false;
			cout << "False";
		}
	}
	cout << endl;
	system("pause");
}
