#include <iostream>

class Queue
{
	private:
		int *data;
		int size;
		int front;
		int rear;
	public:
		Queue(int size);
		void enqueue(int input);
		int dequeue();
		bool is_empty();
		bool is_full();
		void display();
		void swap(int *left, int *right);
};

Queue::Queue(int size)
{
	this->size = size; // Init Size of Array. 
	this->data = new int[size]; // Init Array and Assign Type of Array. 
	this->front = -1; // Init Pointer of Front. 
	this->rear = 0; // Init Pointer of Rear. 
}

void Queue::display() // Display: show the queue's latest output to the console in the format we want.  
{
	std::cout << "[";
	for(int i = 0; i < this->size; i++)
	{
		std::cout << " " << this->data[i] << " ";
	}
	std::cout << "]";
	std::cout << std::endl;
}

// Operation Function. 

void Queue::enqueue(int input) // Enqueue => Add Data to Queue. 
{
	if(this->is_full())
	{
		std::cout << "[ERROR] Queue is already full!!" << std::endl;
	}
	else
	{
		this->data[this->rear] = input;
		this->rear++;
	}
}

int Queue::dequeue() // Dequeue => Remove Data to Queue (Input that come to the queue first will be the First element to go out; FIFO: First In First Out). 
{
	int dequeue_data;
	if(this->is_empty())
	{
		std::cout << "[ERROR] Queue is already empty!!" << std::endl;
		return -1;
	}
	else
	{
		int dequeue_data = -1;
		if(this->is_empty())
		{
			std::cout << "[ERROR] Queue is already empty!!" << std::endl;
		}
		else
		{
			dequeue_data = this->data[0];
			for(int i = 0; i < this->rear; i++)
			{
				this->swap(&this->data[i], &this->data[i + 1]);
				this->data[i + 1] = 0;
			}
			this->rear--;
		}
		return dequeue_data;
	}
}

void Queue::swap(int *left, int *right)
{
	int temp; // Create Temporary Variable to store the variable; 
	temp = *left; // We want to change *left but also want to use the old *left value so we start to store old *left to temp.
	*left = *right; // Change *left to be the value of old *right; 
	*right = temp; // We want *right to be the value of old *left and now we store old *left value in temp so we can use it to change *right.
}

// Check Function. 
bool Queue::is_full() // Is it full? => Check if the Queue is full (return true) or not (return false). 
{
	return this->rear == this->size;
}

bool Queue::is_empty() // Is it empty? => Check if the Queue is empty (return true) or not (return false). 
{
	return this->rear == 0;
}

int main()
{
	Queue queue(3);
	queue.display();
	queue.enqueue(10);
	queue.display();
	queue.enqueue(20);
	queue.display();
	queue.enqueue(30);
	queue.display();
	std::cout << queue.dequeue() << std::endl;
	queue.display();
	std::cout << queue.dequeue() << std::endl;
	queue.display();
	std::cout << queue.dequeue() << std::endl;
	queue.display();
	std::cout << queue.dequeue() << std::endl;
	queue.display();
	std::cout << queue.dequeue() << std::endl;
	queue.display();
	return 0;
}