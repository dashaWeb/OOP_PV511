#pragma once
#include <iostream>
using std::string;
class Employee
{
public:
	Employee(const string& name = "Noname", const string& position = "NoPosition");
	~Employee();
	void print() const;
protected:
	string name;
	string position;
};

