#include "pch.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int S;
	int D;
	int L;
	cout << "Площадь Круга = ";
	cin >> S;
	D = sqrt(S / M_PI) * 2;
	L = D * M_PI;
	cout << "Диаметр круга = " << D << endl;
	cout << "Длина окружности = " << L << endl;
	system("pause");
}


