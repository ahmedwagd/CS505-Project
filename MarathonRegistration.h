#ifndef MARATHONREGISTRATION_H
#define MARATHONREGISTRATION_H
#include <iostream>
#include <string>
#include"Runner.h"

using namespace std;

class MarathonQueue
{
private:
    struct Node {
        Runner runner;
        Node* next;
        Node(const Runner& r) : runner(r), next(NULL) {}
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
    bool searchRunner(const string& name) const;
    void editRunner(const string& name, int newAge, const string& newCountry);
    void deleteRunner(const string& name);
};

#endif
