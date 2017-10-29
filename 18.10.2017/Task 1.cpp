#include <iostream>
using namespace std;
long long int inverseNumber(long long int x);
bool isPolindrome(long long int a, long long int b);

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	long long int N = inverseNumber(n);
	if (isPolindrome(N, n))
		cout << n << " is polindrome" << endl;
	else cout << n << " isn't polindrome" << endl;
	system("pause");
	return 0;
}

long long int inverseNumber(long long int x)
{
	long long inverse = 0;
	int rest = 0;
	while (x)                                  //while (x != 0)
	{
		rest = x % 10;
		inverse = inverse * 10 + rest;
		x /= 10;		
	}
	return inverse;
}

bool isPolindrome(long long int a, long long int b)
{
	if (a == b)
		return 1;
	else return 0;
}