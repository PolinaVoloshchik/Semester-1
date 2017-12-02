#include <iostream>
#include "String.h"

using namespace std;

int main()
{
	const int N = 100;
	char string[N];
	char substring[N];
	cout << "Enter string: ";
	cin.getline (string, N);
	cout << "Enter substring: ";
	cin.getline (substring, N);

	int index = findIndexSubstring(string, substring);
	cout << index << endl;
	system("pause");
}