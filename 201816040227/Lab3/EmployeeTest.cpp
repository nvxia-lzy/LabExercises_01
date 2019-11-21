// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   Employee employee1( "Bob"," Jones",2000);/* Create two Employee objects and assign them to Employee variables. */

   Employee employee2( "Susan"," Baker",1000);
   
   cout << "Employee 1:"<< employee1.getFirstName()<<employee1.getLastName()<<";\nYearly Salary:"<< employee1.getMonthlySalary()*12<<"\nEmployee 2:"<<employee2.getFirstName()<<employee2.getLastName()<<";\nYearly Salary:"<<employee2.getMonthlySalary()*12<<endl;
   /* Output the first name, last name and salary for each Employee. */
   
   cout << "Increasing employee Salarys by 10%"<<endl;
   /* Give each Employee a 10% raise. */
   
   cout << "Employee 1:"<< employee1.getFirstName()<<employee1.getLastName()<<";\nYearly Salary:"<< employee1.getMonthlySalary()*13.2<<"\nEmployee 2:"<<employee2.getFirstName()<<employee2.getLastName()<<";\nYearly Salary:"<<employee2.getMonthlySalary()*13.2<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
