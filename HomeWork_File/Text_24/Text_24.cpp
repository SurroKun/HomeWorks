#include "pch.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int *m, n = 0;
	m = (int*)malloc(sizeof(int));
	ifstream file("text.txt");
	char tm1[256], tm2[256];
	while (!file.eof())
	{
		if (file.eof()) break;
		file.getline(tm1, 256);
		m = (int*)realloc(m, sizeof(int)*(1 + n));
		for (int i = 0, j = 0; i < strlen(tm1); i++)
		{
			if (tm1[i] != ' ')
			{
				tm2[j] = tm1[i];
				j++;
			}
			if (i == strlen(tm1) - 1)
				tm2[j] = 0;
		}
		m[n] = atoi(tm2);
		n++;
	}
	for (int i = 0; i < n; i++)
		cout << m[i] << " ";
	file.close();
	free(m);
	system("pause>null");
	return 0;
}