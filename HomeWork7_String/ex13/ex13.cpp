#include "pch.h"
#include <iostream>			//Дана строка. Подсчитать количество содержащихся в ней цифр.
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, num=0;
	string str;
	cout << "Введите строку:";
	getline (cin, str);
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] > 48 && str[i] < 57) num++;
	}
	cout << num;

}

