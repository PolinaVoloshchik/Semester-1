#include <iostream>
#include "String.h"

using namespace std;

int main()
{
	const int N = 100;
	char leftarray[N], rightarray[N];
	cout << "Enter first string: ";
	cin.getline (leftarray, N);
	cout << "Enter second string: ";
	cin.getline (rightarray, N);

	int x = findOrder(leftarray, rightarray);
	switch (x)
	{
	case 0: 
		cout << "Second string is bigger than first one" << endl;
		break;
	case 1: 
		cout << "First string is bigger than second one" << endl;
		break;
	case -1:
		cout << "Strings are equal" << endl;
		break;
	}
	system("pause");
}