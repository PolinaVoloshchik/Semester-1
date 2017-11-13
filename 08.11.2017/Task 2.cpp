#include <iostream>
using namespace std;
void generateRandomArray(int array[], int n, int range);
void displayArray(int array[], int n);
int numberOfLessThan(int ch,int array[], int n, int c);

int main()
{
	int c, n;
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
	cout << "Enter number: ";
	cin >> c;
	generateRandomArray(array, n, N);
	displayArray(array, n);
	int number = numberOfLessThan(0, array, n, c);
	cout << endl << "Number of elements of array < " << c << " equals " << number << endl;
	system("pause");
}


void generateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
		array[i] = rand() % range - range / 2;             //0..range - 1	
}


void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
}


int numberOfLessThan(int ch, int array[], int n, int c)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < c) ch++;
	}
	return ch;
}