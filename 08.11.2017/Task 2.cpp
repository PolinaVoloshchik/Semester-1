#include <iostream>
#include "FunctionsForArrays.h"
#include "IntegerFunctions.h"

using namespace std;

void generateRandomArray(int array[], int n);
void displayArray(int array[], int n);
int linearSearchLess(int ch,int array[], int n, int c);
int enterNumberOfElementsOfArray(int array[], const int N);

int main()
{
	int c;
	const int N = 100;
	int array[N] = { 0 };

	int n = enterNumberOfElementsOfArray(array, N);

	cout << "Enter number: ";
	cin >> c;

	generateRandomArray(array, n);
	displayArray(array, n);
	int number = linearSearchLess(0, array, n, c);

	cout << endl << "Number of elements of array < " << c << " equals " << number << endl;
	system("pause");
}