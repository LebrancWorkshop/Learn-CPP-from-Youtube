#include <iostream>
#include "lab_queue.h"

int main()
{
	Queue queue(5);
	queue.display();
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(10);
	queue.display();
	std::cout << queue.dequeue() << std::endl; // Use cout to print the dequeue value to the console. 
	queue.display();
	return 0;
}