#include "pch.h"
#include <iostream>
#include <sstream>
#include <windows.h>
#include <iterator>
#include <algorithm>
#include <set>
#include <string>
using namespace std;			//алфавитный порядок

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string raw;
	getline(cin, raw);
	istringstream is(raw);
	multiset<string> s;
	copy(istream_iterator<string>(is),
		istream_iterator<string>(),
		inserter(s, s.begin()));
	copy(s.begin(), s.end(), ostream_iterator<string>(cout, " "));

	return EXIT_SUCCESS;
}