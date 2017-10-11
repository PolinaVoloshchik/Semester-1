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

		float result = 1;
		for (int i = 1; i <= n; i++)
		{
			result = result * (1 + 1 / ((float)i*(float)i));
		}
		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}