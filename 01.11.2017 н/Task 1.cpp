#include <iostream>
using namespace std;
int numberOfUnits(long long int number, int i);

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	int i = 0;
	i = numberOfUnits(n, i);
	cout << "Number of 1: " << i << endl;
	system("pause");
}

int numberOfUnits(long long int number, int i)
{
	int digit;
	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 1)
			i++;
		number = number / 2;
	}
	if (number == 1) i++;
	return i;
}