#include "Point.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukr");
	bcs::Line a[4];
	
	a[0].set1(11, 22); //������� �����
	a[0].set2(11, 22); //������� �����
	a[1].set1(-10, 15); //������� �����
	a[1].set2(2, 3); //������� �����
	a[2].Copy(a[1]);//����������� ���������
	a[3]; //������� ������
	cout << "�������� �i����i� I� - 92" << endl;
	cout << "�i��i��� 1" << endl;
	a[0].Show();//��������� ��������� ������ �� �����
	cout << "�i��i��� 2 �� �����" << endl;
	a[2].Show();//��������� ��������� ������ �� �����
	a[2].Move(-3, 0);
	cout << "�i��i��� 2 �i��� �����" << endl;
	a[2].Show(); //��������� ��������� ������ �� �����
	try
	{
		cout << "������� �i��i��� 1 = " << a[0].len() << endl; //��������� ������� ������ �� �����
	}
	catch (exception &e) 
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << "������� �i��i��� 2 = " << a[1].len() << endl; //��������� ������� ������ �� �����
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		a[3] = a[0] + a[1];//���������
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "����i��� ������i� ���������"<<endl;
	a[3].Show();
	
	
	


	_getch();

	return 0;
}