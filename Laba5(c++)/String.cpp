#include"StringBase.h"
#include <iostream>


StringBase::StringBase() :size(0) {}

StringBase::StringBase(int size, const char *arr) : size(size) 
{
	Chars = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		Chars[i] = arr[i];
	}
	
}

int StringBase::get_size() 
{
	return size;
}

void StringBase::Show() 
{
	std::cout << Chars;
}

string StringBase::ToString() 
{
	return string(Chars);
}