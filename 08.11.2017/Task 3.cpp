#include <iostream>
#include "FunctionsForArrays.h"
#include "IntegerFunctions.h"

using namespace std;

int enterNumberOfElementsOfArray(int array[], const int N);
void enterArray(int array[], int n);
void displayArray(int array[], int n);
void counterOfSigns(int n, int array[], int& less, int& more, int& equal);
void whatSequence(int array[], int less, int more, int equal);

int main()
{
	const int N = 100;
	int array[N] = { 0 };
	
	int n = enterNumberOfElementsOfArray(array, N);

	enterArray(array, n);
	displayArray(array, n);
	int less = 0, more = 0, equal = 0;
	counterOfSigns(n, array, less, more, equal);
	cout << "less = " << less << " " << "more = " << more << " " << "equal = " << equal << endl;
	whatSequence(array, less, more, equal);
	system("pause");
}