#include <iostream>
#include "String.h"

using namespace std;


int main()
{
	const int N = 100;
	char leftarray[N], rightarray[N];
	cout << "Enter first string: ";
	cin >> leftarray;
	cout << "Enter second string: ";
	cin >> rightarray;

	toUpper(leftarray);
	toUpper(rightarray);
	cout << leftarray << endl << rightarray << endl;
	if(equals(leftarray, rightarray))
		cout << "Strings are equal" << endl;
	else cout << "Strings are not equal" << endl;
	system("pause");
}