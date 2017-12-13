#include <iostream>
#include "FunctionsForArrays.h"

using namespace std;

int main()
{
	const int N = 50;
	int array[N];
	int n = enterNumberOfElementsOfArray(array, N);

	int a;
	cout << "Enter a > 0: ";
	cin >> a;

	generateRandomArray(array, n, a);
	displayArray(array, n);

	int ind1 = -1, ind2 = -1;
	firstLastNoughts(array, n, ind1, ind2);

	cout << "Product of even negative numbers: " << findProductOfEvenNegativeNumbers(array, n, ind1, ind2) << endl;

	deletePositiveElements(array, n);
	displayArray(array, n);

	sortNoughtsInTheEnd(array, n);
	displayArray(array, n);

	system("pause");
}