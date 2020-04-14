#pragma once
#include "StringBase.h"

class Numbers : public StringBase
{
public:
	Numbers(int size, const char *arr); //конструктор з параметрами
	int get_size() override; //обчислення розміру рядка
	virtual void Enlargment(); //отримання довжини рядка
	void Show() override; //виведення рядка на екран
	string ToString() override; //обробка рядка

private:

};
