#pragma once
#ifndef _H_DAILY_UI_BUILDER_H_
#define _H_DAILY_UI_BUILDER_H_

#include "EmployeeUIBuilder.h"
#include "Daily.h"

class DailyUIBuilder : public EmployeeUIBuilder
{
public:
    string inforUIBuider(void* employee_type) //print out Daily Employee's infor
    {
        stringstream builder;
        Daily* employee = (Daily*)employee_type;
        builder << "DailyEmployee: " << employee->getFullname() << endl;
        builder << "   DailyPayment=" << employee->getDailypayment() << "$; " << "TotalDays=" << employee->getTotaldays() << endl;
        Employee* em = employee;
        builder << "   FinalPayment=" << em->totalPayment() << "$" << endl;
        return builder.str();
    }
};
#endif // !_H_DAILY_UI_BUILDER_H_
