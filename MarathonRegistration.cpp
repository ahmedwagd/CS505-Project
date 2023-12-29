#include "MarathonRegistration.h"

MarathonQueue::MarathonQueue(): front(NULL), rear(NULL)
{
}

MarathonQueue::~MarathonQueue()
{
    while (!isEmpty()) 
	{
        dequeue();
    }
}

void MarathonQueue::enqueue(const Runner& runner) 
{
    Node* newNode = new Node(runner);
    if (isEmpty()) 
	{
        front = rear = newNode;
    }
	else
	{
        rear->next = newNode;
        rear = newNode;
    }
}

void MarathonQueue::dequeue() 
{
    if (isEmpty())
	{
        return;
    }

    Node* temp = front;
    front = front->next;
    delete temp;
}

bool MarathonQueue::isEmpty() const 
{
    return front == NULL;
}

void MarathonQueue::displayQueue() const 
{
    Node* current = front;
    while (current != NULL) 
	{
        current->runner.displayRunner();
        current = current->next;
    }
}

bool MarathonQueue::searchRunner(const string& name) const 
{
    Node* current = front;
    while (current != NULL) 
	{
        if (current->runner.getName() == name) 
		{
            current->runner.displayRunner();
            return true;
        }
        
		current = current->next;
    }
    return false;
}

void MarathonQueue::editRunner(const string& name, int newAge, const string& newCountry) 
{
    Node* current = front;
    while (current != NULL)
	{
        if (current->runner.getName() == name) 
		{
            current->runner.setAge(newAge);
            current->runner.setCountry(newCountry);
            break;
        }
        current = current->next;
    }
}

void MarathonQueue::deleteRunner(const string& name) 
{
    if (isEmpty()) 
	{
        return;
    }

    if (front->runner.getName() == name) 
	{
        dequeue();
        return;
    }

    Node* current = front;
    while (current->next != NULL && current->next->runner.getName() != name) 
	{
        current = current->next;
    }

    if (current->next != NULL) 
	{
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

