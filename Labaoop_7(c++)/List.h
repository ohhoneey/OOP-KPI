#pragma once
class MyList 
{
public:
	struct Node;  //�����
	void Add(float item); //��������� �����
	void Delete(float item); //��������� �����
	void Clear(); //�������� ������
	void Addto(float item); //��������� �������� ���� 2-��
	void MoreThan(); //����� �������� > 3.14
	void Print(); //���� �������� �� �����
	float Summ(); //����������� ���������� ��������
	void Average(); //��������� ��������, �������� ���� ����� �� ������
protected:
	int size; //�����
	Node *head; //������� ������
	Node *tail;  //����� ������


};