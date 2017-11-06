#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	int digit, i = 0;
	while (n)
	{
		digit = n % 10;
		switch (digit)
		{
		case 0:
		{
			i = i + 0;
			break;
		}
		case 1: case 2: case 4: case 8:
		{
			i = i + 1;
			break;
		}
		case 3: case 5: case 6: case 9:
		{
			i = i + 2;
			break;
		}
		case 7:
		{
			i = i + 3;
			break;
		}
		}
		n = n / 10;
	}
	cout << "Number of 1: " << i << endl;
	system("pause");
}