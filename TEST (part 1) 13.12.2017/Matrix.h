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



//int array[n*m]; одномерный массив, представляющий матрицу из n строк и m столбцов
//a[m*i + j]; обращение к элементу i-ой строки j-ого столбца


//Позволяет ввести матрицу с клавиатуры
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


//Выводит форматированную матрицу из целых чисел на консоль
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


//Выводит форматированную матрицу из символов на консоль
void displayCharMatrix(char matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j];
		cout << endl;
	}
}


//Генерирует случайную матрицу
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


//Генерирует матрицу, все элементы каждой строки которой равны номеру этой строки +1
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


//Транспонирует матрицу
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



//Сортирует строки матрицы по возрастанию суммы элементов строки
void sortMatrixIncreaseSumRow(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			
		}
	}
}

//В квадратной матрице меняет местами центрально-симметричные квадраты
void removeCentralSquare(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
		for (int j = 0; j < n / 2; j++)
			swap(matrix[i][j], matrix[i + n / 2][j + n / 2]);

	for (int i = n-1; i >= n / 2; i--)
		for (int j = n/2-1; j >= 0; j--)
			swap(matrix[i][j], matrix[i - n / 2][j + n / 2]);
}


//Сортирует матрицу. В первом столбце первый элемент минимальный, во втором - два первых минимальные и т.д.
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


//Меняет местами элементы матрицы с индексами (i1, j1) и (i2, j2)
void swapMatrix(int matrix[][N], int i1, int j1, int i2, int j2)
{
	int x = matrix[i1][j1];
	matrix[i1][j1] = matrix[i2][j2];
	matrix[i2][j2] = x;
}