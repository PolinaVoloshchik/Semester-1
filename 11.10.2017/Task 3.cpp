#include <iostream>
using namespace std;

int main()
{
	int a1 = 0, a2 = 1, a3;
	a3 = a1 + a2;
	cout << a1 << "  " << a2 << "  " << a3 << "  ";
	do
	{
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
		cout << a3 << "  ";
	} while (a3 < 100);
	cout << endl << "The smallest three-digit of Fibonacci numbers is " << a3;
}