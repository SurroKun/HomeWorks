#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n1, n2, n3;
	char pos = 'С';
	cout << "n1 >";
	cin >> n1;
	cout << "n2 >";
	cin >> n2;
	switch (n1 + n2)
	{
	case 4:
		pos = 'C';
		cout << pos << endl << "Север";
		break;
	case 3:
		pos = 'B';
		cout << pos << endl << "Восток";
		break;
	case 2:
		pos = 'Ю';
		cout << pos << endl << "Юг";
		break;
	case 1:
		pos = 'З';
		cout << pos << endl << "Запад";
		break;
	case 0:
		pos = 'C';
		cout << pos << endl << "Север";
		break;
	case -2:
		pos = 'Ю';
		cout << pos << endl << "Юг";
		break;
	}
	system("pause");
}

