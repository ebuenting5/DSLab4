/*
* Ethan Buenting
* Data Structures Spring 2023
* Due: 2/27/2023
* Lab 4 Stack
* Reversing a stack with recursion
*/
#include <iostream>
#include "Stack.h"

int reverse(Stack s, Stack r);

using namespace std;

int main()
{
	Stack s, r;

	s.Push(1);
	s.Push(2);
	s.Push(4);
	s.Push(8);
	s.Push(16);

	cout << s.Top() << endl;

	reverse(s, r);

	cout << r.Top();

	return 0;
}

int reverse(Stack s, Stack r)
{
	if (!s.IsEmpty())
	{
		int temp = s.Top();
		s.Pop();
		r.Push(temp);
		return(reverse(s, r));
	}
	else
		return 0;
}