#include <iostream>
using namespace std;

int main()
{
	long long int n, digitS;
	char symbol;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter symbol: ";
	cin >> symbol;
	switch (symbol)
	{
	case 'A':
		digitS = 10;
		break;
	case 'B':
		digitS = 11;
		break;
	case 'C':
		digitS = 12;
		break;
	case 'D':
		digitS = 13;
		break;
	case 'E':
		digitS = 14;
		break;
	case 'F':
		digitS = 15;
		break;
	}
	int digit, i = 0;
	while (n)
	{
		digit = n % 16;
		if (digit == digitS)
			i = i + 1;
		n = n / 16;
	}
	cout << "Number of " << symbol << " : " << i << endl;
	system("pause");
}