#include "StudentEmployee.h"
using std::cout;
using std::endl;
StudentEmployee::StudentEmployee(const string& nameStud, const string& nameEmployee, const string& specialization, const string& position)
	:Student(nameStud,specialization), Employee(nameEmployee,position)
{
	//Student::name = nameStud;
	//Employee::name = nameEmployee;
	
	cout << "\t Ctor StudentEmployee --> " << endl;
}

StudentEmployee::StudentEmployee(const Student& student, const Employee& employee)
	:Student(student), Employee(employee)
{
	cout << "\t Ctor StudentEmployee --> " << endl;
}

void StudentEmployee::print() const
{
	Student::print();
	Employee::print();
}

StudentEmployee::~StudentEmployee()
{
	cout << "\t Dtor StudentEmployee --> " << endl;

}
