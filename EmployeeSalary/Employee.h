#pragma once
#ifndef _H_EMPLOYEE_H_
#define _H_EMPLOYEE_H_

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <fstream>
#include <regex>
#include <map>
#include <sstream>
#include <algorithm>
#include <functional>

using namespace std;

//build basebase class called "Employee" with 4 derived classes following  
class Employee
{
private: // construct & destructor
    Employee();
    Employee(const string&);
    ~Employee();
public: //setter & getter
    string getFullname() const;
    void setFullname(const string&);
public: //declare friend classes which is allowed to access to 
       //any private attributes and methods
    friend class Daily;
    friend class Hourly;
    friend class Product;
    friend class Manager;
    friend class Omega;
    //virtual pure functions for abstract class
    virtual int totalPayment() = 0;  //calculate total payment for each specified Employee
    virtual Employee* create(const string&, const int*, const int&) = 0; //create specified Employee 
    virtual string name() const = 0; //virtual method to get a name of class
private:
    string _fullname; //general attribute due to all employees each has his own name
};
#endif // !_H_EMPLOYEE_H_
