#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a mark: ";
	cin >> a;
	switch (a)
	{
	case '10':
	case '9':
		cout << a << " - excellent ";
		break;
	case '8':
	case '7':
		cout << a << " - good ";
		break;
	case '6':
	case '5':
		cout << a << " - satisfactorily ";
		break;
	case '4':
	case '3':
		cout << a << " - not satisfactorily ";
		break;
	case '2':
	case '1':
		cout << a << " - was absent ";
		break;
	default:
		cout << "Error";
	}
	return 0;
}