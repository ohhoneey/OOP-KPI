#pragma once

namespace bcs
{
	class Line
	{
	public:
		Line(void);
		~Line(void);
		void set1(double a, double b);//ініціалізація точки
		void set2(double c, double d);//ініціалізація точки
		double get1();//отримання координат точки
		double get2();//отримання координат точки
		void Copy(Line &newpoint); //конструктор копіювання
		double len();//отримання довжини відрізка
		void Move(int s, int c); //зсув по OX
		void Show(); //виведення на екран
		friend const Line operator +(Line t1, Line t2); //перевантаження оператора додавання
		friend const Line operator -(Line t1, Line t2); //перевантаження оператора віднімання









	private:
		double x1;
		double x2;
		double y1;
		double y2;

	};
}
