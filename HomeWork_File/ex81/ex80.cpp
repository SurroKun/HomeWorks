#include "pch.h"
#include <iostream> 
#include <fstream> 
using namespace std;
int main()
{
	ifstream infile; // для вывода
	infile.open("Text.txt");  // открываем файл
	ofstream outfile("Matrix.txt"); // создаём файл для записи
	char buffer[500];  // сюда будем считывать


	while (!infile.eof()) // до кoнца файла
	{
		infile.getline(buffer, 500); // считываем 
		for (int i = 0; i < buffer[i] != 0; i++) // до конца строки
			if (buffer[i] == '0') // если равен 0 переходим к следующей итерации
				continue;
			else
				outfile << buffer[i]; // иначе записываем в файл
		outfile << endl;

	}
}