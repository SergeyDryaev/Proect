#include<iostream>
//������� 1.�������� �� ������������ ��� �����.�������� � ������� ���������� �� ���.

using namespace std;



void main()
{
	setlocale(LC_ALL, "ru");

	int x = 0, y = 0, z = 0;

	cout << "������� 1 �����: ";
	cin >> x;

	cout << "������� 2 �����: ";
	cin >> y;

	cout << "������� 3 �����: ";
	cin >> z;

	if (x > y && z > y)
	{
		cout << "��������� ����� " << y;
	}

	if (y > x && z > x)
	{
		cout << "��������� ����� " << x;
	}

	if (x > z && y > z)
	{
		cout << "��������� ����� " << z;
	}
	
	else if(x == y  && x == z)
	{
		cout << "����� �����!";
	}

}