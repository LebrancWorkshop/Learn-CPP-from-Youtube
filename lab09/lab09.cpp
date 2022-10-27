// Lab09: Reverse Array. 
#include <iostream>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0, j = 9; i < 10; i++, j--)
	{
		if(i < j)
		{
			swap(&a[i], &a[j]);
		}
	}

	for(int i = 0; i < 10; i++)
	{
		std::cout << a[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}