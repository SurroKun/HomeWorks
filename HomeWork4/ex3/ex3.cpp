#include "pch.h"
#include <iostream>
using namespace std;
//Даны десять вещественных чисел. Найти их среднее арифметическое.
int main()
{
	setlocale(LC_ALL, "Russian");
	int rez = 0, r;
	int i;
	for (i = 1; i <= 10; ++i) {
		cout << "i:" << i << " ";
		cin >> r;
		rez += r;
	}
	cout << "Среднее арифметическое = " << rez / 10;
}