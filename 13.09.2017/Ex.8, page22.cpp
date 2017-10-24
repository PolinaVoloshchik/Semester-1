#include "iostream"

using namespace std;

int main()
{
	int a, b, c;
	cout << " Input  a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	if ((a < b + c) && (a > % (b - c)) && (b < a + c) && (b > % (a - c)) && (c < b + a) && (c > % (b - a)))
		if ((a == b) && (b == c))
			cout << " Triangle is equilateral ";
		else
		{
			if (a == b || b == c || a == c)
				cout << " Triangle is isosceles";
			else cout << " Triangle is versatile";
		}
	return 0;
}

//