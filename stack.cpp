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
	void newStack(int size){                               //creating a new stack
    int *S= NULL;
	S = new int[size];
	top = -1;
	}

	bool isEmpty()                                 // checking whether stack is empty
	{
		return (top == -1);
	}

	void Push(int value)                                   //pushing an element in stack
	{
		if (top == (size-1))                                    // resizing to twice the size if needed
		{
			int *A = NULL;
			A = new int[2*size];
			for (int i=0;i<size;i++)
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
