#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int chislo;
	int c1;
	int c2;
	int c3;
	int summa;
	int proizved;
tryAgain:
	cout << "Введите трехзначное число ";
	cin >> chislo;
	if ((chislo > 100) & (chislo < 1000))
	{
		c1 = chislo / 100;
		c2 = (chislo / 10) % 10;
		c3 = chislo % 10;
		summa = c1 + c2 + c3;
		proizved = c1 * c2 * c3;
		cout << "Сумма = " << summa << endl;
		cout << "Производное = " << proizved << endl;

	}
	else {
		goto tryAgain;
	}
	system("pause");
}

