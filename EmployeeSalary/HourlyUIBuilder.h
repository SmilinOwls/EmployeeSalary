#pragma once
#ifndef _H_HOURLY_UI_BUILDER_H_
#define _H_HOURLY_UI_BUILDER_H_

#include "EmployeeUIBuilder.h"
#include "Hourly.h"

class HourlyUIBuilder : public EmployeeUIBuilder
{
public:
    string inforUIBuider(void* employee_type) //print out Hourly Employee's infor
    {
        stringstream builder;
        Hourly* employee = (Hourly*)employee_type;
        builder << "HourlyEmployee: " << employee->getFullname() << endl;
        builder << "   HourlyPayment=" << employee->getHourlypayment() << "$; " << "TotalHours=" << employee->getTotalhours() << endl;
        Employee* em = employee;
        builder << "   FinalPayment=" << em->totalPayment() << "$" << endl;
        return builder.str();
    }
};

#endif // !_H_HOURLY_UI_BUILDER_H_

