#include "pch.h"
# include <iostream>
# include <windows.h>		//Дан символ C. Вывести его код (то есть номер в кодовой таблице).
# include <cmath>
# include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char C;
	int kod;
	cout << "Введите символ С: ";
	cin >> C;
	kod = C;
	cout << "Код символа '" << C << "': " << kod << endl;

	system("pause");
	return 0;
}