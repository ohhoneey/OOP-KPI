#include <iostream>
#include "MyString.h"
#include "Text.h"


int main()
{


	Text text;

	text.AddLine(Line::InputLine("like the life"));//додавання рядка до тексту
	text.AddLine(Line::InputLine("who are you"));//додавання рядка до тексту
	text.AddLine(Line::InputLine("viktoria"));//додавання рядка до тексту
	text.AddLine(Line::InputLine("viktoria"));//додавання рядка до тексту
	text.AddLine(Line::InputLine("tory"));//додавання рядка до тексту
	text.AddLine(Line::InputLine("house"));//додавання рядка до тексту

	cout << text.AllSymbols() << endl;//підрахунок всіх символів в тексті
	cout << Line::InputLine("Hello world").Count('l') << endl;//підрахунок заданого символу в рядку
	text.Replace(2, Line::InputLine("baby"));//заміна рядка іншим підрядком
	text.Double();//видалення дублюючих рядків

	text.ShowText();//виведення тексту на екран
	

	return 0;
}
