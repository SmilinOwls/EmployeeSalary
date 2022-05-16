#pragma once
#ifndef _H_EMPLOYEE_READ_FROM_FILE_H_
#define _H_EMPLOYEE_READ_FROM_FILE_H_

#include "EmployeeFactory.h"
#include "Omega.h"

//to left trim a string if left characters of string 
//contains those chars like "\t\n\v\f\r" 
static string& ltrim(string& str, const string& chars = "\t\n\v\f\r ")
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

//A class to help read data from file
//then build any specified employees 
class EmployeeFileConvert
{
public:
    static tuple<bool, string, vector<Employee*>> readFile(const string& file_path);
    static void writeRakingFile(const string&, const Omega&);
};

#endif // !_H_EMPLOYEE_READ_FROM_FILE_H_
