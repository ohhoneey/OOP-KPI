#include "List.h"
#include <cstddef>
#include<iostream>

using namespace std;

struct MyList::Node //вузол
{
	Node(float item) //конструктор
	{
		data = item;
	}
	float data; 
	Node *next; //вказівник на наступний елемент

};

void MyList::Add(float item) //додавання елемента
{
	Node *node = new Node(item); //створення нового вузла
	node->next = NULL;
	if (head == NULL) //якщо початовий елемент без значення, то виходить пустий список
		head = tail = node;
	else
	{
		tail->next = node; // встановлюємо значення
		tail = node;
	}
	size++;
}

void MyList::Delete(float item) //видалення елемента
{
	Node **pnext = &head; //починаємо з першого елемента
	while (*pnext) 
	{
		Node *current = *pnext; //поточний вузол
		if (current->data < item) //якщо значення поточного < значення видаляємого, то переходимо до наступного
		{
			*pnext = current->next;
			delete current;
		}
		else
			pnext = &current->next;
	}
}

void MyList::Clear() //видалення всіх елементів
{
	*head = NULL;
	*tail = NULL;
	size = NULL;

}

void MyList::Print()
{
	Node *current = head;
	cout << "Всi елементи списку" << endl;
	while (current)
	{
		cout << current->data << endl; // Вивід поточного елемента
		current = current->next; // Переходимо до наступного елемента
	}

}

void MyList::MoreThan() //пошук елементів > 3.14
{
	Node *node = head;
	int count = 0; //лічильник
	cout<<"Елементи > 3.14"<<endl;
	while (node != NULL) //проходимось по всіх елементах
	{
		if (node->data > 3.14) //якщо умова виконується, збільшуємо лічильник
		{
			cout << node->data << endl;
			count++;
		}
		node = node->next; //переходимо до наступного елемента

	}
	cout << "Всього елементiв > 3.14: " << count << endl;
}

void MyList::Addto(float item) //додавання елемента після 2-го
{

	Node *node = new Node(item); //створеня вузла
	Node *previous = head; //встановлення попереднього вузла
	for (int i = 0; i < 1; i++) //залишаємо значення списку незміниим до 2 елемента
	{
		previous = previous->next;
	}
	node->next = previous->next; //встановлюємо вказівник попереднього елемента на поточний
	previous->next = node;
	size++;
}
void MyList::Average() //видалення елементів, значення яких більше за середнє
{
	float s = Summ(); //середнє арифметичне
	Node *node = head;

	while (node != NULL) //проходимось по всіх елементах
	{
		if (node->data > s) //якщо знаходимо потрібний, то видаляємо
		{
			cout << "Значення, що буде видалено:" << node->data<<endl;
			Delete(node->data);
		}
		node = node->next; //перехід до наступного
	}

}

float MyList::Summ() //знаходження середнього значення
{
	float sum = 0;
	int count = 0;
	Node *node = head;
	while (node != NULL) //проходимось по всіх елементах
	{
		sum += node->data; //сумуємо їх
		node = node->next; //перехід до наступного елемента
		count++; //збільшуємо лічильник

	}
	return sum / count;

}
