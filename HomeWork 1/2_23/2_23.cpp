#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	int a;
	int b;
	int n;
tryAgain:
	cout << " Сколько секунд прошло?  ";
	cin >> N;
	if (N < 60) {
		cout << " Нету полной минуты! Попробуйте снова. " << endl;
		goto tryAgain;
	}
	else if (N < 3600) {
		n = trunc(N / 60);
		cout << "С начала последнего часа прошло " << n << " минут. " << endl;
		system("pause");
	}
	else {
		n = trunc(N / 3600);
		a = n * 3600;
		b = N - a;
		cout << "С начала последнего часа прошло " << b << " минут. " << endl;

		system("pause");
	}
}

