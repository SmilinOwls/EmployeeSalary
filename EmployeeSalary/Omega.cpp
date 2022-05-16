#include "Omega.h"

Omega::Omega() { employees.resize(0); }
Omega::Omega(const vector<Employee*>& employees) : employees(employees) {}
Omega::~Omega() { for (size_t i = 0; i < employees.size(); i++) delete employees[i]; }

vector<Employee*> Omega::getEmployee() const { return employees; }
size_t Omega::getSize() const { return employees.size(); }
Omega& Omega::operator=(const Omega& omega)
{
    this->employees = omega.employees;
    return *this;
}

Employee*& Omega::operator[](const size_t& where)
{
    if (where >= employees.size() || where < 0)
    {
        throw "Index to access exists out of bound!";
        exit(-1);
    }
    return employees[where];
}

void Omega::sortEmployee()
{
    sort(employees.begin(), employees.end(), [](Employee* em1, Employee* em2) -> bool {return em1->totalPayment() > em2->totalPayment(); });
}

ostream& operator<<(ostream& os, const Omega& omega)
{
    for (auto &x : omega.getEmployee())
    {
        string nameClass = x->name();
        os << UIBuilder::getBuilder()->Builder(nameClass, (void*)x);
    }
    return os;
}