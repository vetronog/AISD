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

void CreationQ(Queue *Q) //�������� �������
{
	Q->first = new Node;
	Q->first->next = nullptr;
	Q->last = Q->first;
	Q->size = 0;
}

bool FullQ(Queue **Q) //�������� ������� �� �������
{
	return ((*Q)->first == (*Q)->last);
}

char TopQ(Queue **Q) //����� ���������� ��������
{
	return (*Q)->first->next->data;
}

void AddQ(Queue **Q) //���������� ��������
{
	char value;
	cout << "\n�������� > "; 
	cin >> value;
	(*Q)->last->next = new Node;
	(*Q)->last = (*Q)->last->next;
	(*Q)->last->data = value; //���������� �������� � �����
	(*Q)->last->next = NULL; //��������� ��������� �� ��������� �������
	(*Q)->size++;
	cout << "\n������� ��������\n\n";
}

void DeleteQ(Queue **Q) //�������� ��������
{
	(*Q)->first = (*Q)->first->next; //�������� ���������
	(*Q)->size--;
	cout << "\n ������� ������ \n \n";
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
		cout << "\n 1  �������� � ������� \n";
		cout << "\n 2  ���������� ������� \n";
		cout << "\n 3  ����� ������� \n";
		cout << "\n 4  ������� � ���� �����\n";
		queueAnswer = 0;
		cin >> queueAnswer;
		switch (queueAnswer)
		{
		case 1: // �������� � �������
			AddQ(& first);
			cout << "\n �������� � ������� \n";
			break;
		case 2: // ���������� �������
			cout << TopQ(&first) << "\n �������� �� �������";
			DeleteQ(&  first);
			cout << "\n ���������� ������� \n";
			break;
		case 3: // ����� �������
			while (!(FullQ(& first)))
			{
				cout << TopQ(& first);
				DeleteQ(& first);
			}
			cout << "\n ������� ������� \n";
			break;
		case 4: // ������� � ������� ����
			cout << "\n ��������� � ���� ����� \n";
			break;
		}
	} while (queueAnswer != 4);
}