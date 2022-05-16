#pragma once
#ifndef _H_MANAGER_UI_BUILDER_H_
#define _H_MANAGER_UI_BUILDER_H_

#include "EmployeeUIBuilder.h"
#include "Manager.h"

class ManagerUIBuilder : public EmployeeUIBuilder
{
public:
    string inforUIBuider(void* employee_type) //print out Manager Employee's infor
    {
        stringstream builder;
        Manager* employee = (Manager*)employee_type;
        builder << "Manager: " << employee->getFullname() << endl;
        builder << "   FixedPayment=" << employee->getFixedpayment() << "$; " << "TotalEmployees=" << employee->getTotalemployees() << "; PaymentPerEmployee=" << employee->getPayment() << "$" << endl;
        Employee* em = employee;
        builder << "   FinalPayment=" << em->totalPayment() << "$" << endl;
        return builder.str();
    }
};

#endif // !_H_MANAGER_UI_BUILDER_H_
