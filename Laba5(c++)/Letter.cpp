#include "Letter.h"
#include <iostream>

Letter::Letter(int size, const char *arr) :StringBase(size, arr) //����������� � �����������
{

}

void Letter::Reverse() //������������ �����
{
	for (int i = sizeof(Chars) - 1; i >= 0; i--)
	{
		std::cout<<(Chars[i]);
	}
	std::cout << "\n";
}

int Letter::get_size() //���������� ������ �����
{
	return size;
}

void Letter::Show() //��������� ����� �� �����
{
	for (int i = 0; i < size; i++)
	{
		cout << Chars[i];
	}
	cout << endl;
}

string Letter::ToString() //������� �����
{
	return string(Chars);
}