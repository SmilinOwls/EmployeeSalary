#pragma once
#ifndef _H_HOURLY_H_
#define _H_HOURLY_H_
#include "Employee.h"

class Hourly : public Employee
{
private:
    Hourly(); // construct & destructor
    Hourly(const string&, const int&, const int&);
    ~Hourly();
public: //setter & getter
    int getHourlypayment() const;
    int getTotalhours() const;
    void setHourlypayment(const int&);
    void setTotalhours(const int&);
public:
    friend class SingleTon; //declare SingleTon to be friend class
    int totalPayment(); //total payment = _hourlypayment*_totalhours
    Employee* create(const string&, const int*, const int&); //build a 'Hourly' employee
    string name() const; //get name of class Hourly
private: //attributes
    int _hourlypayment; //hourly payment
    int _totalhours; //total hours
};

#endif // !_H_HOURLY_H_
