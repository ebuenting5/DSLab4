#ifndef STACK_H
#define STACK_H

struct Node
{
	int item;
	Node* next;
};

class Stack
{
public:
	Stack();
	~Stack();

	//Description: Determines if the stack is empty
	bool IsEmpty();
	//Description: Determines if the stack is full
	bool IsFull();
	//Description: Adds an item onto the top of the stack
	bool Push(int item);
	//Description: Removes the item on the top of the stack
	void Pop();
	//Description: Returns a copy of the item on top of the stack
	int Top();

private:
	Node* head;
	int listsize;
};

#endif // !STACK_H
