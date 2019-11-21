// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

 Employee::Employee( string first, string last, int salary)/* Define the constructor. Assign each parameter value to the appropriate data member. Write code that validates the value of salary to ensure that it is not negative. */
{
    setFirstName(first);
    setLastName(last);
    setMonthlySalary(salary);


    if ( salary < 0 )
     salary=0;
}

    void Employee::setFirstName( string name )
{
    firstName = name;
} /* Define a set function for the first name data member. */

    string Employee::getFirstName()
{
   return firstName;
} /* Define a get function for the first name data member. */

    void Employee::setLastName( string name )
{
    lastName = name ;
}/* Define a set function for the last name data member. */

    string Employee::getLastName()
{
    return lastName;
}/* Define a get function for the last name data member. */



	void Employee::setMonthlySalary(int a)/* Define a set function for the monthly salary data member. Write code that validates the salary to ensure that it is not negative. */
    {
        if(a<0)
        {
            monthlySalary=0;
        }
       else
        {
            monthlySalary=a;
        }
    }
    int Employee::getMonthlySalary()/* Define a get function for the monthly salary data member. */
{
    return monthlySalary;
}
