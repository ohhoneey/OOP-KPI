#pragma once
#include"StringBase.h"


class Letter : public StringBase
{
public:
	Letter(int size, const char *arr); //����������� � �����������
	virtual void Reverse(); //������������ �����
	int get_size() override; //��������� ������� �����
	void Show() override; //��������� ����� �� �����
	string ToString() override; //������� �����
	
	

private:

};

