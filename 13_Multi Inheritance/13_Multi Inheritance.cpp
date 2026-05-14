#include <iostream>
#include "Student.h"
#include "Employee.h"
#include "StudentEmployee.h"
int main()
{
    Student stud("DENIS", "CS");
    stud.print();

    Employee emp("Denis", "Manager");
    emp.print();

    std::cout << "\n\n";
    StudentEmployee studemp("DENIS", "Denis", "CS","Manager");
    studemp.print();
    
}

