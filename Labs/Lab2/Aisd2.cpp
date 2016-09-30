// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
		cout << ("\n 1 Включить в стек пустую очередь \n");
		cout << ("\n 2 Удалить из стека \n");
		cout << ("\n 3 Вывод стека \n");
		cout << ("\n 4 Работа с очередями \n");
		cout << ("\n 5 Выход \n");
		cout << ("\n Выбирайте с умом \n");
		std::cin >> answer;
		switch (answer)
		{
		case 1:  //включить в стек очередь
			//Включаем в очередь
			CreationQ();
			cout << ("\n Включили в стек пустую очередь \n");
			break;
		case 2: // Удалить очередь из стека
			while (answerDelQ != 3)
			{
				cout << ("\n 1  Очистить очередь \n");
				cout << ("\n 2  Переприсваивание указателей \n");
				cout << ("\n 3  Возврат в прошлое меню \n");
				std::cin >> answerDelQ;
				switch (answerDelQ)
				{
				case 1: // Очищаем очередь
					cout << ("Очистили очередь \n");
					break;
				case 2: // Переприсваивание указателей
					cout << ("Переприсваивание указателей \n");
					break;
				case 3: // Возврат в прошлое меню
					cout << ("Возврат в прошлое меню \n");
					break;
				}
			}
			break;
		case 3: // Вывод из стека
			cout << ("\n Вывод из стека \n");
			break;
		case 4: // Работа с очередью
			do 
			{
				cout << ("\n 1  Включить в очередь \n");
				cout << ("\n 2  Продвинуть очередь \n");
				cout << ("\n 3  Вывод очереди \n");
				cout << ("\n 4  Возврат в прошлое меню \n");
				std::cin >> queueAnswer;
				switch (queueAnswer)
				{
				    case 1: // Включить в очередь
						AddQ();
				    	cout << ("\n включаем в очередь \n");
						break;
					case 2: // Продвигаем очередь
						TopQ();
						DeleteQ();
						cout << ("\n Продвинули очередь \n");
						break;
					case 3: // Вывод очереди
						while (!=FullQ())
						{
							TopQ();
							DeleteQ();
						}
						cout << ("\n Выводим очередь \n");
						break;
					case 4: // Возврат в прошлое меню
						cout << ("\n Вернулись в прошлое меню \n");
						break;
				}
			}
			while (queueAnswer != 4);
			break;
		case 5: // Выход из программы
			return 0;
		}
	}
}

