#include "Runner.h"

Runner::Runner(const string& n, int a, const string& c): name(n), age(a), country(c)
{
}

Runner::~Runner()
{
}
void Runner::setName(string n)
{
	this->name = n;
}

string Runner::getName()
{
	return this->name;
}

void Runner::setAge(int a)
{
	this->age = a;
}

int Runner::getAge()
{
	return this->age;
}
void Runner::setCountry(string c)
{
	this->country = c;
}

string Runner::getCountry()
{
	return this->country;
}

void Runner::displayRunner() 
{
    cout << "Name: " << this->getName() << "\tAge: " << this->getAge() << "\tCountry: " << this->getCountry() << endl;
}
