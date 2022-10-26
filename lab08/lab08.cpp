#include <iostream>

// Can swap even if there is no return.
void swap_ptr(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Can't swap since it doesn't have a return. 
void swap_noptr(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 1, b = 2;
	std::cout << "a: " << a << " " << " b: " << b << std::endl;
	swap_ptr(&a, &b);
	std::cout << "a: " << a << " " << " b: " << b << std::endl;
	return 0;
}

// swap_ptr can swap, but swap_noptr can't. 