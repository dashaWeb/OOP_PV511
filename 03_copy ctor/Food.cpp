#include "Food.h"
#include <iostream>
using std::cout;
using std::endl;

void Food::setName(const char* name)
{
	// memory leak
	if (this->name != nullptr)
		delete[] this->name;

	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);

}

void Food::print() const
{
	cout << "\n\n";
	cout << "\t Food   : " << this->name << endl;
	cout << "\t Kkal   : " << this->kkal << endl;
	cout << "\t Weight : " << this->weight << endl;
}

Food::Food(const char* name, const size_t& kkal, const size_t& weight)
	//:kkal{kkal}
{
	setName(name);
	setWeight(weight);
	setKkal(kkal);
}

Food::Food(const Food& other) // deep copy
{
	//this->name = other.name; // bad
	setName(other.name);
	this->kkal = other.kkal;
	this->weight = other.weight;
}

void Food::operator=(const Food& other)
{
	if (this == &other) // a == a
		return;

	setName(other.name);
	setKkal(other.kkal);
	setWeight(other.weight);
}
