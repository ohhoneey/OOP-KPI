#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace bcs 
{
	Line::Line(void) //конструктор за замовчуванням
	{
		x1 = y1 = x2 = y2 = 0;
	}

	Line::Line(double a, double b, double c, double d) //конструктор з параметрами
	{
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	}

	void Line::set1(double a, double b) //ініціалізація точки
	{ 
		x1 = a;
		y1 = b;
	}

	void Line::set2(double c, double d) //ініціалізація точки
	{
		x2 = c;
		y2 = d;
	}

	void Line::Copy(Line &newpoint) //конструктор копіювання
	{
		x1 = newpoint.x1;
		y1 = newpoint.y1;
		x2 = newpoint.x2;
		y2 = newpoint.y2;
	}

	double Line::get1() //отримання координат точки
	{
		return x1, y1;
	}

	double Line::get2() //отримання координат точки
	{
		return x2, y2;
	}

	double Line::len() //отримання довжини відрізка
	{
		if (x1 == x2 && y1 == y2) 
		{
			throw exception("Error!Identical coordinates of points");
		}
		return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	}

	void Line::Move(int s, int c) //зсув 
	{
		x1 += s;
		x2 += s;
		y1 += c;
		y2 += c;
	}


	const Line operator +(Line t1, Line t2) //перевантаження оператора додавання
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

	const Line operator -(Line t1, Line t2) //перевантаження оператора віднімання
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

	void Line::Show() //вивід координат точки на екран
	{
		cout << "x = " << "("<< x1 << "," << y1 << ")"<<endl;
		cout << "y = " << "(" << x2 << "," << y2 << ")" << endl;

	}

}