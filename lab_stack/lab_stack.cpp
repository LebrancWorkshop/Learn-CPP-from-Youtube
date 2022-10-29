#include <iostream>
// using namespace std;

class Stack
{
	private:
		int size;
		int top;
		int *data;
	public:
		Stack(int size);
		void push(int number);
		int pop();
		int peak();
		bool is_stackoverflow();
		bool is_empty();
		void display();
};

Stack::Stack(int size)
{
	this->size = size;
	this->top = -1;
	this->data = new int[size];
}

void Stack::push(int number)
{
	if(this->is_stackoverflow())
	{
		std::cout << "Stack overflow!" << std::endl;
	}
	else
	{
		this->top++;
		this->data[this->top] = number;
	}
}

bool Stack::is_stackoverflow()
{
	if(this->top == this->size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::display()
{
	for(int i = 0; i < this->size; i++)
	{
		std::cout << this->data[i] << ", ";
	}
	std::cout << std::endl;
}

int main()
{
	Stack stack(10);
	stack.push(10);
	stack.display();
	return 0;
}