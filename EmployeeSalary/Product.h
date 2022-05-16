#pragma once
#ifndef _H_PRODUCT_H_
#define _H_PRODUCT_H_
#include "Employee.h"

class Product : public Employee
{
private: // construct & destructor
    Product();
    Product(const string&, const int&, const int&);
    ~Product();
public: //setter & getter
    int getPayment() const;
    int getTotalproducts() const;
    void setPayment(const int&);
    void setTotalproducts(const int&);
public:
    friend class SingleTon; //declare SingleTon to be friend class
    int totalPayment(); //total payment = _payment_per_product*_totalproducts
    Employee* create(const string&, const int*, const int&); //build a 'Product' employee
    string name() const; //get name of class Product
private: //attributes
    int _payment_per_product; //payment per product
    int _totalproducts; //total products
};
#endif // !_H_PRODUCT_H_
