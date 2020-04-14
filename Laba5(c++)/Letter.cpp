#include "Letter.h"
#include <iostream>

Letter::Letter(int size, const char *arr) :StringBase(size, arr) //конструктор з параметрами
{

}

void Letter::Reverse() //перевертання рядка
{
	for (int i = sizeof(Chars) - 1; i >= 0; i--)
	{
		std::cout<<(Chars[i]);
	}
	std::cout << "\n";
}

int Letter::get_size() //обчислення розміру рядка
{
	return size;
}

void Letter::Show() //виведення рядка на екран
{
	for (int i = 0; i < size; i++)
	{
		cout << Chars[i];
	}
	cout << endl;
}

string Letter::ToString() //обробка рядка
{
	return string(Chars);
}