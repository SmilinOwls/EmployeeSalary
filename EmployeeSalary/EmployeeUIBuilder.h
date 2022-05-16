#pragma once
#ifndef _H_EMPLOYEE_UI_BUILDER_H_
#define _H_EMPLOYEE_UI_BUILDER_H_

#include "Employee.h"

//Buider pattern
class EmployeeUIBuilder
{
public:
    virtual string inforUIBuider(void*) = 0; //print out all the employees' information, 
                                             //including the final payment for each of them
};

#endif // !_H_EMPLOYEE_UI_BUILDER_H_

