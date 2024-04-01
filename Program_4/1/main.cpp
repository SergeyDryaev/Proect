#include<iostream>

using namespace std;

/*
Пользователь вводит количество значений годов по григорианскому календарю,
которые хочет обработать, и затем вводит сами значения. Выведите количество
високосных годов из списка пользователя.
Например:
5
1900
1908
2000
2100
2003
Leap years count: 2
*/

void main()
{
	setlocale(LC_ALL, "ru");

	int year = 0, value_year = 0, size = 0;


	cout << "Сколько значений годов хотите ввести: " << endl;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cout << "Введите значение: ";
		cin >> year;

		if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
		{
			++value_year;
		}

		cout << endl;
	}

	cout << "Leap years count: " << value_year;
}