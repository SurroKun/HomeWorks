#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	cout << "Введите значение А ";
	cin >> a;
	cout << "Введите значени В ";
	cin >> b;
	if ((a >= 0) && (b < (-2))) {
		cout << "Высказывания A >= 0 и В < (-2) верны " << endl;
		bool first = true;
		bool second = true;
		cout << first << endl;
		cout << second << endl;
	}
	if (a >= 0) {
		cout << "Высказываниt A >= 0 верно " << endl;
		bool first = true;
		bool second = false;
		cout << first << endl;
		cout << second << endl;
	}
	if (b < (-2)) {
		cout << "Высказываниt В < (-2) верно " << endl;
		bool first = false;
		bool second = true;
		cout << first << endl;
		cout << second << endl;
	}
	else {
		cout << "Выражения не верны " << endl;
		bool first = false;
		bool second = false;
		cout << first << endl;
		cout << second << endl;
	}
	system("pause");
}
