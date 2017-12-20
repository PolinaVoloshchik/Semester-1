#include <iostream>
#include "stdafx.h"
#include "Matrix.h"
#include "IntegerFunctions.h"

using namespace std;

int main()
{
	/*int n, m;
	cout << "Enter number of lines n = ";
	cin >> n;
	cout << "Enter number of columns m = ";
	cin >> m;*/
	/*cout << "Enter number  0<k<50: ";
	cin >> k;*/

	int matrix[][N] = { 
	{ 1, 3, 2, -3 },
	{ -1, 8, 9, -4 },
	{ 0, -1, 5, -2 },
	{ 5, 7, -3, 0 }, 
	{ 4, 0, -2, -1 },
	{ 2, -2, 6, 9 }, 
	{ -1, 9, -1, 4 }};
	//generateRandomMatrix(matrix, n, m, 15);
	displayIntMatrix(matrix, 7, 4);

	sortMatrix(matrix, 7, 4);
	cout << endl;
	displayIntMatrix(matrix, 7, 4);

	sortColumnDecrease(matrix, 7, 4);
	cout << endl;
	displayIntMatrix(matrix, 7, 4);


	system("pause");
	return 0;
}

