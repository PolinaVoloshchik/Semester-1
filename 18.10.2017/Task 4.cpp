#include <iostream>
using namespace std;
long long int replacing(long long int n, int n1, int n2);
long long int newNumber(long long int n, int n1, int n2);

int main()
{
	long long int n, n1, n2;
	cout << "Enter n = ";
	cin >> n;
	while (true)
	{
		cout << "Enter digit to be replaced: ";
		cin >> n1;
		if ((n1 > 10) || (n1 < 0))
		{
			cout << "Invalid data!" << endl;
			continue;
		}
		else break;
	}
	cout << "Enter digit on which you want to replace: ";
	cin >> n2;
	while (true)
	{
		if ((n2 > 10) || (n2 < 0))
		{
			cout << "Invalid data!" << endl;
			continue;
		}
		else break;
	}
	n = replacing(n, n1, n2);
	n = newNumber(n, n1, n2);
	cout << "New number: " << n << endl;
	system("pause");
}




long long int replacing(long long int n, int n1, int n2)
{
	long long newN = 0;
	int rest = 0;
	while (n)
	{
		rest = n % 10;
		if (rest == n1) rest = n2;
		newN = newN * 10 + rest;
		n /= 10;
	}
	return newN;
}



long long int newNumber(long long int n, int n1, int n2)
{
	long long newN = 0;
	int rest = 0;
	while (n)
	{
		rest = n % 10;
		newN = newN * 10 + rest;
		n /= 10;
	}
	return newN;
}