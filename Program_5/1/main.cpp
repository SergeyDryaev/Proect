#include<iostream>

using namespace std;

/*
������� �� ����� ��������� �� �������� * � �������� �������� ������.
������������ ������ ���� ����� ������������� ����� �� ������������� 100 -
������ ���������, ��������� ������ ��������� �� ��������� ����� �����
������:

     *
    * *
   * * *
  * * * *
 * * * * *
*/
void main()
{
	setlocale(LC_ALL, "ru");
	int number = 0;

	cout << "������� ����� �� ������������� 100 : ";
	cin >> number;

	if (number <= 100)
	{
		for (int i = 1; i <= number; ++i)
		{

			for (int j = 0; j < number - i; ++j)
			{
				cout << " ";
			}

			for (int z = 0; z < i; ++z)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "ERROR!";
	}

}