// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

struct Stack
{
	Queue * first;
	Queue * last;
	Stack * next;
};


int _tmain(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	int answer = 0;
	int answerDelQ = 0;
	int queueAnswer = 0;
	Queue Que;
	while (answer != 5)
	{
		cout << ("\n 1 �������� � ���� ������ ������� \n");
		cout << ("\n 2 ������� �� ����� \n");
		cout << ("\n 3 ����� ����� \n");
		cout << ("\n 4 ������ � ��������� \n");
		cout << ("\n 5 ����� \n");
		cout << ("\n ��������� � ���� \n");
		std::cin >> answer;
		switch (answer)
		{
		case 1:  //�������� � ���� �������
			//�������� � �������
			CreationQ();
			cout << ("\n �������� � ���� ������ ������� \n");
			break;
		case 2: // ������� ������� �� �����
			while (answerDelQ != 3)
			{
				cout << ("\n 1  �������� ������� \n");
				cout << ("\n 2  ���������������� ���������� \n");
				cout << ("\n 3  ������� � ������� ���� \n");
				std::cin >> answerDelQ;
				switch (answerDelQ)
				{
				case 1: // ������� �������
					cout << ("�������� ������� \n");
					break;
				case 2: // ���������������� ����������
					cout << ("���������������� ���������� \n");
					break;
				case 3: // ������� � ������� ����
					cout << ("������� � ������� ���� \n");
					break;
				}
			}
			break;
		case 3: // ����� �� �����
			cout << ("\n ����� �� ����� \n");
			break;
		case 4: // ������ � ��������
			do 
			{
				cout << ("\n 1  �������� � ������� \n");
				cout << ("\n 2  ���������� ������� \n");
				cout << ("\n 3  ����� ������� \n");
				cout << ("\n 4  ������� � ������� ���� \n");
				std::cin >> queueAnswer;
				switch (queueAnswer)
				{
				    case 1: // �������� � �������
						AddQ();
				    	cout << ("\n �������� � ������� \n");
						break;
					case 2: // ���������� �������
						TopQ();
						DeleteQ();
						cout << ("\n ���������� ������� \n");
						break;
					case 3: // ����� �������
						while (!=FullQ())
						{
							TopQ();
							DeleteQ();
						}
						cout << ("\n ������� ������� \n");
						break;
					case 4: // ������� � ������� ����
						cout << ("\n ��������� � ������� ���� \n");
						break;
				}
			}
			while (queueAnswer != 4);
			break;
		case 5: // ����� �� ���������
			return 0;
		}
	}
}

