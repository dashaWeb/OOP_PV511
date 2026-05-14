#pragma once
#include "Person.h"

class Student :virtual public Person
{
public:
	Student(const string& name = "Noname", const string& specialization = "NoSpec");
	~Student();
	void print() const;
protected:
	//string name;  // успадкувався від Персони
	string specialization;
};
