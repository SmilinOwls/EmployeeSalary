#pragma once
#ifndef _H_SINGLETON_H_
#define _H_SINGLETON_H_

#include "Daily.h"
#include "Hourly.h"
#include "Product.h"
#include "Manager.h"

//SingleTon pattern
class SingleTon
{
public:
    static SingleTon* getInstance(); //getter
    template<class T>
                                                    
                                                                      
    pair<Employee*, T*> Create(const string& _fullname, const int* _payment, const int& _total) 
    {
        //build a employee and determine
        //what kind of Employee he could be 
        //based on class T (Prototype pattern)
        
        string type = string(typeid(T).name()).substr(6); 
        return make_pair<Employee*, T*>(prototypes[type]->create(_fullname, _payment, _total), NULL);
    }
    
private: // construct & destructor 
    SingleTon();
    ~SingleTon();
    inline static SingleTon* instance = NULL; //static pointer of SingleTon-typed variable
    map<string, Employee*> prototypes; //using prototype dictionary for building a Employee with template samples
};

#endif // !_H_SINGLETON_H_

