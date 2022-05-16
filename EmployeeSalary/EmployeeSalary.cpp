#include "Employee.h"
#include "UIBuilder.h"
#include "EmployeeFileConvert.h"
#include "Omega.h"

#include <chrono>
#include <thread>

int main(int argc, char *argv[])
{
    //1. READ FILE
    //read all employees from
    //"November2021.txt" file
    auto rFile = EmployeeFileConvert::readFile("November2021.txt");
    //in case that file could either not be read 
    //or contain error
    if (!get<0>(rFile))
    {
        cout << get<1>(rFile);  //release the error messgae
        this_thread::sleep_for(chrono::milliseconds(100000)); //sleep 100000 ms
        return -1;            //return error code -1
    }

    //if be possible to read, then put
    //these employees' infor back
    //into a vector of Employees
    auto omega = Omega(get<2>(rFile));

    this_thread::sleep_for(chrono::milliseconds(5000)); //sleep 5000 ms

    //2. PRINT THE LIST OF EMPLOYESS OF OMEGA COMPANY
    //print out each employees with detailed infor and final payment
    for (size_t i = 0; i < omega.getSize(); i++)
    {
        string nameClass = omega[i]->name();
        cout << UIBuilder::getBuilder()->Builder(nameClass, (void*)omega[i]);
    }

    this_thread::sleep_for(chrono::milliseconds(5000)); //sleep 5000 ms

    //3. SORT EMPLOYEE* VECTOR DESC
    //then print out a TOP ranking list of employees
    //who are ranked based on their own total payment
    cout << "\nBONUS: \r\n             A T.O.P Final Payment Ranking List of Employees:             " << endl;
    omega.sortEmployee();
    cout << omega << endl;
    EmployeeFileConvert::writeRakingFile("rankings.csv", omega);

    this_thread::sleep_for(chrono::milliseconds(100000)); //sleep 100000 ms

    return 0;
}