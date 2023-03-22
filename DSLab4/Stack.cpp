#include "Stack.h"

Stack::Stack()
{
	head = nullptr;
	listsize = 100;
}

Stack::~Stack()
{
	Node* temp;
	while (head != nullptr)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}
//precondition: Stack is initialized
//postcondition: Return value indicates if the stack is empty
bool Stack::IsEmpty()
{
	if (head == nullptr)
		return true;
	return false;
}
//precondition: Stack is initialized
//postcondition: Return value indicates if the stack is full
bool Stack::IsFull()
{
	Node* temp;
	try
	{
		temp = new Node;
		delete temp;
		return false;
	}
	catch (std::bad_alloc exception)
	{
		return true;
	}
}
//precondition: stack is initialized
//postcondition: Adds and item to the top to the stack and returns if operation was successful
bool Stack::Push(int item)
{
	if (!IsFull())
	{
		Node* temp = new Node;
		temp->next = head;
		temp->item = item;
		head = temp;
		return true;
	}
	return false;
}
//precondition: stack has information stored
//postcondition: removes the item from the top of the stack
void Stack::Pop()
{
	if (!IsEmpty())
	{
		Node* temp;
		temp = head;
		head = head->next;
		delete temp;
	}
}
//precondition: stack has information stored
//postcondition: stack returns a copy of the top item
int Stack::Top()
{
	if (!IsEmpty())
	{
		return head->item;
	}
	else
		return 0;
}