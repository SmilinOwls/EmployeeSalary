#include "Product.h"

Product::Product() : Employee(), _payment_per_product(0), _totalproducts(0) {}
Product::Product(const string& _fullname, const int& _payment_per_product, const int& _totalproducts)
	: Employee(_fullname), _payment_per_product(_payment_per_product), _totalproducts(_totalproducts) {}
Product::~Product() {}
int Product::getPayment() const { return _payment_per_product; }
int Product::getTotalproducts() const { return _totalproducts; }
void Product::setPayment(const int& _payment_per_product) { this->_payment_per_product = _payment_per_product; }
void Product::setTotalproducts(const int& _totalproducts) { this->_totalproducts = _totalproducts; }
int Product::totalPayment() { return _payment_per_product * _totalproducts; }
Employee* Product::create(const string& _fullname, const int* _payment_per_product, const int& _totalproducts) { return new Product(_fullname, _payment_per_product[0], _totalproducts); }
string Product::name() const { return "Product"; }