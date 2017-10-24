#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cout << "Enter n = " << endl;
	cin >> n;
	int a;
	while (true)
	{
		cout << "Enter a < n: " << endl;
		cin >> a;
		if (a < n) break;
		cout << "Invalid data! Try again" << endl;
	}
	int c1 = pow(a, n) % n;
	int c2 = a % n;
	if (c1 == c2) cout << n << " is simple number";
	else cout << n << " isn't simple number";
}