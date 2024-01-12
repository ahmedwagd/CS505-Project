#ifndef MARATHONREGISTRATION_H
#define MARATHONREGISTRATION_H
#include <iostream>
#include <string>
#include"Runner.h"

using namespace std;

class MarathonQueue
{
private:
	static int counter;
	struct Node
	{
		Runner runner;
		Node* next;
		Node(const Runner& r);
	};
	Node* front;
	Node* rear;
public:
	MarathonQueue();
	~MarathonQueue();

	void enqueue(const Runner& runner);
	void dequeue();
	bool isEmpty() const;
	void displayQueue() const;

	bool searchRunnerByName(const string& name) const;
	void editRunnerByName(const string& name, int newId, int newAge, const string& newGender, int newWeight, const string& newCountry);
	void deleteRunnerByName(const string& name);

	bool searchRunnerById(int id) const;
	void editRunnerById(int id, const string& newName, int newAge, const string& newGender, int newWeight, const string& newCountry);
	void deleteRunnerById(int id);

};

#endif
