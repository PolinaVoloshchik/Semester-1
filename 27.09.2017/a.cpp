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

		float sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum = sum + (1 / (float)i);
		}
		cout << "Sum = " << sum << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}

