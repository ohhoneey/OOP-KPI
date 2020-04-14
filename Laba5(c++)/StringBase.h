#pragma once
#include <string>

using namespace std;

class StringBase
{
public:
	StringBase(); //конструктор за замовчуванням
	StringBase(int size, const char *arr); //конструктор з параметрами
	virtual int get_size(); //отримання довжини масиву
	virtual void Show(); //виведення масиву на екран
	virtual string ToString(); //обробка рядка

protected:
	char *Chars{};
	int size;
	


};
