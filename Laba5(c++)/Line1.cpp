#include "Line1.h"
#include <iostream>

using namespace std;

float Line1::getX() // ����� ��������� ����� ��'����
{
	return x;
}

float Line1::getX1() // ����� ��������� ����� ��'����
{
	return x1;
}

float Line1::getY() // ����� ��������� ����� ��'����
{
	return y;
}

float Line1::getY1() // ����� ��������� ����� ��'����
{
	return y1;
}

Line1::Line1(float a, float b, float c, float d) : Line(a, b, c, d) // ����������� � �����������
{

}

double Line1::Len() // ����� ���������� �������
{
	return 2 * Line::Len();
}

void Line1::Draw() //��������� ��������� �� �����
{
	cout << "start point = " << "(" << x << "," << y << ")" << endl;
	cout << "end point = " << "(" << x1 << "," << y1 << ")" << endl;

}

