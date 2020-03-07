#pragma once
#include <cstring>
#include <string>

class Line
{
public:
	Line();

	Line(char* s);
	static Line InputLine(std::string s);
	char* GetSentence();
	int GetLength();
	int Count(char s);

private:
	char* sentence;
	int sentenceLength;

};