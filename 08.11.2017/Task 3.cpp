#include <iostream>
#include <IntegerFunctions.h>
using namespace std;
void generateRandomArray(int array[], int n);
void displayArray(int array[], int n);
void counterOfSigns(int n, int array[], int& less, int& more, int& equal);
void whatSequence(int array[], int& less, int& more, int& equal);


int main()
{
	int n;
	const int N = 100;
	int array[N] = { 0 };
	while (true)
	{
		cout << "Enter n <= " << N << ": ";
		cin >> n;
		if (n >= 1 && n <= N)
			break;
		cout << "Invalid data. Try again" << endl;
	}
	generateRandomArray(array, n);
	displayArray(array, n);
	int less = 0, more = 0, equal = 0;
	counterOfSigns(n, array, less, more, equal);
	cout << "less = " << less << " " << "more = " << more << " " << "equal = " << equal << endl;
	whatSequence(array, less, more, equal);
	system("pause");
}


void generateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		array[i] = rand()%100;             //0..range - 1	
}


void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}


void counterOfSigns(int n, int array[], int& less, int& more, int& equal)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] < array[i + 1]) more++;
		else
			if (array[i] > array[i + 1]) less++;
			else equal++;
	}
}



void whatSequence(int array[], int& less, int& more, int& equal)
{
	if ((less == 0) && (equal == 0))
		cout << "Elements of array compose strictly decreasing sequence" << endl;
	if ((less == 0) && (equal != 0))
		cout << "Elements of array compose decreasing sequence" << endl;
	if ((more == 0) && (equal == 0))
		cout << "Elements of array compose strictly increasing sequence" << endl;
	if ((more == 0) && (equal != 0))
		cout << "Elements of array compose increasing sequence" << endl;
	if ((more == 0) && (less == 0))
		cout << "Elements of array compose monotonic sequence" << endl;
	if (((more != 0) && (less != 0)) || ((equal != 0) && (less != 0)) || ((equal != 0)&& (more != 0)))
		cout << "Elements of array compose unordered sequence" << endl;
}


