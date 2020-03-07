#pragma once
#include <iostream>
#include "MyString.h"
using namespace std;

class Text
{
public:
	Text();

	void AddLine(Line line);
	void ShowText();
	void RemoveLine(int index);
	void ClearText();
	int AllSymbols();
	void Replace(int index, Line line);
	void Double();

private:
	Line* text;
	int SentenceCounter;
};