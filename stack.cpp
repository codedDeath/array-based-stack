#include <iostream>
#include <string>

using namespace std;
class stack                     // defining the stack class
{

  int top;
  int i;
  int size;
  int *S;
public:
	void newStack(int a){ 
	size = a;                                                //creating a new stack
	S = new int[size];
	top = -1;
	}

	bool isEmpty()                                 // checking whether stack is empty
	{
		return (top == -1);
	}

void Push(int value)                                           //pushing an element as well as increasing the size if needed
	{
		if (top == (size-1))
		{
			size = 2*size;
			int *A = NULL;
			A = new int[size];
			for (int i=0;i<(size/2);i++)
			{
				A[i] = S[i];
			}
			S = A;
		}
		top++;
		S[top] = value;
	}

	void Pop()                                                        //poping out an element
	{
		if (top == -1)
                  throw string("Stack is empty");
            S[top] = NULL;
            top--;
	}

	void deleteStack()                                                  //deleting an entire stack
	{
		delete[] S;
	}

	void printStack()                                                     //printing the elements of a stack
	{
		for (int i=0;i<size;i++)
		{
			cout << S[i];
		}
	}
};
