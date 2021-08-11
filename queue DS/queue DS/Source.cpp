#include <iostream>
#define size 100
using namespace std;
class Queue
{
	int elements[size], front, rear;
public:
	Queue()
	{
		front = -1;
		rear = -1;
	}


	bool isFull();
	bool isEmpty();
	void enQueue(int x);
	int  deQueue();
	void Print();
	void Display();
};

bool Queue::isFull()
{
	if (front == 0 && rear == size - 1)
	{
		return true;
	}
	return false;
}
bool Queue::isEmpty()
{
	if (front == -1)
	{
		return true;
	}
	return false;
}
void Queue::enQueue(int x)
{
	if (isFull())
	{
		cout << "Queue is out of space \n";
	}
	else
	{
		if (front = -1)
		{
			front = 0;
		}
		rear++;
		elements[rear] = x;
		cout << " " << x << " is added to the queue" << endl;
	}
}
int Queue::deQueue()
{
	int x;
	if (isEmpty())
	{
		cout << "Empty queue \n";
		return (-1);
	}
	else
	{
		x = elements[front];
		if (front >= rear)
		{
			front = -1;
			rear = -1;
		}

		else
		{
			front++;
		}
		cout << "Deleted element->" << x << endl;
		return (x);
	}

}
void Queue::Print()
{
	if (isEmpty())
	{
		cout << "Queue is empty \n";

	}
	else
	{

		cout << endl;

		for (int i = front; i <= rear; i++)
		{

			cout << "Items-> " << elements[i] << " ";
			cout << endl;

		}
		cout << "Front index-> " << front << endl;
		cout << "Rear index-> " << rear << endl;
	}
}
void Queue::Display()
{
	Queue queue;
	queue.enQueue(10);
	queue.enQueue(20);
	queue.enQueue(30);
	queue.enQueue(40);
	queue.enQueue(50);

	queue.Print();
	cout << endl;
	cout << endl;
	queue.deQueue();
	cout << endl;
	cout << endl;
	queue.Print();
}
int main()
{
	Queue qobj;
	qobj.Display();

	return 0;
}