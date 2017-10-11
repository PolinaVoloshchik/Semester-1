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

		float result = 0;
		for (int i = 1; i <= n; i++)
		{
			result = sqrt(result + 2);
		}
		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}