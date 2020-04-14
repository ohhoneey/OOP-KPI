#pragma once

class Line //базовий клас 
{
public:
	Line();//конструктор за замовчуванням
	Line(float a, float b, float c, float d);//конструктор з параметрами
	virtual double Len(); //метод знаходження довжини

protected:
	float x, y, x1, y1; //координати початку та кінця лінії
};


