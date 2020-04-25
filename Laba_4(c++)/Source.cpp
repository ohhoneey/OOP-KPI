#include "Point.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukr");
	bcs::Line a[4];
	
	a[0].set1(11, 22); //задання точки
	a[0].set2(11, 22); //задання точки
	a[1].set1(-10, 15); //задання точки
	a[1].set2(2, 3); //задання точки
	a[2].Copy(a[1]);//конструктор копіювання
	a[3]; //задання відрізка
	cout << "Кабанець Вiкторiя IС - 92" << endl;
	cout << "вiдрiзок 1" << endl;
	a[0].Show();//виведення координат відрізка на екран
	cout << "вiдрiзок 2 до зсуву" << endl;
	a[2].Show();//виведення координат відрізка на екран
	a[2].Move(-3, 0);
	cout << "вiдрiзок 2 пiсля зсуву" << endl;
	a[2].Show(); //виведення координат відрізка на екран
	try
	{
		cout << "довжина вiдрiзка 1 = " << a[0].len() << endl; //виведення довжини відрізка на екран
	}
	catch (exception &e) 
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << "довжина вiдрiзка 2 = " << a[1].len() << endl; //виведення довжини відрізка на екран
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		a[3] = a[0] + a[1];//додавання
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "наслiдок операцiї додавання"<<endl;
	a[3].Show();
	
	
	


	_getch();

	return 0;
}