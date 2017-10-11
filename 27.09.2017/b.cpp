#include <iostream>
using namespace std;
int main()

{
	int n;
	char ok = 'y';

	while (ok == 'y' || ok == 'Y')
	{
		cout << "Enter n = ";
		cin >> n;

		int i = 1;
		int result = 1;
		while (i <= n)
		{
			result = result * 2;
			i = i + 1;
		}

		cout << "Result = 2^" << n << " = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}