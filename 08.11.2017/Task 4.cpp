#include <iostream>
#include "FunctionsForArrays.h"

using namespace std;

int main()
{
	const int N = 100;
	int array[N] = { 0 };

	int n = enterNumberOfElementsOfArray(array, N);

	enterArray(array, n);
	displayArray(array, n);
	int pos = 0, neg = 0, zero = 0;
	countPosNegZero(array, n, pos, neg, zero);
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;
	cout << "Zero: " << zero << endl;
	system("pause");
}