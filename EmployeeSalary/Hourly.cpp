#include "Hourly.h"

Hourly::Hourly() : Employee(), _hourlypayment(0), _totalhours(0) {}
Hourly::Hourly(const string& _fullname, const int& _hourlypayment, const int& _totalhours)
	: Employee(_fullname), _hourlypayment(_hourlypayment), _totalhours(_totalhours) {}
Hourly::~Hourly() {}
int Hourly::getHourlypayment() const { return _hourlypayment; }
int Hourly::getTotalhours() const { return _totalhours; }
void Hourly::setHourlypayment(const int& _hourlypayment) { this->_hourlypayment = _hourlypayment; }
void Hourly::setTotalhours(const int& _totalhours) { this->_totalhours = _totalhours; }
int Hourly::totalPayment() { return _hourlypayment * _totalhours; }
Employee* Hourly::create(const string& _fullname, const int* _hourlypayment, const int& _totalhours) { return new Hourly(_fullname, _hourlypayment[0], _totalhours); }
string Hourly::name() const { return "Hourly"; }