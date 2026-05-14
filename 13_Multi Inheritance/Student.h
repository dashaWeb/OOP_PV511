#pragma once
#include <iostream>
using std::string;
class Student
{
public:
	Student(const string& name = "Noname", const string& specialization = "NoSpec");
	~Student();
	void print() const;
protected:
	string name;
	string specialization;
};

