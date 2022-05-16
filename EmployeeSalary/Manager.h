#pragma once
#ifndef _H_MANAGER_H_
#define _H_MANAGER_H_

#include "Employee.h"

class Manager : public Employee
{
public: // construct & destructor
    Manager();
    Manager(const string&, const int&, const int&, const int&);
    ~Manager();
public: //setter & getter
    int getFixedpayment() const;
    int getTotalemployees() const;
    int getPayment() const;
    void setFixedpayment(const int&);
    void setTotalemployees(const int&);
    void setPayment(const int&);
public:
    friend class SingleTon; //declare SingleTon to be friend class
    int totalPayment(); //total payment = _fixedpayment + _totalemployees*_payment_per_employee
    Employee* create(const string&, const int*, const int&); //build a 'Manager' employee
    string name() const; //get name of class Manager
private:  //attributes
    int _fixedpayment; //fix payment
    int _totalemployees; //total employees
    int _payment_per_employee; //payment per employee
};

#endif // !_H_MANAGER_H_
