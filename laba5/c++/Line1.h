#pragma once
#include"Line.h"

class Line1:Line
{
public:
	float getX(); //метод отримання даних об'єкта
	float getY(); //метод отримання даних об'єкта
	float getX1(); //метод отримання даних об'єкта
	float getY1(); //метод отримання даних об'єкта
	Line1(float a, float b, float c, float d); //конструктор з параметрами
	double Len() override; //метод обчислення довжини відрізка
	void Draw(); //виведення координат на екран

private:
	
};
