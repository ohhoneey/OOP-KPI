#pragma once

namespace bcs
{
	class Line
	{
	public:
		Line(void);
		~Line(void);
		void set1(double a, double b);//����������� �����
		void set2(double c, double d);//����������� �����
		double get1();//��������� ��������� �����
		double get2();//��������� ��������� �����
		void Copy(Line &newpoint); //����������� ���������
		double len();//��������� ������� ������
		void Move(int s, int c); //���� �� OX
		void Show(); //��������� �� �����
		friend const Line operator +(Line t1, Line t2); //�������������� ��������� ���������
		friend const Line operator -(Line t1, Line t2); //�������������� ��������� ��������









	private:
		double x1;
		double x2;
		double y1;
		double y2;

	};
}
