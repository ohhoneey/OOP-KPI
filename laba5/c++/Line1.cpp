#include "Line1.h"
#include <iostream>

using namespace std;

float Line1::getX() // метод отримання даних об'єкта
{
	return x;
}

float Line1::getX1() // метод отримання даних об'єкта
{
	return x1;
}

float Line1::getY() // метод отримання даних об'єкта
{
	return y;
}

float Line1::getY1() // метод отримання даних об'єкта
{
	return y1;
}

Line1::Line1(float a, float b, float c, float d) : Line(a, b, c, d) // конструктор з параметрами
{

}

double Line1::Len() // метод обчислення довжини
{
	return 2 * Line::Len();
}

void Line1::Draw() //виведення координат на екран
{
	cout << "start point = " << "(" << x << "," << y << ")" << endl;
	cout << "end point = " << "(" << x1 << "," << y1 << ")" << endl;

}

