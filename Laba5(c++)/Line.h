#pragma once

class Line //������� ���� 
{
public:
	Line();//����������� �� �������������
	Line(float a, float b, float c, float d);//����������� � �����������
	virtual double Len(); //����� ����������� �������

protected:
	float x, y, x1, y1; //���������� ������� �� ���� ��
};


