#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

	vector<double> vec;
	double temp = 0;

	ifstream file("s1.txt");
	if (file)
	{
		while (!file.eof())
		{
			file >> temp;
			vec.push_back(temp);
		}
	}
	file.close();

	file.open("s2.txt");
	if (file)
	{
		while (!file.eof())
		{
			file >> temp;
			vec.push_back(temp);
		}
	}
	file.close();

	sort(vec.begin(), vec.end());

	ofstream res_file("s3.txt");
	if (res_file)
	{

		for (int i = 0; i < vec.size(); i++)
		{
			res_file << vec[i] << "\n";
		}
	}
	res_file.close();
	system("s3.txt");
	system("pause");
	return(0);
}