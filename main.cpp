#include "classes.cpp"
#include <iostream>

using namespace std;

int main(int argc,char** argv)
{
	MyQueue<int, 5> test;
	test.Enqueue(4);
	test.Enqueue(2);
	test.Dequeue();
	test.Enqueue(8);
	test.Enqueue(1);
	test.Enqueue(0);
	test.Dequeue();
	test.Enqueue(6);
	test.Enqueue(3);
	test.order();
	test.print();
	return 0;
}