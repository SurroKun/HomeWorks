#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	unsigned l = unsigned(-1);
	string s, result = "";
	fstream f("input.txt", ios::in);
	while (getline(f, s))
		if (s.length() < l) {
			l = s.length();
			result = s;
			result += '\n';
		}
		else if (s.length() == l) {
			result += s;
			result += '\n';
		}
	f.close();
	f.open("output.txt", ios::out);
	f << result;
	f.close();
	system("input.txt");
	system("output.txt");
}