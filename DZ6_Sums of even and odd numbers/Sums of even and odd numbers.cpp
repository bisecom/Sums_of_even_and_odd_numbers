// Sums of even and odd numbers
#include <iostream>
using namespace std;

void main()
{
	int i, chet, nechet, a[10]; // ќбъ€вл€ем целочисленную переменную и один массив

	chet = 0;

	nechet = 0;

	cout << "Please, enter 10 numbers via Enter:" << endl;

	for (i = 0; i < 10; i++)
	{
		cin >> a[i]; // ¬водим значение дл€ каждой €чейки массива
	}

	for (int i = 0; i<10; i++)
	{
		if (a[i] % 2 == 0) //четное;

			chet += a[i];

		else //не четное;

			nechet += a[i];
	}
	cout << "Sum of the even numbers = " << chet << "\n";

	cout << "Sum of the odd numbers = " << nechet <<endl;
}
