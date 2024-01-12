#include "MarathonRegistration.h"

MarathonQueue::Node::Node(const Runner& r) : runner(r), next(NULL)
{
}

MarathonQueue::MarathonQueue() : front(NULL), rear(NULL)
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
		cout << "!!!!!!!!!!!!Mafesh 7aga hena\n";
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

bool MarathonQueue::searchRunnerByName(const string& name) const
{
	Node* current = front;
	while (current != NULL)
	{
		if (current->runner.getName() == name)
		{
			cout << "Gebtholak ->\n";
			current->runner.displayRunner();
			return true;
		}
		current = current->next;
	}
	return false;
}

void MarathonQueue::editRunnerByName(const string& name, int newId, int newAge, const string& newGender, int newWeight, const string& newCountry)
{
	Node* current = front;
	while (current != NULL)
	{
		if (current->runner.getName() == name)
		{
			current->runner.setId(newId);
			current->runner.setAge(newAge);
			current->runner.setGender(newGender);
			current->runner.setWeight(newWeight);
			current->runner.setCountry(newCountry);
			break;
		}
		current = current->next;
	}
}

void MarathonQueue::deleteRunnerByName(const string& name)
{
	if (isEmpty())
	{
		cout << "Mesh mawgod 7ad hena b el esm da\n";
		return;
	}
	if (front->runner.getName() == name)
	{
		dequeue();
		cout << "Tmama msa7toh\n";
		return;
	}
	// feha kalam !!!
	Node* current = front;
	while (current->next !=NULL && current->next->runner.getName() != name)
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

bool MarathonQueue::searchRunnerById(int id) const
{
	Node* current = front;
	while (current != NULL)
	{
		if (current->runner.getId() == id)
		{
			cout << "Gebtholak ->\n";
			current->runner.displayRunner();
			return true;
		}

		current = current->next;
	}
	return false;
}

void MarathonQueue::editRunnerById(int id, const string& newName, int newAge, const string& newGender, int newWeight, const string& newCountry)
{
	Node* current = front;
	while (current != NULL)
	{
		if (current->runner.getId() == id)
		{
			current->runner.setName(newName);
			current->runner.setAge(newAge);
			current->runner.setGender(newGender);
			current->runner.setWeight(newWeight);
			current->runner.setCountry(newCountry);
			break;
		}
		current = current->next;
	}
}

void MarathonQueue::deleteRunnerById(int id)
{
	if (isEmpty())
	{
		cout << "Mesh mawgod 7ad hena b el ID da\n";
		return;
	}
	if (front->runner.getId() == id)
	{
		dequeue();
		cout << "Tmama msa7toh\n";
		return;
	}
	// feha kalam !!!
	Node* current = front;
	while (current->next != NULL && current->next->runner.getId() != id)
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
