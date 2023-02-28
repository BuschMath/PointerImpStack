#include "Stack.h"

Stack::Stack()
{
	head = nullptr;
}

Stack::~Stack()
{
	while (!IsEmpty())
		Pop();
}

void Stack::Push(ItemType item_)
{
	if (!IsFull())
	{
		Node* temp = new Node;
		temp->next = head;
		temp->item = item_;
		head = temp;
	}
}

void Stack::Pop()
{
	if (!IsEmpty())
	{
		Node* temp = head;
		head = head->next;

		delete temp;
	}
}

ItemType Stack::Top()
{
	return ItemType();
}

bool Stack::IsFull()
{
	return false;
}

bool Stack::IsEmpty()
{
	return false;
}

Stack Stack::operator=(Stack orignal)
{
	Stack copy;
	Stack temp;

	// Copy values from orignal to inverted temp stack.
	while (!orignal.IsEmpty())
	{
		temp.Push(orignal.Top());
		orignal.Pop();
	}

	while (!temp.IsEmpty())
	{
		orignal.Push(temp.Top());
		copy.Push(temp.Top());
		temp.Pop();
	}

	return copy;
}
