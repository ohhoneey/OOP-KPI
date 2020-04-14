#include <iostream>
#include "Line.h"
#include "Line1.h"
#include"StringBase.h"
#include "Letter.h"
#include "Number.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	cout << "Кабанець Вiкторiя IС-92" << endl;
	cout << "Task 1" << endl;
	Line one = Line(2, 3, 4, 5); //створення нового об'єкта Line
	Line1 two = Line1(2, 3, 4, 5); //створення нового об'єкта Line1
	
	double k = one.Len();//присвоєння змінній значення довжини лінії
	cout << "Початкова довжина" << k << endl;
	double t = two.Len();//присвоєння змінній значення довжини лінії
	cout << "Початкова довжина" << t << endl;
	two.Draw();//виведення координат на екран
	cout << "\n";
	cout << "Task 2" << endl;
	char* arr = new char[5]{ 'h', 'e', 'l', 'l', 'o'}; //масив літер
	char* array = new char[6]{ '0', '6', '9', '4', '3','8'}; //масив цифр
	Letter letter(5, arr); //створення нового об'єкта Letter
	Numbers number(6, array); //створення нового об'єкта Numbers
	int r = letter.get_size(); //довжина масиву літер
	cout << "Масив лiтер" << endl;
	letter.Show(); //виведення масиву літер на екран
	cout << "Масив цифр" << endl;
	number.Show(); //виведення масиву цифр на екран
	cout << "Довжина масиву лiтер " << r << endl;
	cout << "Масив цифр пiсля збiльшення" << endl;
	number.Enlargment(); //збільшення довжини масиву цифр
	cout << endl;
	int f = number.get_size(); //довжина масиву цифр
	cout << "Довжина масиву цифр пiсля збiльшення "<< f << endl;
	
	




}

