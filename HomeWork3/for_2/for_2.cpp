#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;

	int i;
	for (i = a; i <= b; ++i) // Вывести в порядке возрастания все целые числа, расположенные между A и B (включительно) + количество
		cout << i << "\n";
	cout << b - a + 1 << "\n";
	system("pause");
}

