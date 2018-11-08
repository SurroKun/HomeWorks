// Proc_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;		// Сдивг влево



void  swap(float *x, float *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void shiftleft3(float *a, float *b, float *c) {
	swap(a, b);
	swap(c, b);
}

int main()
{
	int i;
	for (i = 1; i <= 2; ++i) {
		float a, b, c;
		cout << "A:";
		cin >> a;
		cout << "B:";
		cin >> b;
		cout << "C:";
		cin >> c;

		shiftleft3(&a, &b, &c);
		cout << "A: " << a << "  B: " << b << "  C: " << c << endl;
	}
}
