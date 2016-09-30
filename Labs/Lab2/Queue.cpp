#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	char data;
	Node *next;
};

struct Queue
{
	int size;
	char key;
	Node *first;
	Node *last;
};

void CreationQ(Queue *Q) //создание очереди
{
	Q->first = new Node;
	Q->first->next = nullptr;
	Q->last = Q->first;
	Q->size = 0;
}

bool FullQ(Queue **Q) //проверка очереди на пустоту
{
	return ((*Q)->first == (*Q)->last);
}

char TopQ(Queue **Q) //вывод начального элемента
{
	return (*Q)->first->next->data;
}

void AddQ(Queue **Q) //добавление элемента
{
	char value;
	cout << "\nЗначение > "; 
	cin >> value;
	(*Q)->last->next = new Node;
	(*Q)->last = (*Q)->last->next;
	(*Q)->last->data = value; //добавление элемента в конец
	(*Q)->last->next = NULL; //обнуление указателя на следующий элемент
	(*Q)->size++;
	cout << "\nЭлемент добавлен\n\n";
}

void DeleteQ(Queue **Q) //удаление элемента
{
	(*Q)->first = (*Q)->first->next; //смещение указателя
	(*Q)->size--;
	cout << "\n Элемент удален \n \n";
}

int _tmain(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	Queue  *first;
	first = new Queue;
	int queueAnswer;
	CreationQ(first);
	do
	{
		cout << "\n 1  Включить в очередь \n";
		cout << "\n 2  Продвинуть очередь \n";
		cout << "\n 3  Вывод очереди \n";
		cout << "\n 4  Возврат в меню стека\n";
		queueAnswer = 0;
		cin >> queueAnswer;
		switch (queueAnswer)
		{
		case 1: // Включить в очередь
			AddQ(& first);
			cout << "\n Включаем в очередь \n";
			break;
		case 2: // Продвигаем очередь
			cout << TopQ(&first) << "\n Исключен из очереди";
			DeleteQ(&  first);
			cout << "\n Продвинули очередь \n";
			break;
		case 3: // Вывод очереди
			while (!(FullQ(& first)))
			{
				cout << TopQ(& first);
				DeleteQ(& first);
			}
			cout << "\n Выводим очередь \n";
			break;
		case 4: // Возврат в прошлое меню
			cout << "\n Вернулись в меню стека \n";
			break;
		}
	} while (queueAnswer != 4);
}