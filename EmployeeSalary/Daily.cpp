#include "Daily.h"

Daily::Daily() : Employee(), _dailypayment(0), _totaldays(0) {}
Daily::Daily(const string& _fullname, const int& _dailypayment, const int& _totaldays)
	: Employee(_fullname), _dailypayment(_dailypayment), _totaldays(_totaldays) {}
Daily::~Daily() {}
int Daily::getDailypayment() const { return _dailypayment; }
int Daily::getTotaldays() const { return _totaldays; }
void Daily::setDailypayment(const int& _dailypayment) { this->_dailypayment = _dailypayment; }
void Daily::setTotaldays(const int& _totaldays) { this->_totaldays = _totaldays; }
int Daily::totalPayment() { return _dailypayment * _totaldays; }
Employee* Daily::create(const string& _fullname, const int* _dailypayment, const int& _totaldays) { return new Daily(_fullname, _dailypayment[0], _totaldays); }
string Daily::name() const { return "Daily"; }