#pragma once
#include"Line.h"

class Line1:Line
{
public:
	float getX(); //����� ��������� ����� ��'����
	float getY(); //����� ��������� ����� ��'����
	float getX1(); //����� ��������� ����� ��'����
	float getY1(); //����� ��������� ����� ��'����
	Line1(float a, float b, float c, float d); //����������� � �����������
	double Len() override; //����� ���������� ������� ������
	void Draw(); //��������� ��������� �� �����

private:
	
};
