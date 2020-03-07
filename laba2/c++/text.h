#pragma once
#include <iostream>
#include "MyString.h"
using namespace std;

class Text
{
public:
	Text();

	void AddLine(Line line);//додавання рядка до тексту
	void ShowText();//виведення тексту на екран
	void RemoveLine(int index);//видалення рядка
	void ClearText();//видалення тексту
	int AllSymbols();//підрахунок всіх символів
	void Replace(int index, Line line);//заміна підрядка
	void Double();//видалення дублюючих рядків

private:
	Line* text; //вказівник на текст
	int SentenceCounter;//кількість рядків в тексті
};