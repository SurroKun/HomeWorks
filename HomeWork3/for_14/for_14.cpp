#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "N ="; //квадрат данного числа
	cin >> n;
	int k = 1, s = 0;
	for (int i = 1; i <= n; i++) // квадраты всех целых чисел от 1 до N
	{
		s = s + k;
		k = k + 2;
		cout << i << "^2 = " << s << endl;
	}
}
