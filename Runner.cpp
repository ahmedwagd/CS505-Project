#include "Runner.h"


Runner::Runner(int i, const string& n, int a, const string& g, int w, const string& c) :id(i), name(n), age(a), gender(g), weight(w), country(c)
{
}
Runner::~Runner()
{
}

void Runner::setId(int i)
{
	this->id = i;
}

int Runner::getId()
{
	return this->id;
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

void Runner::setGender(string g)
{
	this->gender = g;
}

string Runner::getGender()
{
	return this->gender;
}

void Runner::setWeight(int w)
{
	this->weight = w;
}


int Runner::getWeight()
{
	return this->weight;
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
	cout << "Runner no.: " << this->getId()
		<< "\tName: " << this->getName() 
		<< "\tAge: " << this->getAge() 
		<< "\tGender: " << this->getGender()
		<< "\tWeight: " << this->getWeight()
		<< "\tCountry: " << this->getCountry() << endl;
}
