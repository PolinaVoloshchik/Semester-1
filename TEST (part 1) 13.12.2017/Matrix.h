#include <iostream>
#define N 100

using namespace std;

void enterMatrix(int matrix[][N], int n, int m);
void displayIntMatrix(int matrix[][N], int n, int m);
void displayCharMatrix(char matrix[][N], int n, int m);
void generateRandomMatrix(int matrix[][N], int n, int m, int k);
void generateMatrix(int matrix[][N], int n, int m);
void transposeMatrix(int matrix[][N], int n);
void sortMatrixIncreaseSumRow(int matrix[][N], int n, int m);
void removeCentralSquare(int matrix[][N], int n);
void sortMatrix(int matrix[][N], int n, int m);
void sortColumnDecrease(int matrix[][N], int n, int m);
void bubbleSortDecrease(int array[], int n);
void swapMatrix(int matrix[][N], int i1, int j1, int i2, int j2);



//int array[n*m]; ���������� ������, �������������� ������� �� n ����� � m ��������
//a[m*i + j]; ��������� � �������� i-�� ������ j-��� �������


//��������� ������ ������� � ����������
void enterMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}


//������� ��������������� ������� �� ����� ����� �� �������
void displayIntMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}


//������� ��������������� ������� �� �������� �� �������
void displayCharMatrix(char matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j];
		cout << endl;
	}
}


//���������� ��������� �������
void generateRandomMatrix(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 10;// -k / 2;
		}
	}
}


//���������� �������, ��� �������� ������ ������ ������� ����� ������ ���� ������ +1
void generateMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = i + 1;
		}
	}
}


//������������� �������
void transposeMatrix(int matrix[][N], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}



//��������� ������ ������� �� ����������� ����� ��������� ������
void sortMatrixIncreaseSumRow(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			
		}
	}
}

//� ���������� ������� ������ ������� ����������-������������ ��������
void removeCentralSquare(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
		for (int j = 0; j < n / 2; j++)
			swap(matrix[i][j], matrix[i + n / 2][j + n / 2]);

	for (int i = n-1; i >= n / 2; i--)
		for (int j = n/2-1; j >= 0; j--)
			swap(matrix[i][j], matrix[i - n / 2][j + n / 2]);
}


//��������� �������. � ������ ������� ������ ������� �����������, �� ������ - ��� ������ ����������� � �.�.
void sortMatrix(int matrix[][N], int n, int m)
{
	for (int j = 0; j < m; j++)
	{
		for (int k = j; k < m; k++)
		{
			int min = j;
			for (int i = j; i < n - 1; i++)
			{
				if (matrix[i + 1][k] < matrix[min][k])
					min = i+1;
			}
			swap(matrix[min][k], matrix[j][k]);
		}
	}
}


void sortColumnDecrease(int matrix[][N], int n, int m)
{
	
	for (int j = 0; j < m; j++)
	{
		int array[N] = { 0 };
		int k, i;
		for (i = j+1, k = 0; i < n, k < n - j - 1; i++, k++)
			array[k] = matrix[i][j];

		bubbleSortDecrease(array, k);

		for (i = j+1, k = 0; i < n, k < n - j - 1; i++, k++)
			matrix[i][j] = array[k];
	}
}

void bubbleSortDecrease(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] < array[j])
				swap(array[i], array[j]);
		}
	}
}


//������ ������� �������� ������� � ��������� (i1, j1) � (i2, j2)
void swapMatrix(int matrix[][N], int i1, int j1, int i2, int j2)
{
	int x = matrix[i1][j1];
	matrix[i1][j1] = matrix[i2][j2];
	matrix[i2][j2] = x;
}