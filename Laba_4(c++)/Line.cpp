#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace bcs 
{
	Line::Line(void) //����������� �� �������������
	{
		x1 = y1 = x2 = y2 = 0;
	}

	Line::Line(double a, double b, double c, double d) //����������� � �����������
	{
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	}

	void Line::set1(double a, double b) //����������� �����
	{ 
		x1 = a;
		y1 = b;
	}

	void Line::set2(double c, double d) //����������� �����
	{
		x2 = c;
		y2 = d;
	}

	void Line::Copy(Line &newpoint) //����������� ���������
	{
		x1 = newpoint.x1;
		y1 = newpoint.y1;
		x2 = newpoint.x2;
		y2 = newpoint.y2;
	}

	double Line::get1() //��������� ��������� �����
	{
		return x1, y1;
	}

	double Line::get2() //��������� ��������� �����
	{
		return x2, y2;
	}

	double Line::len() //��������� ������� ������
	{
		if (x1 == x2 && y1 == y2) 
		{
			throw exception("Error!Identical coordinates of points");
		}
		return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	}

	void Line::Move(int s, int c) //���� 
	{
		x1 += s;
		x2 += s;
		y1 += c;
		y2 += c;
	}


	const Line operator +(Line t1, Line t2) //�������������� ��������� ���������
	{

		Line tmp;
		if (t1.x1 == t2.x1 && t1.y1 == t2.y1 && t1.y2 == t2.y2 && t1.x2 == t2.x2)
		{
			throw exception("Error!Identical coordinates of lines");
		}
		tmp.x1 = t1.x1 + t2.x1;
		tmp.y1 = t1.y1 + t2.y1;
		tmp.x2 = t1.x2 + t2.x2;
		tmp.y2 = t1.y2 + t2.y2;

		return tmp;;
	}

	const Line operator -(Line t1, Line t2) //�������������� ��������� ��������
	{
		Line tmp;
		if (t1.x1 == t2.x1 && t1.y1 == t2.y1 && t1.y2 == t2.y2 && t1.x2 == t2.x2)
		{
			throw exception("Error!Identical coordinates of lines");
		}
		tmp.x1 = t1.x1 - t2.x1;
		tmp.y1 = t1.y1 - t2.y1;
		tmp.x2 = t1.x2 - t2.x2;
		tmp.y2 = t1.y2 - t2.y2;
		return tmp;;
	}

	void Line::Show() //���� ��������� ����� �� �����
	{
		cout << "x = " << "("<< x1 << "," << y1 << ")"<<endl;
		cout << "y = " << "(" << x2 << "," << y2 << ")" << endl;

	}

}