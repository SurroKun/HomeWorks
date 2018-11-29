#include "pch.h"
# include <iostream>
# include <windows.h>
# include <cmath>
# include <fstream>		//Дана строка, изображающая десятичную запись целого положитель-ного числа.Вывести строку, 
# include <iomanip>		//изображающую двоичную запись этого же числа.
#include <string>

using namespace std;

void div2(string& s, int& mem) //Деление на 2 числового значения записанного в строке. Вывод строка делёная на 2 и остаток от деления.
{
	int i;
	string s2 = s;
	mem = 0;
	for (i = 0; i < (int)s.length(); ++i) {
		s2[i] = (char)(((((int)(s[i]) - 48) + 10 * mem) / 2) + 48);
		if ((((int)(s[i]) - 48) % 2) == 1) { mem = 1; }
		else { mem = 0; }
	};
	if (s2[0] == '0') { s2.erase(0, 1); }
	s.swap(s2);
}

int main()
{
	string s, temp;
	cout << "S:";
	cin >> s;
	string srez;
	int mem = 0;
	for (srez = ""; !(s.empty());) {
		div2(s, mem);
		srez += char(mem + 48);
	}
	int i;
	for (i = 0; i < (int)srez.length(); ++i) {
		s += srez[srez.length() - i - 1];
	}
	cout << s << endl;
	return 0;
}