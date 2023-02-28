#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack o;

	for (int i = 0; i < 10; i++)
	{
		o.Push(i);
	}

	Stack c = o;


	return 0;
}