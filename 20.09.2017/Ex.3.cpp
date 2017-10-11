#include <iostream>
using namespace std;
int main()
{
	int number, number1, number2;
	cout << "Enter number from 0 to 100: ";
	cin >> number;
	number2 = number % 10;
	number1 = (number - number2) / 10;
	switch (number1)
	{
	case '10':
		cout << "One hundred";
		break;
	case '9':
		cout << "Ninety";
		break;
	case '8':
		cout << "Eighty";
		break;
	case '7':
		cout << "Seventy";
		break;
	case '6':
		cout << "Sixty";
		break;
	case '5':
		cout << "Fifty";
		break;
	case '4':
		cout << "Fourty";
		break;
	case '3':
		cout << "Thirty";
		break;
	case '2':
		cout << "Twenty";
		break;
	case '1':
	{
		switch (number2)
		{
		case '9':
			cout << "Nineteen";
			break;
		case '8':
			cout << "Eighteen";
			break;
		case '7':
			cout << "Seventeen";
			break;
		case '6':
			cout << "Sixteen";
			break;
		case '5':
			cout << "Fifteen";
			break;
		case '4':
			cout << "Fourteen";
			break;
		case '3':
			cout << "Thirteen";
			break;
		case '2':
			cout << "Twelve";
			break;
		case '1':
			cout << "Eleven";
			break;
		case '0':
			cout << "Ten";
			break;
		}
	}
	}
	switch (number2)
	{
	case '9':
		cout << " nine";
		break;
	case '8':
		cout << " eight";
		break;
	case '7':
		cout << " seven";
		break;
	case '6':
		cout << " six";
		break;
	case '5':
		cout << " five";
		break;
	case '4':
		cout << " four";
		break;
	case '3':
		cout << " three";
		break;
	case '2':
		cout << " two";
		break;
	case '1':
		cout << " one";
		break;
	case '0':
		cout << " ";
		break;
	}
	return 0;
}