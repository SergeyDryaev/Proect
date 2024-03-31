#include<iostream>
//Задание 1.Считайте от пользователя три числа.Выведете в консоль наименьшее из них.

using namespace std;



void main()
{
	setlocale(LC_ALL, "ru");

	int x = 0, y = 0, z = 0;

	cout << "Введите 1 число: ";
	cin >> x;

	cout << "Введите 2 число: ";
	cin >> y;

	cout << "Введите 3 число: ";
	cin >> z;

	if (x > y && z > y)
	{
		cout << "Наименшее число " << y;
	}

	if (y > x && z > x)
	{
		cout << "Наименшее число " << x;
	}

	if (x > z && y > z)
	{
		cout << "Наименшее число " << z;
	}
	
	else if(x == y  && x == z)
	{
		cout << "Числа равны!";
	}

}