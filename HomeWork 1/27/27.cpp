#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int A;
	int A2;
	int A4;
	int A8;
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение А ";
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	cout << "А^2=" << A2 << " " << "A^4=" << A4 << " " << "A^8=" << A8 << endl;
	system("pause");
}


