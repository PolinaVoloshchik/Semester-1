#include <iostream>
using namespace std;


//Определяет, является ли число х меньше заданного value
double moreThan(double value)
{
	double x;
	while (true)
	{
		cout << "Enter x > " << value << ": ";
		cin >> x;
		if (x > value)
			return x;
		cout << "Invalid data!" << endl;
	}
}


//Ïðîâåðêà x< ââåäåííîãî çíà÷åíèÿ
double lessThan(double value)
{
	double x;
	while (true)
	{
		cout << "Enter x < " << value << ": ";
		cin >> x;
		if (x < value)
			return x;
		cout << "Invalid data!" << endl;
	}
}


//Ïðîâåðêà íàõîæäåíèÿ õ ìåæäó äâóìÿ ââåäåííûìè âåëè÷èíàìè
double between(double a, double b)
{
	double eps;
	while (true)
	{
		cout << "Enter " << a << " < eps < " << b << " : ";
		cin >> eps;
		if (eps < b && eps > a)
			return eps;
		cout << "Invalid data! Try again" << endl;
	}
}



//Íàõîæäåíèå êîñèíóñà ÷èñëà ñ ïîìîùüþ ðÿäà Òåéëîðà
double cosTaylor(double x, double eps)
{
	double term = x, sum = 0;
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i + 1) / (2 * i + 2);
	}
	return sum;
}




//Íàõîæäåíèå ñèíóñà ÷èñëà ñ ïîìîùüþ ðÿäà Òåéëîðà
double sinTaylor(double x, double eps)
{
	double term = x, sum = 0;
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i) / (2 * i + 1);
	}
	return sum;
}


//Íàõîäèò ÷èñëî-ïåðåâ¸ðòûø ê äàííîìó
long long int inverseNumber(long long int x)
{
	long long inverse = 0;
	int rest = 0;
	while (x)                                  //while (x != 0)
	{
		rest = x % 10;
		inverse = inverse * 10 + rest;
		x /= 10;
	}
	return inverse;
}



//Îïðåäåëÿåò, ÿâëÿåòñÿ ëè ÷èñëî ïàëèíäðîìîì (÷èòàåòñÿ îäèíàêîâî ñïðàâà íàëåâî è ñëåâà íàïðàâî), ãäå à - ñàìî ÷èñëî, b - ïåðåâ¸ðòûø
bool isPolindrome(long long int a, long long int b)
{
	if (a == b)
		return 1;
	else return 0;
}


//Ñ÷èòàåò êîëè÷åñòâî çíàêîâ <, >, = ìåæäó êàæäûìè äâóìÿ öèôðàìè â ÷èñëå
void counterOfSigns(long long int x, int& less, int& more, int& equal)
{
	int prev = x % 10, next = 0;
	x /= 10;
	while (x)
	{
		next = x % 10;
		if (prev == next) equal++;
		else if (prev > next) less++;
		else more++;
		prev = next;
		x /= 10;
	}
}



//Îïðåäåëÿåò, êàêóþ ïîñëåäîâàòåëüíîñòü îáðàçóþò öèôðû ÷èñëà
void whatSequence(long long int n, int less, int more, int equal)
{
	if ((less == 0) && (equal == 0))
		cout << "Number " << n << " is strictly decreasing" << endl;
	if ((less == 0) && (equal != 0))
		cout << "Number " << n << " is decreasing" << endl;
	if ((more == 0) && (equal == 0))
		cout << "Number " << n << " is strictly increasing" << endl;
	if ((more == 0) && (equal != 0))
		cout << "Number " << n << " is increasing" << endl;
	if ((more == 0) && (less == 0))
		cout << "Number " << n << " is monotonic" << endl;
	if ((more != 0) && (less != 0) && (equal != 0))
		cout << "Number " << n << " is unordered" << endl;
}


//Íàõîäèò äëèíó ñàìîé äëèííîé ïîñëåäîâàòåëüíîñòè ïîâòîðÿþùåéñÿ öèôðû â ÷èñëå è ñàìó ýòó öèôðó
void countRepeatingDigit(int i, long long int x, int digit)
{
	int prevCur = 0, nextCur = 0, digitCur = 0, iCur = 1;
	nextCur = x % 10;
	while (x)
	{
		prevCur = nextCur;
		x = x / 10;
		nextCur = x % 10;
		if (prevCur == nextCur)
		{
			iCur++;
			digitCur = nextCur;
		}
		else
			if (iCur >= i)
			{
				i = iCur;
				digit = digitCur;
				iCur = 1;
			}
	}
	cout << "Repeating digit is " << digit << endl << "Number of repeats: " << i << endl;
}




//Çàìåíÿåò â ÷èñëå n öèôðó n1 íà öèôðó n2, ïðè ýòîì ïåðåâîðà÷èâàÿ åãî ñïðàâà íàëåâî
long long int replacing(long long int n, int n1, int n2)
{
	long long newN = 0;
	int rest = 0;
	while (n)
	{
		rest = n % 10;
		if (rest == n1) rest = n2;
		newN = newN * 10 + rest;
		n /= 10;
	}
	return newN;
}


//Óäàëÿåò âñå âõîæäåíèÿ çàäàííîé öèôðû n1 èç ÷èñëà n, ïðè ýòîì ïåðåâîðà÷èâàÿ åãî ñïðàâà íàëåâî
long long int deleting(long long int n, int n1)
{
	long long newN = 0;
	int rest = 0;
	while (n)
	{
		rest = n % 10;
		if (rest != n1) newN = newN * 10 + rest;
		n /= 10;
	}
	return newN;
}


//Íàõîäèò êîëè÷åñòâî åäèíèö â äâîè÷íîé çàïèñè ÷èñëà
int numberOfUnits(long long int number, int i)
{
	int digit;
	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 1)
			i++;
		number = number / 2;
	}
	if (number == 1) i++;
	return i;
}



//Íàõîäèò êîëè÷åñòâî íóëåé â äâîè÷íîé çàïèñè ÷èñëà
int numberOfNoughts(long long int number, int i)
{
	int digit;
	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 0)
			i++;
		number = number / 2;
	}
	if (number == 0) i++;
	return i;
}


//Êîíâåðòèðóåò ñèìâîë â øåñòíàäöàòèðè÷îé ñèñòåìå â îñòàòîê îò äåëåíèÿ íà 16
void convertSymbolToNumber(char symbol, int& digit)
{
	switch (symbol)
	{
	case '1':
		digit = 1;
		break;
	case '2':
		digit = 2;
	case '3':
		digit = 3;
		break;
	case '4':
		digit = 4;
		break;
	case '5':
		digit = 5;
		break;
	case '6':
		digit = 6;
		break;
	case '7':
		digit = 7;
		break;
	case '8':
		digit = 8;
		break;
	case '9':
		digit = 9;
		break;
		break;
	case 'A':
		digit = 10;
		break;
	case 'B':
		digit = 11;
		break;
	case 'C':
		digit = 12;
		break;
	case 'D':
		digit = 13;
		break;
	case 'E':
		digit = 14;
		break;
	case 'F':
		digit = 15;
		break;
	}
}



//Íàõîäèò êîëè÷åñòâî âõîæäåíèé i äàííîãî ñèìâîëà digitS â øåñòíàäöàòèðè÷íîé çàïèñè ÷èñëà number
int counter(long long int number, int i, int digitS)
{
	int digit;
	while (number)
	{
		digit = number % 16;
		if (digit == digitS)
			i = i + 1;
		number = number / 16;
	}
	return i;
}
