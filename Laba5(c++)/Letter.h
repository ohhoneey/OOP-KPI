#pragma once
#include"StringBase.h"


class Letter : public StringBase
{
public:
	Letter(int size, const char *arr); //конструктор з параметрами
	virtual void Reverse(); //перевертанн€ р€дка
	int get_size() override; //отриманн€ довжини р€дка
	void Show() override; //виведенн€ р€дка на екран
	string ToString() override; //обробка р€дка
	
	

private:

};

