#include "Number.h"
#include <iostream>

Numbers::Numbers(int size, const char *arr) :StringBase(size, arr) //����������� � �����������
{

}

int Numbers::get_size() //���������� ������ �����
{
	return size;
}

void Numbers::Enlargment() // ��������� ����� �����
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

void Numbers::Show() //��������� ����� �� �����
{
	for (int i = 0; i < size; i++) 
	{
		cout << Chars[i];
	}
	cout << endl;
}

string Numbers::ToString() //������� �����
{
	return string(Chars);
}