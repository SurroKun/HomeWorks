#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	int b;
	int S;
	int P;
	cout << "Введите сторону А \n";
	cin >> a;

	cout << "Введите сторону B \n";

	cin >> b;

	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь прямоугольника = " << S << " ";
	cout << "Периметр прямоугольника = " << P << endl;
	system("pause");
}

