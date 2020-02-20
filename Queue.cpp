#include "Queue.h"

using namespace std;

Queue::Queue()
{
	cout << "Size of Queue : ";
	cin >> this->size;

	arr = new int[size];
	pos = -1;
}

Queue::~Queue()
{
	delete [] arr;
	cout << "Deleted queue\n";
}

void Queue::Enqueue()
{
	if (IsFull())
	{
		cout << "Queue is Full\n";
	}
	else
	{
		pos++;
		cout << "Position [" << pos << "] : ";
		cin >> arr[pos];
	}
}

void Queue::Dequeue()
{
	if (IsEmpty())
	{
		cout << "Queue is Empty\n";
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
	}
}

void Queue::Peek()
{
	if (IsEmpty())
	{
		cout << "Queue is Empty\n";
	}
	else
	{
		cout << "First in Queue : " << arr[0] << endl;
	}
}

void Queue::Print()
{
	if (IsEmpty())
	{
		cout << "Queue is Empty\n";
	}
	else
	{
		for (int i = 0; i <= pos; i++)
		{
			cout << "Position [" << i << "] : " << arr[i] << endl;
		}
	}
}

bool Queue::IsEmpty()
{
	if (pos == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool Queue::IsFull()
{
	if (pos == size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
