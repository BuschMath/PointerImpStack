#ifndef STACK_H
#define STACK_H

#include "ItemType.h"

struct Node
{
	ItemType item;
	Node* next;
};

class Stack
{
public:
	Stack();
	~Stack();

	void Push(ItemType item_);
	void Pop();
	ItemType Top();
	bool IsFull();
	bool IsEmpty();

private:
	Node* head;
};

#endif // !STACK_H
