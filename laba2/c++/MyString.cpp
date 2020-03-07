#include "MyString.h"

Line::Line() {}

Line::Line(char* s) //обгортка для масиву символів
{

	this->sentence = s;
}
Line Line::InputLine(std::string s)//обробка масиву символів
{
	int len = s.length();
	char* p = new char[len + 1];

	for (int i = 0; i < len; i++) {
		p[i] = s[i];
	}
	p[len] = 13;


	Line line(p);

	return line;
}


char* Line::GetSentence() //повернення рядка
{
	return sentence;
}

int Line::GetLength()//довжина рядка
{
	int lineLength = 0;
	for (int i = 0; sentence[i] != 13; i++)
	{
		lineLength++;
	}
	return lineLength;
}

int Line::Count(char s)//підрахунок певного символу
{
	int counter = 0;
	for(int i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i] == s)
		{
			counter++;
		}
	}
	return counter;
}