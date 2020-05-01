#pragma once

class Expression
{
public:
	Expression();
	Expression(double a, double b, double c, double d);
	double GetAnswer();
	double Solve();
	void Show();
	void set_A(double a);
	void set_B(double b);
	void set_C(double c);
	void set_D(double d);
	double get_A();
	double get_B();
	double get_C();
	double get_D();


protected:
	double _a, _b, _c, _d;

};

