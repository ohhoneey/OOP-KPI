#pragma once
#include <string>

using namespace std;

class StringBase
{
public:
	StringBase(); //����������� �� �������������
	StringBase(int size, const char *arr); //����������� � �����������
	virtual int get_size(); //��������� ������� ������
	virtual void Show(); //��������� ������ �� �����
	virtual string ToString(); //������� �����

protected:
	char *Chars{};
	int size;
	


};
