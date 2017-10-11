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

		int num = -1;
		float result = 0;
		for (int i = 3; i <= n; i += 2)
		{
			result += (float)num / i; //операция приведения
			num = -num;
		}
		cout << "Result = " << result << endl;
		cout << "If continue, press y or Y: ";
		cin >> ok;
	}
	return 0;
}