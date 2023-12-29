#ifndef RUNNER_H
#define RUNNER_H

#include <iostream>
#include <string>
using namespace std;

class Runner {
private:
    string name;
    int age;
    string country;
public:
    
	Runner(const string& n, int a, const string& c);
	~Runner();
	void setName(string n);
	string getName();
	void setAge(int a);
	int getAge();
	void setCountry(string c);
	string getCountry();
    void displayRunner();
};

#endif
