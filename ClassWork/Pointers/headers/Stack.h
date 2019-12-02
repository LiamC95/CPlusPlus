#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;
#define SIZE = 10

class MyStack
{
	int *arr;
	int top;
	int capacity;

public:
	MyStack(int size = SIZE); 	// constructor
	~MyStack();   				// destructor

	void push(int);
	int pop();
	int peek();

	int size();
	bool isEmpty();
	bool isFull();
};
