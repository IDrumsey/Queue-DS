#include "Queue.h"

using namespace std;
int main()
{
	Queue* myQueue = new Queue();

	int choice;

	while (1)
	{
		cout << "(0)Quit\n(1)Enqueue\n(2)Dequeue\n(3)Peek\n(4)Print\nChoice : ";
		cin >> choice;

		switch (choice)
		{
		case 0:
		{
			delete myQueue;
			break;
		}
		case 1:
		{
			myQueue->Enqueue();
			break;
		}
		case 2:
		{
			myQueue->Dequeue();
			break;
		}
		case 3:
		{
			myQueue->Peek();
			break;
		}
		case 4:
		{
			myQueue->Print();
			break;
		}
		}
		system("pause");
		system("cls");
	}
	return 0;
}