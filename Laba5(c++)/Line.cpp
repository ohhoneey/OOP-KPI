#include "Line.h"
#include <cmath>

Line::Line()//конструктор за замовчуванням
{
	x = 0;
	y = 0;
	x1 = 0;
	y1 = 0;
}

Line::Line(float a, float b, float c, float d) //конструктор з параметрами
{
	x = a;
	y = b;
	x1 = c;
	y1 = d;
}

double Line::Len() //довжина відрізка
{
	return sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));

}