#include "Student.h"
using std::cout;
using std::endl;
Student::Student(const string& name, const string& specialization)
	:name{ name }, specialization{specialization}
{
	cout << "\t >>>>> Ctor Student --> " << this->name << endl;
}

Student::~Student()
{
	cout << "\t >>>>> Dtor Student --> " << this->name << endl;
}

void Student::print() const
{
	cout << "Student name :: " << this->name << endl;
	cout << "Student spec :: " << this->specialization << endl;
}
