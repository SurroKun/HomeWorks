#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	int x1;
	int x2;
	int y;
	int y1;
	int y2;
	cout << "Введите значение х1" << endl;
	cin >> x1;
	cout << "Введите значение х2" << endl;
	cin >> x2;
	cout << "Введите значение y1" << endl;
	cin >> y1;
	cout << "Введите значение y2" << endl;
	cin >> y2;
	cout << "Введите значение x" << endl;
	cin >> x;
	cout << "Введите значение y" << endl;
	cin >> y;
	if ((x1 < x < x2) && (y1 < y < y2)) {
		cout << "Точки с координатами (x, y) лежат внутри прямоугольника (x1,x2, y1,y2)." << endl;
		bool lel = true;
		cout << lel << endl;
	}
	else {
		cout << "Точки с координатами (x, y) НЕ лежат внутри прямоугольника (x1,x2, y1,y2)." << endl;
		bool lel = false;
		cout << lel << endl;
	}
	system("pause");
}
