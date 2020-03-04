#pragma once
#include <vector>
#include "MyString.h"

class Text 
{
public:
	Text();
	explicit Text(vector<MyString> arr);
	void AddLine(const MyString& line);
	void DeleteLine(int index);
	void Clear();
	void PrintText();
	int AllSymbols();
	void ReplaceString(int index, MyString str);
	/*void RemoveIdentical();*/
private:
	vector<MyString> text;
};