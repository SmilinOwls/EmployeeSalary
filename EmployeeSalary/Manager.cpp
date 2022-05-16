#include "Manager.h"

Manager::Manager() : Employee(), _fixedpayment(0), _totalemployees(0), _payment_per_employee(0) {}
Manager::Manager(const string& _fullname, const int& _fixedpayment, const int& _totalemployees, const int& _payment_per_employee)
	: Employee(_fullname), _fixedpayment(_fixedpayment), _totalemployees(_totalemployees), _payment_per_employee(_payment_per_employee) {}
Manager::~Manager() {}

int Manager::getFixedpayment() const { return _fixedpayment; }
int Manager::getTotalemployees() const { return _totalemployees; }
int Manager::getPayment() const { return _payment_per_employee; }
void Manager::setFixedpayment(const int& _fixedpayment) { this->_fixedpayment = _fixedpayment; }
void Manager::setTotalemployees(const int& _totalemployees) { this->_totalemployees = _totalemployees; }
void Manager::setPayment(const int& _payment_per_employee) { this->_payment_per_employee = _payment_per_employee; }
int Manager::totalPayment() { return  _fixedpayment + _payment_per_employee * _totalemployees; }
Employee* Manager::create(const string& _fullname, const int* _payment, const int& _totalemployees)
{
	return new Manager(_fullname, _payment[0], _totalemployees, _payment[1]);
}
string Manager::name() const { return "Manager"; }
