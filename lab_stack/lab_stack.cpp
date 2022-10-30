#include <iostream>

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
		int len();
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

int Stack::pop()
{
	if(this->is_empty())
	{
		std::cout << "Stack is empty!" << std::endl;
		return -1;
	}
	else
	{
		int temp = this->data[this->top];
		this->data[this->top] = 0;
		this->top--;
		return temp;
	}
}

int Stack::peak()
{
	if(this->is_empty())
	{
		std::cout << "Stack is empty!" << std::endl;
		return -1;
	}
	else
	{
		return this->data[this->top];
	}
}

int Stack::len()
{
	return this->top + 1;
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

bool Stack::is_empty()
{
	if(this->top == -1)
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
	stack.push(20);
	std::cout << stack.len() << std::endl;
	stack.display();
	std::cout << stack.pop() << std::endl;
	stack.display();
	return 0;
}