#pragma once
#ifndef _H_PRODUCT_UI_BUILDER_H_
#define _H_PRODUCT_UI_BUILDER_H_

#include "EmployeeUIBuilder.h"
#include "Product.h"

class ProductUIBuilder : public EmployeeUIBuilder
{
public:
    string inforUIBuider(void* employee_type) //print out Product Employee's infor
    {
        stringstream builder;
        Product* employee = (Product*)employee_type;
        builder << "ProductEmployee: " << employee->getFullname() << endl;
        builder << "   ProductPayment=" << employee->getPayment() << "$; " << "TotalProducts=" << employee->getTotalproducts() << endl;
        Employee* em = employee;
        builder << "   FinalPayment=" << em->totalPayment() << "$" << endl;
        return builder.str();
    }
};

#endif // !_H_PRODUCT_UI_BUILDER_H_
