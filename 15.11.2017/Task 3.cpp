#include <iostream>
#include "String.h"

using namespace std;

int findOrder(char leftarray[], char rightarray[]);

int main()
{
	const int N = 100;
	char leftarray[N], rightarray[N];
	cout << "Enter first string: ";
	cin >> leftarray;
	cout << "Enter second string: ";
	cin >> rightarray;

	int x = findOrder(leftarray, rightarray);
	if (x) cout << "First string is bigger than second one" << endl;
	else cout << "Second string is bigger than first one" << endl;
	system("pause");
}

int findOrder(char leftarray[], char rightarray[])
{
	int i = 0, j = 0;
	while (leftarray[i] == rightarray[j])
	{
		i++;
		j++;
	}
	if (leftarray[i] > rightarray[j])
		return 1;
	else
		return 0;
}