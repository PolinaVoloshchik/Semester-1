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
		float result = 0;
		int ch = 1;
		float zn = 0;
		while (i <= n)
		{
			ch = ch * i;
			zn = zn + 1. / i;
			result = result + ch / zn;
			i = i + 1;
		}

		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}