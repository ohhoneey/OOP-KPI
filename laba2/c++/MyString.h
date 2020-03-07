#pragma once
#include <cstring>
#include <string>

class Line
{
public:
	Line();

	Line(char* s);//обгортка для масиву символів
	static Line InputLine(std::string s);//обробка рядка
	char* GetSentence();//повернення рядка
	int GetLength();//довжина рядка
	int Count(char s);//кількість входження сиволу

private:
	char* sentence;//вказівник на рядок
	int sentenceLength;//розмір рядка

};