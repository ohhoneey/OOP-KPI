#include "List.h"
#include <cstddef>
#include<iostream>

using namespace std;

struct MyList::Node //�����
{
	Node(float item) //�����������
	{
		data = item;
	}
	float data; 
	Node *next; //�������� �� ��������� �������

};

void MyList::Add(float item) //��������� ��������
{
	Node *node = new Node(item); //��������� ������ �����
	node->next = NULL;
	if (head == NULL) //���� ��������� ������� ��� ��������, �� �������� ������ ������
		head = tail = node;
	else
	{
		tail->next = node; // ������������ ��������
		tail = node;
	}
	size++;
}

void MyList::Delete(float item) //��������� ��������
{
	Node **pnext = &head; //�������� � ������� ��������
	while (*pnext) 
	{
		Node *current = *pnext; //�������� �����
		if (current->data < item) //���� �������� ��������� < �������� �����������, �� ���������� �� ����������
		{
			*pnext = current->next;
			delete current;
		}
		else
			pnext = &current->next;
	}
}

void MyList::Clear() //��������� ��� ��������
{
	*head = NULL;
	*tail = NULL;
	size = NULL;

}

void MyList::Print()
{
	Node *current = head;
	cout << "��i �������� ������" << endl;
	while (current)
	{
		cout << current->data << endl; // ���� ��������� ��������
		current = current->next; // ���������� �� ���������� ��������
	}

}

void MyList::MoreThan() //����� �������� > 3.14
{
	Node *node = head;
	int count = 0; //��������
	cout<<"�������� > 3.14"<<endl;
	while (node != NULL) //����������� �� ��� ���������
	{
		if (node->data > 3.14) //���� ����� ����������, �������� ��������
		{
			cout << node->data << endl;
			count++;
		}
		node = node->next; //���������� �� ���������� ��������

	}
	cout << "������ �������i� > 3.14: " << count << endl;
}

void MyList::Addto(float item) //��������� �������� ���� 2-��
{

	Node *node = new Node(item); //�������� �����
	Node *previous = head; //������������ ������������ �����
	for (int i = 0; i < 1; i++) //�������� �������� ������ �������� �� 2 ��������
	{
		previous = previous->next;
	}
	node->next = previous->next; //������������ �������� ������������ �������� �� ��������
	previous->next = node;
	size++;
}
void MyList::Average() //��������� ��������, �������� ���� ����� �� ������
{
	float s = Summ(); //������ �����������
	Node *node = head;

	while (node != NULL) //����������� �� ��� ���������
	{
		if (node->data > s) //���� ��������� ��������, �� ���������
		{
			cout << "��������, �� ���� ��������:" << node->data<<endl;
			Delete(node->data);
		}
		node = node->next; //������� �� ����������
	}

}

float MyList::Summ() //����������� ���������� ��������
{
	float sum = 0;
	int count = 0;
	Node *node = head;
	while (node != NULL) //����������� �� ��� ���������
	{
		sum += node->data; //������ ��
		node = node->next; //������� �� ���������� ��������
		count++; //�������� ��������

	}
	return sum / count;

}
