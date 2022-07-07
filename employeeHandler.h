#pragma once
#include<iostream>
#include<algorithm>
#include <ctype.h>
#include"employee.h"
using namespace std;
enum Search { e_id, e_name, e_age, e_dept, e_salary };

class employeeHandler
{
private:
    map<int, employee> m_emp;

public:
    /// Constructor
    employeeHandler()
    {
    }
    ///Destructor
    ~employeeHandler()
    {
    }

    //Member Functions
    bool addData(int id, string name, int age, string dept, double salary);
    int ListData();
    bool deleteData(int id);
    bool searchData(string value,Search inpv);
};
