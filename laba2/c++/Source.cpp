#include <iostream>
#include "MyString.h"
#include "Text.h"


int main()
{


	Text text;

	text.AddLine(Line::InputLine("like the life"));//��������� ����� �� ������
	text.AddLine(Line::InputLine("who are you"));//��������� ����� �� ������
	text.AddLine(Line::InputLine("viktoria"));//��������� ����� �� ������
	text.AddLine(Line::InputLine("viktoria"));//��������� ����� �� ������
	text.AddLine(Line::InputLine("tory"));//��������� ����� �� ������
	text.AddLine(Line::InputLine("house"));//��������� ����� �� ������

	cout << text.AllSymbols() << endl;//��������� ��� ������� � �����
	cout << Line::InputLine("Hello world").Count('l') << endl;//��������� �������� ������� � �����
	text.Replace(2, Line::InputLine("baby"));//����� ����� ����� ��������
	text.Double();//��������� ��������� �����

	text.ShowText();//��������� ������ �� �����
	

	return 0;
}
