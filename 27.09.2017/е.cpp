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

		float i = 1;
		float result = 0;
		while (i <= n)
		{
			result = result + 1 / ((2 * i + 1) * (2 * i + 1));
			i = i + 1;
		}

		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}