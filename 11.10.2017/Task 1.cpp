#include <iostream>
using namespace std;
void number(long long int);

int main()
{
	long long int x;
	cout << "Enter x = ";
	cin >> x;
	number(x);
	system("pause");
}

void number(long long int x)
{
		for (int i = 0; ;)
		{
			if (x >= pow(10, i) && x < pow(10, i + 1))
			{
				int a;
				for (a = 0; a < 10; a++)
				{
					long int c = pow(10, i + 1);
					int n = 0;
					for (int j = 10, x1 = x; x1!=0 ; )
					{
						if (x1%j == a)
							n++;
						x1 = x1 / 10;
					}
					cout << "Number of " << a << " : " << n << endl;
				}
				break;
			}
			else i++;
		}
}