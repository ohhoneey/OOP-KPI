#pragma once
#include "StringBase.h"

class Numbers : public StringBase
{
public:
	Numbers(int size, const char *arr); //����������� � �����������
	int get_size() override; //���������� ������ �����
	virtual void Enlargment(); //��������� ������� �����
	void Show() override; //��������� ����� �� �����
	string ToString() override; //������� �����

private:

};
