// Proc_27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;


int ispowern5(int k, int n) {
	float temp = k;					//количество степеней чиcла N в данном наборе.
	for (; temp >= n; temp /= n);
	return temp == 1;
}

int main(void)
{
	int i, n, res = 0;
	cout << "N:";
	cin >> n;
	for (i = 1; i <= 10; ++i) {
		int k;
		cout << "K:";
		cin >> k;
		res += ispowern5(k, n);
	}
	cout << "Res: " << res;
	return 0;
}