#pragma once
#ifndef _H_DAILY_H_
#define _H_DAILY_H_
#include "Employee.h"

class Daily : public Employee
{
private: // construct & destructor
    Daily();
    Daily(const string&, const int&, const int&);
    ~Daily();
public: //setter & getter
    int getDailypayment() const;
    int getTotaldays() const;
    void setDailypayment(const int&);
    void setTotaldays(const int&);
public:
    friend class SingleTon; //declare SingleTon to be friend class
    int totalPayment(); //total payment = _dailypayment*_totaldays
    Employee* create(const string&, const int*, const int&); //build a Daily Employee
    string name() const; //get name of class Daily
private:  //attributes
    int _dailypayment; //daly payment
    int _totaldays; //total days
};

#endif // !_H_DAILY_H_

