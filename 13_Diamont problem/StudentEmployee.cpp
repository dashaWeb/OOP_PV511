#include "StudentEmployee.h"
using std::cout;
using std::endl;
StudentEmployee::StudentEmployee(const string& name, const string& specialization, const string& position)
	:Person(name), Student("", specialization), Employee("---", position)
{
	//Student::name = nameStud;
	//Employee::name = nameEmployee;

	cout << "\t Ctor StudentEmployee --> " << endl;
}

StudentEmployee::StudentEmployee(const Student& student, const Employee& employee)
	:Person(student),Student(student), Employee(employee)
{
	cout << "\t Ctor StudentEmployee --> " << endl;
}

void StudentEmployee::print() const
{
	//Student::print();
	//Employee::print();
	cout << "Name :: " << name << endl;
	cout << "studies :: " << specialization << endl;
	cout << "work as :: " << position << endl;
}

StudentEmployee::~StudentEmployee()
{
	cout << "\t Dtor StudentEmployee --> " << endl;

}
