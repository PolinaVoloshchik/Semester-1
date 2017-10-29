#include <iostream>
using namespace std;
void counter(long long int x, int& less, int& more, int& equal);
void result(long long int n, int less, int more, int equal);

int main()
{
	long long int n;
	cout << "Enter n = ";
	cin >> n;
	int k, l, m;
	counter(n, k, l, m);
	result(n, k, l, m);
	system("pause");
}
	


void counter (long long int x, int& less, int& more, int& equal)
{
	int prev = x % 10, next = 0;
	x /= 10;
	while (x)
	{
		next = x % 10;
		if (prev == next) equal++;
		else if (prev > next) less++;
		else more++;
		prev = next;
		x /= 10;
	}
}


void result(long long int n, int less, int more, int equal)
{
	if ((less == 0) && (equal == 0))
		cout << "Number " << n << " is strictly decreasing" << endl;
	if ((less == 0) && (equal != 0))
		cout << "Number " << n << " is decreasing" << endl;
	if ((more == 0) && (equal == 0))
		cout << "Number " << n << " is strictly increasing" << endl;
	if ((more == 0) && (equal != 0))
		cout << "Number " << n << " is increasing" << endl;
	if ((more == 0) && (less == 0))
		cout << "Number " << n << " is monotonic" << endl;
	if ((more != 0) && (less != 0) && (equal != 0))
		cout << "Number " << n << " is unordered" << endl;
}