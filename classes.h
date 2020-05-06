#include <iostream>

using namespace std;

template<typename ElementsType,int ElementsNum>
class MyQueue
{
private:
	ElementsType Data[ElementsNum];
	int rear, front;
public:
	MyQueue();
	bool isEmpty();
	ElementsType Front();
	bool Enqueue(ElementsType);
	bool Dequeue();
	void order();
	void print();
};
