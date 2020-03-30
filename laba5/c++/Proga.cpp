#include <iostream>
#include "Line.h"
#include "Line1.h"

using namespace std;

int main()
{
	Line one = Line(2, 3, 4, 5); //створення нового об'єкта Line
	Line1 two = Line1(2, 3, 4, 5); //створення нового об'єкта Line1
	double k = one.Len();//присвоєння змінній значення довжини лінії
	cout << "Початкова довжина" << k;
	double t = two.Len();//присвоєння змінній значення довжини лінії
	cout << "Початкова довжина" << t;
	two.Draw();//виведення координат на екран


}

