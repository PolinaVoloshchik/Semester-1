#include <iostream>
using namespace std;

void swap(int array[], int a, int b);
void enterArray(int array[], int n);
int enterNumberOfElementsOfArray(int array[], const int N);
void generateRandomArray(int array[], int n);
void displayArray(int array[], int n);
void sortIncrease(int array[], int n);
void sortDecrease(int array[], int n);
int linearSearchLess(int ch, int array[], int n, int c);
int linearSearchMore(int ch, int array[], int n, int c);
void counterOfSigns(int n, int array[], int& less, int& more, int& equal);
void whatSequence(int array[], int less, int more, int equal);



//������ ������� ��� �������� ������� � ��������� a � b
void swap(int array[], int a, int b)
{
	int c = array[a];
	array[a] = array[b];
	array[b] = c;
}


void enterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array [" << i << "] = ";
		cin >> array[i];
	}
}


int enterNumberOfElementsOfArray(int array[], const int N)
{
	int n1;
	while (true)
	{
		cout << "Enter n <= " << N << ": ";
		cin >> n1;
		if (n1 >= 1 && n1 <= N)
			break;
		cout << "Invalid data. Try again" << endl;
	}
	return n1;
}


//���������� ������ �� "���������" �����
void generateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		array[i] = rand() % 100;
}


//���������� �������� ������� �� �������
void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}


//��������� ������ �� �����������
void sortIncrease(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] > array[j])
				swap(array, i, j);
		}
	}
}



//��������� ������ �� ��������
void sortDecrease(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < array[i + 1])
			swap(array, i, i + 1);
	}
}


//������� ���������� ch ��������� ������� �� n ���������, ������� ��������� ����� �
int linearSearchLess(int ch, int array[], int n, int c)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < c)
		{
			ch++;
		}
	}
	return ch;
}


//������� ���������� ch ��������� ������� �� n ���������, ������� ��������� ����� �
int linearSearchMore(int ch, int array[], int n, int c)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] > c)
		{
			ch++;
		}
	}
	return ch;
}




//������� ���������� ������ <, >, = ����� ��������� ���������� �������
void counterOfSigns(int n, int array[], int& less, int& more, int& equal)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] < array[i + 1]) less++;
		else
			if (array[i] > array[i + 1]) more++;
			else equal++;
	}
}




//����������, ����� ������������������ �������� �������� �������
void whatSequence(int array[], int less, int more, int equal)
{
	if (less == 0 && equal == 0)
		cout << "Elements of array compose strictly decreasing sequence" << endl;
	if (less == 0 && equal != 0 && more != 0)
		cout << "Elements of array compose decreasing sequence" << endl;
	if (more == 0 && equal == 0)
		cout << "Elements of array compose strictly increasing sequence" << endl;
	if (more == 0 && equal != 0 && less != 0)
		cout << "Elements of array compose increasing sequence" << endl;
	if (more == 0 && less == 0)
		cout << "Elements of array compose monotonic sequence" << endl;
	if (more != 0 && less != 0)
		cout << "Elements of array compose unordered sequence" << endl;
}




//����������, ����� �� ����������� ������, � ���� �����, ��������� ������ �� ���������� (?)
//����� ������� ������
/* bool ok = true;
while (ok)
{
ok = false;
for (int j = n-1; j>i; j--)
if (array[j]<array[j-1])
{
ok = true;
swap ();
}
}
*/


//����� ������� ������
/*for(int i = 1; i <= n-1; i++)
{
int minpos = i-1;
for (int j = i; j < n; j++)
{
if (a[j] < a[minpos])
{
minpos = j;
}
}
swap(a[i - 1], a[minpos]);
}*/
