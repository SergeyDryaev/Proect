#include<iostream>

/*
������� 1. � ��������� ������ � ����� ����� ���������� � ��� ����, ������ �� �������
�������� � ���� ���������� �������. ������������ ������ ��� ����������
�������: ������ �������� ������� � ����� �������� ������� ��� ������� ����.
����� �������� � 24 ������� ������� hh mm (���� � ������), ������
�������������, ��� ���� ������ ����� � ���������� �� 0 �� 23 �����, � ������
����� � ���������� �� 0 �� 59, ����� ������ ������ ������ ������
������� ��������� � ���������� �� ������ ������. ��������
���������, ������� ������� �� ������������ ���������� ������ ��� ���� �
�����, � ������� ������������ ����� ������� � �����. � ����� ��������� ������
������ ������, � ������� ����� ���������, ���� �������, ��� � ��� ����� ���
��������� ���� (no office is available).
��������, ������������ ������ ��� ���������� � ����� ���������:
10 00 20 00
9 00 21 00
12 30 19 30
19 45
��������� ����� �����:
1 2
*/

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int begin1_hh = 0, begin1_mm, end1_hh = 0, end1_mm = 0;
	int begin2_hh = 0, begin2_mm, end2_hh = 0, end2_mm = 0;
	int begin3_hh = 0, begin3_mm, end3_hh = 0, end3_mm = 0;
	int begin4_hh = 0, end4_mm = 0;
	int value = 0;

	cout << "������� ���������� ������ ������� ���� � ������� hh:mm :";
	cin >> begin1_hh >> begin1_mm;
	cin >> end1_hh >> end1_mm;

	cout << "������� ���������� ������ ������� ���� � ������� hh:mm :";
	cin >> begin2_hh >> begin2_mm;
	cin >> end2_hh >> end2_mm;

	cout << "������� ���������� ������ �������� ���� � ������� hh:mm :";
	cin >> begin3_hh >> begin3_mm;
	cin >> end3_hh >> end3_mm;

	cout << "� ����� ����� ������� �������� �����: ";
	cin >> begin4_hh;
	cin >> end4_mm;

		if  (begin4_hh >= begin1_hh && end4_mm >= begin1_mm && begin4_hh < end1_hh || begin4_hh <= end1_hh && end4_mm < end1_mm)
		{
			cout << "1 "; ++value;
		}

		if (begin4_hh >= begin2_hh && end4_mm >= begin2_mm && begin4_hh < end2_hh || begin4_hh <= end2_hh && end4_mm < end2_mm)
		{
			cout << "2 "; ++value;
		}

		if (begin4_hh >= begin3_hh && end4_mm >= begin3_mm && begin4_hh < end3_hh || begin4_hh <= end3_hh && end4_mm < end3_mm)
		{
			cout << "3 "; ++value;
		}
	
		if (value == 0)
		{
			cout << "no office is available";
		}

}