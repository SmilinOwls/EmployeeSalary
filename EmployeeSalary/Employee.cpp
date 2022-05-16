#include "Employee.h"

Employee::Employee() : _fullname("") {}
Employee::Employee(const string& _fullname) : _fullname(_fullname) {}
Employee::~Employee() {}
string Employee::getFullname() const { return _fullname; }
void Employee::setFullname(const string& _fullname) { this->_fullname = _fullname; }