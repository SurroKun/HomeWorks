// Proc_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>					//среднее аорифметическое
using namespace std;


void poweraa234(float x, float y, float *amean, float *gmean)
{
	*amean = (x + y) / 2;
	*gmean = sqrt(x*y);
}

int main()
{

	float a, b, c, d;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << "C:";
	cin >> c;
	cout << "D:";
	cin >> d;
	float amean, gmean;
	poweraa234(a, b, &amean, &gmean);
	cout << "AMean: " << amean << "  GMean" << gmean << endl;
	poweraa234(a, c, &amean, &gmean);
	cout << "AMean: " << amean << "  GMean" << gmean << endl;
	poweraa234(a, d, &amean, &gmean);
	cout << "AMean: " << amean << "  GMean" << gmean << endl;
}