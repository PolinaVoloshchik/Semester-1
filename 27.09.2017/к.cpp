#include <iostream>
#include <cmath>
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
		float zn = 0;
		while (i <= n)
		{
			zn = zn + 1 / sin(i);
			result = result + 1 / zn;
			i = i + 1;
		}


		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}