// ex39.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int k;
	cout << "K:";
	cin >> k;

	int ki, a = 1, a1, a2, count = 0;
	for (ki = 1; ki <= k; ++ki) {
		cout << ">";
		cin >> a1;
		cout << ">";
		cin >> a;
		int check = 1;
		while (a != 0) {
			a2 = a1;
			a1 = a;
			cout << ">";
			cin >> a;
			if (!(((a2 < a1) && (a1 > a)) || ((a2 > a1) && (a1 < a))) && (a != 0)) check = 0;
		}
		if (check)  count += 1;
	}
	cout << count;
}
