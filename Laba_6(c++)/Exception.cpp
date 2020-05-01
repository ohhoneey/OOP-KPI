#include "Expression.h"
#include <iostream>
#include <exception>
#include <cmath>

using namespace std;

Expression::Expression()
{}
Expression::Expression(double a, double b, double c, double d)
{
	_a = a;
	_b = b;
	_c = c;
	_d = d;
}

double Expression::GetAnswer()
{
	if (_b == 0) //так як ділити на 0 не можна, то спрацьовує виключення
	{
		throw exception("Division by zero is impossible!");

	}

	if ((_d - _c) < -24) //так під коренем не може бути від'ємне число, то спрацьовує виключення
	{
		throw exception(" The value under the root must be non-negative!");
	}

	else
	{
		return Solve(); //розв'язок виразу
	}

}

void Expression::set_A(double a)
{
	_a = a;
}

double Expression::get_A()
{
	return _a;
}

void Expression::set_B(double b)
{
	_b = b;
}
double Expression::get_B()
{
	return _b;
}
void Expression::set_C(double c)
{
	_c = c;
}
double Expression::get_C()
{
	return _c;
}
void Expression::set_D(double d)
{
	_d = d;
}
double Expression::get_D()
{
	return _d;
}

void Expression::Show() 
{
	cout << "a = " << _a << endl;
	cout << "b = " << _b << endl;
	cout << "c = " << _c << endl;
	cout << "d = " << _d << endl;
}

double Expression::Solve() 
{
	return ((1 + _a - _b / 2) / (sqrt(24 + _d - _c) + _a / _b));
}