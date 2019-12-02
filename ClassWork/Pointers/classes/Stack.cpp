#include "./../headers/Stack.h"

// Constructor to initialize MyStack
MyStack::MyStack(int size)
{
	arr = new int[size];
	capacity = size;
	top = -1;
}

// Destructor to free memory allocated to the MyStack
MyStack::~MyStack()
{
	delete arr;
}

// Utility function to add an element x in the MyStack
void MyStack::push(int x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << x << endl;
	arr[++top] = x;
}

// Utility function to pop top element from the MyStack
int MyStack::pop()
{
	// check for MyStack underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;

	// decrease MyStack size by 1 and (optionally) return the popped element
	return arr[top--];
}

// Utility function to return top element in a MyStack
int MyStack::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}

// Utility function to return the size of the MyStack
int MyStack::size()
{
	return top + 1;
}

// Utility function to check if the MyStack is empty or not
bool MyStack::isEmpty()
{
	return top == -1;	// or return size() == 0;
}

// Utility function to check if the MyStack is full or not
bool MyStack::isFull()
{
	return top == capacity - 1;	// or return size() == capacity;
}