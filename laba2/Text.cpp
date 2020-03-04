#include "text.h"
#include "MyString.h"
#include <cstring>
#include <iostream>
#include <utility>
#include <cctype>

using namespace std;

Text::Text() 
{
}


Text::Text(vector<MyString> arr) {
	text = move(arr);
}

void Text::AddLine(const MyString& line) {
	text.push_back(line);
}

void Text::DeleteLine(int index) {
	text.erase(text.begin() + index);
}

void Text::Clear() {
	text.clear();
}

int Text::AllSymbols() {
	int count = 0;
	for (MyString string : text)
	{
		count += string.getSize();
	}
	return count;
}


void Text::ReplaceString(int index, MyString str) 
{
	text[index - 1] = str;
}

/*void Text::RemoveIdentical()
{
	for (int i = 0; i < text.size() - 1; i++)
	{
		for (int j = 1; j < text.size() - 2; i++)
		{
			if (text[i] == text[j])
			{

				text.erase(text.begin() + size);
			}


		}
	}
}*/


void Text::PrintText() {
	for (MyString strin : text)
	{
		cout << strin.getString() << endl;
	}
}