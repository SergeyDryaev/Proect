#include<iostream>

using namespace std;

/*
Вывести на экран пирамидку из символов * и пробелов заданной высоты.
Пользователь вводит одно целое положительное число не превосходящее 100 -
высоту пирамидки, программа рисует пирамидку из заданного числа строк
Пример:

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

	cout << "Введите число не превосходящее 100 : ";
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