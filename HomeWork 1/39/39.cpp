#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A;
	int B;
	int C;
	int D;
	int X1;
	int X2;
	cout << "Введите значения A, B и C" << endl;
	cin >> A >> B >> C;
	D = sqrt(B) - 4 * A * C;
	X1 = (-B - sqrt(D)) / (2 * A);
	X2 = (-B + sqrt(D)) / (2 * A);
	if (X1 < X2) {
		cout << "X1 = " << X1 << ", X2 = " << X2;
	}
	else {
		cout << "X1 = " << X2 << ", X2 = " << X1;
	}
	system("pause");
}

