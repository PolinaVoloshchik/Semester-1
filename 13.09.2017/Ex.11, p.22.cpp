#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y;
	cout << "Enter point" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((y >= 0) && (x >= 0) && ((x*x) + (y*y) <= 1))
		cout << "Point belongs";
	else
	{
		if ((y <= 0) && (x <= 0) && (y >= -1) && (x >= -1))
			cout << "Point belongs";
		else cout << "Point doesn't belong";
	}
	return 0;
}

