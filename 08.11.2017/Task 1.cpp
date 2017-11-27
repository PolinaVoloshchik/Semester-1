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
	sortIncrease(array, n);
	displayArray(array, n);
	system("pause");
}