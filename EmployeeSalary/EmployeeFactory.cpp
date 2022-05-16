#include "EmployeeFactory.h"

Employee* EmployeeFactory::createEmployee(EmployeeType type, const string& _fullname, const int* _payment, const int &_total)
{
    if (type == EmployeeType::Daily) return SingleTon::getInstance()->Create<Daily>(_fullname, _payment, _total).first;
    else if (type == EmployeeType::Hourly) return SingleTon::getInstance()->Create<Hourly>(_fullname, _payment, _total).first;
    else if (type == EmployeeType::Product) return SingleTon::getInstance()->Create<Product>(_fullname, _payment, _total).first;
    else if (type == EmployeeType::Manager) return SingleTon::getInstance()->Create<Manager>(_fullname, _payment, _total).first;
    else return NULL;
}