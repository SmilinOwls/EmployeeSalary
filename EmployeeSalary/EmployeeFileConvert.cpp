#include "EmployeeFileConvert.h"
tuple<bool, string, vector<Employee*>> EmployeeFileConvert::readFile(const string& file_path)
{
    bool isRead = false;
    string message = "";
    vector<Employee*> employees;
    fstream f;

    string _fullname = "";
    int* _payment = new int[2]{ 0,0 };
    int _total = 0;

    try
    {
        f.open(file_path, ios::in);
        isRead = true;
        message = "Successfully open file " + file_path + " for reading a range of employees!";
    }
    catch (exception ex)
    {
        message = ex.what();
    }

    if (isRead)
    {
        int iLine = 1;
        string line = "";

        while (!f.eof())
        {
            getline(f, line);
            if (line == "") break;

            Employee* X = NULL;
            size_t index = line.find(':');
            EmployeeFactory::EmployeeType type;
            string typeEmployee = line.substr(0, index);
            _fullname = line.substr(index + 2);
            type = enum_conversion(check, (void*)&typeEmployee);

            if (!regex_match(_fullname, regex("^([a-zA-z ])+")))
            {
                message = "Error format on FullName on line " + to_string(iLine); isRead = false;
                break;
            }

            iLine++;
            getline(f, line);
            ltrim(line);

            index = line.find('=');
            line = line.substr(index);

            if (regex_match(line.substr(1, line.find(';') - 2), regex("^[\\d]+")))
            {
                _payment[0] = stoi(line.substr(1, line.find(';') - 2));
            }
            else
            {
                message = "Error format on \" % Payment % \" on line " + to_string(iLine); isRead = false;
                break;
            }

            line = line.substr(index + 1);
            line = line.substr(line.find('='));

            if (type == EmployeeFactory::EmployeeType::Manager)
            {
                if (regex_match(line.substr(1, line.find(';') - 1), regex("^[\\d]+")))
                {
                    _total = stoi(line.substr(1, line.find(';') - 1));
                    line = line.substr(1);
                    line = line.substr(line.find('='));

                    if (regex_match(line.substr(1, line.find('$') - 1), regex("^[\\d]+")))
                    {
                        _payment[1] = stoi(line.substr(1, line.find('$') - 1));
                    }
                    else
                    {
                        message = "Error format on \" % Payment % \" on line " + to_string(iLine); isRead = false;
                        break;
                    }
                }
                else
                {
                    message = "Error format on \" % Total % \" on line " + to_string(iLine); isRead = false;
                    break;
                }

            }
            else
            {
                if (regex_match(line.substr(1), regex("^[\\d]+")))
                {
                    _total = stoi(line.substr(1));
                }
                else
                {
                    message = "Error format on \" % Total % \" on line " + to_string(iLine); isRead = false;
                    break;
                }
            }

            iLine++;

            X = EmployeeFactory::createEmployee(type, _fullname, _payment, _total);
            employees.push_back(X);
        }
    }

    f.close();

    return make_tuple(isRead, message, employees);
}

void EmployeeFileConvert::writeRakingFile(const string& file_path, const Omega& omega)
{
    ofstream f(file_path);
    if (f.fail()) return;
    f << "EMPLOYEE TYPE,FULL NAME,FINAL PAYMENT, RANKED" << endl;
    int iRanked = 0;
    for (auto& x : omega.getEmployee())
    {
        f << (x->name() + "," + x->getFullname() + "," + to_string(x->totalPayment()) + "$,#" + to_string(++iRanked)) << endl;
    }
    
    f.close();
}
