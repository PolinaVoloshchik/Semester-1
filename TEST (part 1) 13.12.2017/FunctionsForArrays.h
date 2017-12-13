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



//Меняет местами два элемента массива с индексами a и b
void swap(int array[], int a, int b)
{
	int c = array[a];
	array[a] = array[b];
	array[b] = c;
}

//Находит индекс элемента x
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

//Позволяет ввести элементы массива с клавиатуры
void enterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array [" << i << "] = ";
		cin >> array[i];
	}
}

//Позволяет ввести количество элементов массива
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

//Генерирует массив из "случайных" чисел
void generateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

//Отображает элементы массива на консоли
void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

//Сортирует массив по возрастанию "пузырьком"
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

//Сортирует массив по убыванию "пузырьком"
void bubbleSortDecrease(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < array[i + 1])
			swap(array, i, i + 1);
	}
}

//Сортировка массива по возрастанию методом прямого включения (direct inclusion method)
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

//Сортировка массива по убыванию методом прямого включения (direct inclusion method)
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

//Подсчитывает количество положительных, отрицательных и нулевых элементов массива
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

//Находит количество ch элементов массива из n элементов, меньших заданного числа с
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

//Находит количество ch элементов массива из n элементов, больших заданного числа с
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

//Считает количество знаков <, >, = между соседними элементами массива
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

//Определяет, какую последовательность образуют элементы массива
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

//Находит индексы первого и последнего нулевых элементов массива
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

//Находит произведение четных отрицательных элементов массива, стоящих на нечетных позициях между первым и последним нулевыми элементами
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

//Удаляет из массива положительные элементы
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

//Располагает нулевые элементы в конце массива, ненулевые - в начале, не меняя порядка следования
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