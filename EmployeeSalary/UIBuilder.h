#pragma once
#ifndef _H_UI_BUILDER_H_
#define _H_UI_BUILDER_H_

#include "DailyUIBuilder.h"
#include "HourlyUIBuilder.h"
#include "ProductUIBuilder.h"
#include "ManagerUIBuilder.h"

//a class represents a general builder
//to generate an ui builder 
//for any kinds of employees
//designed on the basic of 
//singleton and prototype pattern
class UIBuilder
{
public:
    static UIBuilder* getBuilder()
    {
        if (!builder) builder = new UIBuilder();
        return builder;
    }

    string Builder(string name, void* employee_type)
    {
        return ui[name]->inforUIBuider(employee_type);
    }
private:
    map<string, EmployeeUIBuilder*> ui;
    inline static UIBuilder* builder = NULL;
    UIBuilder()
    {
        ui["Daily"] = new DailyUIBuilder();
        ui["Hourly"] = new HourlyUIBuilder();
        ui["Product"] = new ProductUIBuilder();
        ui["Manager"] = new ManagerUIBuilder();
    }
};

#endif // !_H_UI_BUILDER_H_
