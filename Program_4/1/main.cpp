#include<iostream>

using namespace std;

/*
������������ ������ ���������� �������� ����� �� �������������� ���������,
������� ����� ����������, � ����� ������ ���� ��������. �������� ����������
���������� ����� �� ������ ������������.
��������:
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


	cout << "������� �������� ����� ������ ������: " << endl;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cout << "������� ��������: ";
		cin >> year;

		if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
		{
			++value_year;
		}

		cout << endl;
	}

	cout << "Leap years count: " << value_year;
}