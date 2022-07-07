#pragma once
#include<iostream>
#include<string>
#include <map>
#include<list>
#include <algorithm>
#include<iterator>
using namespace System;
using namespace std;

class employee {
private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_dept;
    double emp_salary;

public:
    ///Default Constructor
    employee()
        :emp_id(0), emp_name(""), emp_age(0), emp_dept(""), emp_salary(0)
    {

    }
    // Constructor
    employee(int eid, string ename, int eage, string edept, double esalary)
        :emp_id(eid), emp_name(ename), emp_age(eage), emp_dept(edept), emp_salary(esalary)
    {
    }

    ///Copy Constructor
    employee(const employee& cemp)
    {
        emp_id = cemp.emp_id;
        emp_name = cemp.emp_name;
        emp_age = cemp.emp_age;
        emp_dept = cemp.emp_dept;
        emp_salary = cemp.emp_salary;
    }

    ~employee()
    {
    }

    ///Setter Methods Declaration for Employee class
    void set_emp_id(int id);
    void set_emp_name(string name);
    void set_emp_age(int age);
    void set_emp_dept(string dept);
    void set_emp_salary(double salary);

    ///Getter Methods Declaration for Employee class
    int get_emp_id();
    string get_emp_name();
    int get_emp_age();
    string get_emp_dept();
    double get_emp_salary();

};