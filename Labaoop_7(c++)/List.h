#pragma once
class MyList 
{
public:
	struct Node;  //вузол
	void Add(float item); //додавання вузла
	void Delete(float item); //видалення вузла
	void Clear(); //очищення списку
	void Addto(float item); //додавання елемента після 2-го
	void MoreThan(); //пошук елементів > 3.14
	void Print(); //вивід елементів на екран
	float Summ(); //знаходження середнього значення
	void Average(); //видалення елементів, значення яких більше за середнє
protected:
	int size; //розмір
	Node *head; //початок списка
	Node *tail;  //кінець списка


};