#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "StudentEmployee.h"

int main()
{
    Person person("Alex");
    Student stud("Denis", "CS");
    Employee emp("DENIS", "Manager");

    person.print();
    stud.print();
    emp.print();

    cout << "\n\n";
    StudentEmployee stemp("Denis","CS","Manager");
    stemp.print();

}

