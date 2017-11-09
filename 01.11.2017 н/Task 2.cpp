#include <iostream>
using namespace std;
int numberOfNoughts(long long int number, int i);

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	int i = 0;
	i = numberOfNoughts(n, i);
	cout << "Number of 0: " << i << endl;
	system("pause");
}

int numberOfNoughts(long long int number, int i)
{
	int digit;
	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 0)
			i++;
		number = number / 2;
	}
	if (number == 0) i++;
	return i;
}