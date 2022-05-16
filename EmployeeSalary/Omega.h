#pragma once
#ifndef _H_OMEGA_H_
#define _H_OMEGA_H_

#include "Employee.h"
#include "UIBuilder.h"

//Build the last part of Factory pattern: class Omega
//which deems to be a class of company 
//in which contains and manages
//all employees of every kind working
class Omega
{
public: //construct & destructor
    Omega();
    Omega(const vector<Employee*>&);
    ~Omega();
public: //getter & operator overloading function
    vector<Employee*> getEmployee() const; //get a list of employees
    size_t getSize() const; //get the total number of employees 
    Omega& operator=(const Omega&); //overloading = operator  
    Employee*& operator[](const size_t&); //overloading [] operator to access elements in array style
    void sortEmployee(); //sort Employees' list DESC based on the final payment of every each employee
    friend ostream& operator<<(ostream&, const Omega&); //print out the list
private:
    vector<Employee*> employees; //declare a list of Employees 
};

#endif // !_H_OMEGA_H_

