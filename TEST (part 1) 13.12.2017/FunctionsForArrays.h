#include <iostream>
using namespace std;

void swap(int array[], int a, int b);
int findIndex(int array[], int n, int x);
void enterArray(int array[], int n);
int enterNumberOfElementsOfArray(int array[], const int N);
void generateRandomArray(int array[], int n, int range);
void displayArray(int array[], int n);
void bubbleSortIncrease(int array[], int n);
void bubbleSortDecrease(int array[], int n);
void sortIncreaseDIM(int array[], int n);
void sortDecreaseDIM(int array[], int n);
void countPosNegZero(int array[], int n, int& positive, int& negative, int& zero);
int linearSearchLess(int ch, int array[], int n, int c);
int linearSearchMore(int ch, int array[], int n, int c);
void counterOfSigns(int n, int array[], int& less, int& more, int& equal);
void whatSequence(int array[], int less, int more, int equal);
void firstLastNoughts(int array[], int n, int& ind1, int& ind2);
int findProductOfEvenNegativeNumbers(int array[], int n, int ind1, int ind2);
void deletePositiveElements(int array[], int& n);
void sortNoughtsInTheEnd(int array[], int n);



//������ ������� ��� �������� ������� � ��������� a � b
void swap(int array[], int a, int b)
{
	int c = array[a];
	array[a] = array[b];
	array[b] = c;
}

//������� ������ �������� x
int findIndex(int array[], int n, int x)
{
	int ind = -1;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == x)
		{
			ind = i;
			break;
		}
	}
	return ind;
}

//��������� ������ �������� ������� � ����������
void enterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array [" << i << "] = ";
		cin >> array[i];
	}
}

//��������� ������ ���������� ��������� �������
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
void generateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

//���������� �������� ������� �� �������
void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

//��������� ������ �� ����������� "���������"
void bubbleSortIncrease(int array[], int n)
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

//��������� ������ �� �������� "���������"
void bubbleSortDecrease(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < array[i + 1])
			swap(array, i, i + 1);
	}
}

//���������� ������� �� ����������� ������� ������� ��������� (direct inclusion method)
void sortIncreaseDIM(int array[], int n)
{
	
	for (int j = 0; j < n; j++)
	{
		int min = array[j];
		for (int i = j + 1; i < n; i++)
		{
			if (array[i] < min) min = array[i];
		}
		swap(array, j, findIndex(array, n, min));
	}
}

//���������� ������� �� �������� ������� ������� ��������� (direct inclusion method)
void sortDecreaseDIM(int array[], int n)
{

	for (int j = 0; j < n; j++)
	{
		int max = array[j];
		for (int i = j + 1; i < n; i++)
		{
			if (array[i] > max) max = array[i];
		}
		swap(array, j, findIndex(array, n, max));
	}
}

//������������ ���������� �������������, ������������� � ������� ��������� �������
void countPosNegZero(int array[], int n, int& positive, int& negative, int& zero)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0)
			positive++;
		else
			if (array[i] < 0)
				negative++;
			else zero++;
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

//������� ������� ������� � ���������� ������� ��������� �������
void firstLastNoughts(int array[], int n, int& ind1, int& ind2)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] == 0)
		{
			ind1 = i;
			break;
		}
	}

	for (int i = n-1; i >= 0; i--)
	{
		if (array[i] == 0)
		{
			ind2 = i;
			break;
		}
	}

	if (ind1 == -1 && ind2 == -1)
		cout << "There are no noughts in the array" << endl;
	else
		cout << "First nought: i = " << ind1 << endl << "Last nought: i = " << ind2 << endl;
}

//������� ������������ ������ ������������� ��������� �������, ������� �� �������� �������� ����� ������ � ��������� �������� ����������
int findProductOfEvenNegativeNumbers(int array[], int n, int ind1, int ind2)
{
	int product;
	if(ind1 == ind2 || ind2 == ind1 + 1)
	{ 
		product = 0;
	}
	else
	{
		product = 1;
		int i;

		if (ind1 % 2 == 0)
			i = ind1 + 1;
		else
			i = ind1 + 2;

		for (i; i < ind2; i = i + 2)
		{
			if (array[i] % 2 == 0 && array[i] < 0)
				product = product*array[i];
		}
	}

	return product;
}

//������� �� ������� ������������� ��������
void deletePositiveElements(int array[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0)
		{
			for (int j = i; j < n - 1; j++)
				array[j] = array[j + 1];
			n--;
			i--;
		}
	}
}

//����������� ������� �������� � ����� �������, ��������� - � ������, �� ����� ������� ����������
void sortNoughtsInTheEnd(int array[], int n)
{
	int z;
	for (int i = 0; i < n-1; i++)
	{
		if (array[i] == 0 && array[i + 1] != 0)
			swap(array, i, i + 1);
		else
			for (int j = i + 1; j < n - 1; j++)
				if (array[j] == 0 && array[j + 1] != 0)
					swap(array, j, j + 1);
	}
}