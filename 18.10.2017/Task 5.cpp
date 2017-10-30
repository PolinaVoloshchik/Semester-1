#include <iostream>
using namespace std;
long long int deleting(long long int n, int n1);
long long int newNumber(long long int n, int n1);

int main()
{
	long long int n, n1;
	cout << "Enter n = ";
	cin >> n;
	while (true)
	{
		cout << "Enter digit to be deleted: ";
		cin >> n1;
		if ((n1 > 10) || (n1 < 0))
		{
			cout << "Invalid data!" << endl;
			continue;
		}
		else break;
	}
	n = deleting(n, n1);
	n = newNumber(n, n1);
	cout << "New number: " << n << endl;
	system("pause");
}




long long int deleting(long long int n, int n1)
{
	long long newN = 0;
	int rest = 0;
	while (n)
	{
		rest = n % 10;
		if (rest != n1) newN = newN * 10 + rest;
		n /= 10;
	}
	return newN;
}



long long int newNumber(long long int n, int n1)
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