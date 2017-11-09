#include <iostream>
using namespace std;
void convertSymbolToNumber(char symbol, int& digit);
int counter(long long int number, int i, int digitS);

int main()
{
	long long int n;
	int digitS;
	char symbol;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter symbol: ";
	cin >> symbol;
	convertSymbolToNumber(symbol, digitS);
	int digit, i = 0;
	int i1 = counter(n, i, digitS);
	cout << "Number of " << symbol << " : " << i1 << endl;
	system("pause");
}

void convertSymbolToNumber(char symbol, int& digit)
{
	switch (symbol)
	{
	case '1':
		digit = 1;
		break;
	case '2':
		digit = 2;
	case '3':
		digit = 3;
		break;
	case '4':
		digit = 4;
		break;
	case '5':
		digit = 5;
		break;
	case '6':
		digit = 6;
		break;
	case '7':
		digit = 7;
		break;
	case '8':
		digit = 8;
		break;
	case '9':
		digit = 9;
		break;
		break;
	case 'A':
		digit = 10;
		break;
	case 'B':
		digit = 11;
		break;
	case 'C':
		digit = 12;
		break;
	case 'D':
		digit = 13;
		break;
	case 'E':
		digit = 14;
		break;
	case 'F':
		digit = 15;
		break;
	}
}

int counter(long long int number, int i, int digitS)
{
	int digit;
	while (number)
	{
		digit = number % 16;
		if (digit == digitS)
			i = i + 1;
		number = number / 16;
	}
	return i;
}