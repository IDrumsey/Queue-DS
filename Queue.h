#pragma once

#include <iostream>

class Queue
{
public:
	Queue();
	~Queue();
	void Enqueue();
	void Dequeue();
	void Peek();
	void Print();

	bool IsEmpty();
	bool IsFull();

private:
	int* arr;
	int size;
	int pos;
};

