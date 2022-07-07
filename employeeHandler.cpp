#include "pch.h"
#include<iostream>
#include"employeeHandler.h"
using namespace std;

//Adding Data and 
bool employeeHandler::addData(int id, string name, int age, string dept, double salary)
{
    m_emp.insert(pair<int, employee>(id, employee(id, name, age, dept, salary)));
    return true;  
}

//List all the data 
int employeeHandler::ListData()
{
    map<int, employee> ::iterator it;
    int itc = m_emp.size();
    if (itc == 0)
    {
        return 0;
    }
    else
    {
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            cout << "Employee ID         : " << it->second.get_emp_id() << endl;
            cout << "Employee Name       : " << it->second.get_emp_name() << endl;
            cout << "Employee Age        : " << it->second.get_emp_age() << endl;
            cout << "Employee Department : " << it->second.get_emp_dept() << endl;
            cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
            cout << "________________________________________________" << endl << endl;
        }
        return 1;
    }
}

//Delete data method
bool employeeHandler::deleteData(int id)
{
    auto it = m_emp.find(id);
    if (it == m_emp.end())
    {
        return false;
    }
    else
    {
        m_emp.erase(id);
        return true;
    }
}

//Search all the values i.e ID,Name,Age,Department,Salary
bool employeeHandler::searchData(string value,Search inpv)
{
    Search s = inpv;
    map<int, employee> ::iterator it;
    switch (s)
    {
    case e_id:
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            if (stoi(value) == it->second.get_emp_id())
            {
                cout << "Employee ID         : " << it->second.get_emp_id() << endl;
                cout << "Employee Name       : " << it->second.get_emp_name() << endl;
                cout << "Employee Age        : " << it->second.get_emp_age() << endl;
                cout << "Employee Department : " << it->second.get_emp_dept() << endl;
                cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
                cout << "________________________________________________" << endl << endl;
            }
        }
        return true;
        break;
    case e_name:
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            if ((value) == it->second.get_emp_name())
            {
                cout << "Employee ID         : " << it->second.get_emp_id() << endl;
                cout << "Employee Name       : " << it->second.get_emp_name() << endl;
                cout << "Employee Age        : " << it->second.get_emp_age() << endl;
                cout << "Employee Department : " << it->second.get_emp_dept() << endl;
                cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
                cout << "________________________________________________" << endl << endl;
            }
        }
        return true;
        break;
    case e_age:
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            if (stoi(value) == it->second.get_emp_age())
            {
                cout << "Employee ID         : " << it->second.get_emp_id() << endl;
                cout << "Employee Name       : " << it->second.get_emp_name() << endl;
                cout << "Employee Age        : " << it->second.get_emp_age() << endl;
                cout << "Employee Department : " << it->second.get_emp_dept() << endl;
                cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
                cout << "________________________________________________" << endl << endl;
            }
        }
        return true;
        break;
    case e_dept:
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            if ((value) == it->second.get_emp_dept())
            {
                cout << "Employee ID         : " << it->second.get_emp_id() << endl;
                cout << "Employee Name       : " << it->second.get_emp_name() << endl;
                cout << "Employee Age        : " << it->second.get_emp_age() << endl;
                cout << "Employee Department : " << it->second.get_emp_dept() << endl;
                cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
                cout << "________________________________________________" << endl << endl;
            }
        }
        return true;
        break;
    case e_salary:
        for (it = m_emp.begin(); it != m_emp.end(); it++)
        {
            if (stoi(value) == it->second.get_emp_salary())
            {
                cout << "Employee ID         : " << it->second.get_emp_id() << endl;
                cout << "Employee Name       : " << it->second.get_emp_name() << endl;
                cout << "Employee Age        : " << it->second.get_emp_age() << endl;
                cout << "Employee Department : " << it->second.get_emp_dept() << endl;
                cout << "Employee Salary     : " << it->second.get_emp_salary() << endl;
                cout << "________________________________________________" << endl << endl;
            }
        }
        return true;
        break;
    }
}
