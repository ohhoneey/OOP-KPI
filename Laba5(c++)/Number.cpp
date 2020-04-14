#include "Number.h"
#include <iostream>

Numbers::Numbers(int size, const char *arr) :StringBase(size, arr) //конструктор з параметрами
{

}

int Numbers::get_size() //обчислення розміру рядка
{
	return size;
}

void Numbers::Enlargment() // збільшення рядка вдвічі
{
	int new_size(size * 2);
	char *new_array = new char[new_size + 1];

	for (int i = 0;i < new_size; i+= size)
	{
		for(int j = 0; j < new_size; j++)
		{
			new_array[i + j] = Chars[j];
			
		}
		
	}
	size = new_size;
	Chars = new_array;
	memcpy(Chars, new_array, size);
	for (int i = 0; i < new_size; i++)
	{
		cout << new_array[i];
	}

}

void Numbers::Show() //виведення рядка на екран
{
	for (int i = 0; i < size; i++) 
	{
		cout << Chars[i];
	}
	cout << endl;
}

string Numbers::ToString() //обробка рядка
{
	return string(Chars);
}