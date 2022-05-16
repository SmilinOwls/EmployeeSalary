#pragma once
#ifndef _H_EMPLOYEEFACTORY_H_
#define _H_EMPLOYEEFACTORY_H_

#include "SingleTon.h"

//Interface class to give any parameters of Employee specified
//to build & initialise ('create') a Employee
class EmployeeFactory
{
public:
    enum class EmployeeType
    {
        Daily = 1,
        Hourly = 2,
        Product = 3,
        Manager = 4
    };
    static Employee* createEmployee(EmployeeType, const string&, const int*,const int&); //build a Employee with needed parameters
};

//funtion pointer declaration
using Predicate = bool(*)(string, void*);

namespace
{
    vector<pair<string, EmployeeFactory::EmployeeType>> type_map(4);

    //initialize a map so that every each Employee in 'string' form 
    //could be equivavent to that in 'EmployeeType' type
    bool initialize_map()
    {
        type_map[0] = make_pair("DailyEmployee", EmployeeFactory::EmployeeType::Daily);
        type_map[1] = make_pair("HourlyEmployee", EmployeeFactory::EmployeeType::Hourly);
        type_map[2] = make_pair("ProductEmployee", EmployeeFactory::EmployeeType::Product);
        type_map[3] = make_pair("Manager", EmployeeFactory::EmployeeType::Manager);
        return true;
    }

    bool initialization_result = initialize_map();

    bool check(string type, void* enum_type)
    {
        string e_type = *((string*)enum_type);
        return (type == e_type);
    }

    //convert a string to Employee Type
    //to detect what kind of Employee should be created
    EmployeeFactory::EmployeeType enum_conversion(Predicate pre, void* enum_type)
    {
        for (auto& val : type_map)
        {
            if (pre(val.first, enum_type))
            {
                return val.second;
            }
        }

        return type_map[0].second;
    }
}

#endif // !_H_EMPLOYEEFACTORY_H_
