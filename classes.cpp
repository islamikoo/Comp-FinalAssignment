#include "classes.h"
using namespace std;

template<typename ElementsType, int ElementsNum>
MyQueue<ElementsType, ElementsNum>::MyQueue()
{
	rear = -1;
	front = -1;
}

template<typename ElementsType, int ElementsNum>
bool MyQueue<ElementsType, ElementsNum>::isEmpty()
{
	return bool(rear == -1 && front == -1);
}

template<typename ElementsType, int ElementsNum>
ElementsType MyQueue<ElementsType, ElementsNum>::Front()
{
	if (isEmpty())
	{
		cout << "Empty Queue" << endl;
		exit(0);
	}
	else
		return Data[front];
}

template<typename ElementsType, int ElementsNum>
bool MyQueue<ElementsType, ElementsNum>::Enqueue(ElementsType d)
{
	if ((rear + 1) % ElementsNum == front)
		return 0;
	else if (isEmpty())
	{
		rear = 0;
		front = 0;
	}
	else
		rear = (rear + 1) % ElementsNum;
	Data[rear] = d;
	return 0;
}

template<typename ElementsType, int ElementsNum>
bool MyQueue<ElementsType, ElementsNum>::Dequeue()
{
	if (isEmpty())
		return 0;
	else if (rear == front)
	{
		front = -1;
		rear = -1;
	}
	else
		front = (front + 1) % ElementsNum;
	return Data[front];
}


template<typename ElementsType, int ElementsNum>
void MyQueue<ElementsType, ElementsNum>::order()
{
	int tmp = front;
	int tmpC;
	int tmpD;
	while (tmp != rear)
	{
		tmpC = tmp;
		while (tmpC != rear)
		{
			if (Data[tmp] > Data[(tmpC + 1) % ElementsNum])
			{
				tmpD = Data[(tmpC + 1) % ElementsNum];
				Data[(tmpC + 1) % ElementsNum] = Data[tmp];
				Data[tmp] = tmpD;
			}
			tmpC = (tmpC + 1) % ElementsNum;
		}
		tmp = (tmp + 1) % ElementsNum;
	}
}


template<typename ElementsType, int ElementsNum>
void MyQueue<ElementsType, ElementsNum>::print()
{
	int tmp = front;
	while (tmp != rear)
	{
		cout << Data[tmp] << endl;
		tmp = (tmp + 1) % ElementsNum;
	}
	cout << Data[tmp] << endl;
}