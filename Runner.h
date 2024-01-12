#ifndef RUNNER_H
#define RUNNER_H
#include <iostream>
#include <string>
using namespace std;

class Runner
{
private:
	int id;
	string name;
	int age;
	string gender;
	int weight;
	string country;
public:
	Runner(int i, const string& n, int a, const string& g,int w, const string& c);
	~Runner();
	void setId(int i);
	int getId();
	void setName(string n);
	string getName();
	void setAge(int a);
	int getAge();
	void setGender(string g);
	string getGender();
	void setWeight(int w);
	int getWeight();
	void setCountry(string c);
	string getCountry();
	void displayRunner();
};

#endif
