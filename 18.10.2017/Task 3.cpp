#include <iostream>
using namespace std;
void counter(int i, long long int x, int equal);

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	int i = 0, digit = 0;
	counter(i, n, digit);
	system("pause");
}



void counter(int i, long long int x, int digit)
{
	int prevCur = 0, nextCur = 0, digitCur = 0, iCur = 1;
	nextCur = x % 10;
	while (x)
	{
		prevCur = nextCur;
		x = x / 10;
		nextCur = x % 10;
		if (prevCur == nextCur)
		{
			iCur++;
			digitCur = nextCur;
		}
		else
			if (iCur >= i)
			{
				i = iCur;
				digit = digitCur;
				iCur = 1;
			}
	}
	cout << "Repeating digit is " << digit << endl << "Number of repeats: " << i << endl;
}