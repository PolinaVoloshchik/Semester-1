#include <iostream>
#include "Matrix.h"
#include "String.h"

#define N 100

using namespace std;

int main()
{
	char string[N];
	cout << "Enter string: ";
	cin.getline(string, N);
	char words[N][N] = {' '};

	breakStringIntoWords(string, words);
	displayCharMatrix(words, 20, 20);
	system("pause");
}