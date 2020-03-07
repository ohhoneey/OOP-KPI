#include <iostream>
#include <string>
#include <cstring>
#include "text.h"

using namespace std;

Text::Text() {
	text = new Line[100];
	SentenceCounter = 0;
}



void Text::AddLine(Line line) {
	text[SentenceCounter] = line;
	SentenceCounter++;
}


void Text::RemoveLine(int index)
{
	for (int i = index; i < SentenceCounter; i++)
	{
		text[i] = text[i + 1];
	}

	SentenceCounter--;
}



void Text::ClearText()
{
	for (int i = 0; i < SentenceCounter; i++)
	{
		text[i] = text[SentenceCounter];
	}
	SentenceCounter = 0;
}


void Text::ShowText()
{
	for (int i = 0; i < SentenceCounter; i++)
	{
		for (int j = 0; text[i].GetSentence()[j] != 13; j++)
		{
			std::cout << text[i].GetSentence()[j];
		}

		std::cout << (". ");
	}

	std::cout << std::endl;
}

int Text::AllSymbols() {
	int count = 0;
	for (int i = 0; i < SentenceCounter; i++)
	{
		count += text[i].GetLength();
	}
	return count;
}

void Text::Replace(int index, Line line)
{
	text[index - 1] = line;
}

void Text::Double() 
{
	for (int i = 0; i < SentenceCounter; i++)
	{
		for (int j = 1; j < SentenceCounter - 1; j++)
		{
			if (text[i].GetLength() == text[j].GetLength()) 
			{
				for (int i = j; i < SentenceCounter; i++)
				{
					text[i] = text[i + 1];
				}

				SentenceCounter--;
			}
		}
	}

}