#include "pch.h"
#include <iostream>
using namespace std; //Дано целое число K и набор ненулевых целых чисел; признак его за-вершения — число 0. Вывести номер первого числа в наборе, большего K.
//Если таких чисел нет, то вывести 0.

int main()
{
	int k, r = 1, num = 0, count = 0;
	cout << "K:";
	cin >> k;
	while (r != 0) {
		cout << ">";
		cin >> r;
		if ((r > k) && (num == 0)) num = r;
	}
	cout << num;
}