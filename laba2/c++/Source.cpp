#include <iostream>
#include "MyString.h"
#include "Text.h"


int main()
{


	Text text;

	text.AddLine(Line::InputLine("eeee"));
	text.AddLine(Line::InputLine("Hello world"));
	text.AddLine(Line::InputLine("It`s me"));
	text.AddLine(Line::InputLine("Bye"));
	text.AddLine(Line::InputLine("Bye"));
	text.AddLine(Line::InputLine("eeee"));

	cout << text.AllSymbols() << endl;
	cout << Line::InputLine("Hello world").Count('l') << endl;;
	text.Replace(2, Line::InputLine("Bye"));
	text.Double();

	text.ShowText();
	

	return 0;
}
