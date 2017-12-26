#include <iostream>
using namespace std;

int getLength(char array[]);
bool isAlphabet(char ch);
bool isAlphabetUpperCase(char ch);
bool isAlphabetLowerCase(char ch);
void toUpper(char array[]);
bool equals(char leftarray[], char rightarray[]);
int findIndexChar(char array[], char x);
int findOrder(char leftarray[], char rightarray[]);
int findIndexSubstring(char array[], char substring[]);




//Находит длину строки без '/0'
int getLength(char array[])
{
	int i = 0;

	while (array[i])
	{
		i++;
	}

	return i;
}

//Определяет, является ли символ буквой латинского алфавита
bool isAlphabet(char ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

//Определяет, является ли символ заглавной буквой латинского алфавита
bool isAlphabetUpperCase(char ch)
{
	return  (ch >= 'A' && ch <= 'Z');
}

//Определяет, является ли символ строчной буквой латинского алфавита
bool isAlphabetLowerCase(char ch)
{
	return  (ch >= 'a' && ch <= 'z');
}

//Делает все буквы строки заглавными
void toUpper(char array[])
{
	int length = getLength(array);
	int difference = 'a' - 'A';

	for (int i = 0; i < length; i++)
	{
		char ch = array[i];
		if (isAlphabetLowerCase(ch))
		{
			ch += difference;
		}
	}
}

//Проверяет строки на равенство
bool equals(char leftarray[], char rightarray[])
{
	bool result;
	int a = getLength(leftarray), b = getLength(rightarray);
	if (a != b)
	{
		result = false;
	}

	for (int i = 0; i < a; i++)
	{
		if (leftarray[i] != rightarray[i])
			result = false;
	}
	result = true;
	return result;
}

//Находит индекс i первого вхождения символа x в строке
int findIndexChar(char array[], char x)
{
	for (int i = 0; i <= getLength(array); i++)
	{
		if (array[i] == x) return i;
	}
}

//Определяет соотношение строк (больше/меньше/равны) по ASCII коду
int findOrder(char leftarray[], char rightarray[])
{
	int result = -1;
	for (int i = 0, j = 0; i < getLength(leftarray), j < getLength(rightarray); i++, j++)
	{
		if (leftarray[i] > rightarray[j])
			result = 1;
		else
			if (leftarray[i] < rightarray[j])
				result = 0;
	}
	return result;
}

//Находит индекс первого вхождения подстроки в строке
int findIndexSubstring(char array[], char substring[])
{
	int length1 = getLength(array), length2 = getLength(substring);
	int ind = -1 + length2 - 1;
	for (int i = 0; i < length2; i++)
	{
		for (int j = 0; j < length1; j++)
		{
			if ((substring[i] == array[j]) && (i < length2))
			{
				ind = j;
				i++;
			}
		}
	}
	return ind - length2 +1;
}
