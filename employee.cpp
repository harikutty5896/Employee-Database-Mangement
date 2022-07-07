#include "pch.h"
#include<iostream>
#include"Employee.h"
using namespace std;
///Setter Methods Definitions
void employee::set_emp_id(int id)
{
    emp_id = id;
}
void employee::set_emp_name(string name)
{
    emp_name = name;
}
void employee::set_emp_age(int age)
{
    emp_age = age;
}
void employee::set_emp_dept(string dept)
{
    emp_dept = dept;
}
void employee::set_emp_salary(double salary)
{
    emp_salary = salary;
}

///Getter Methods Definitions
int employee::get_emp_id()
{
    return emp_id;
}
string employee::get_emp_name()
{
    return emp_name;
}
int employee::get_emp_age()
{
    return emp_age;
}
string employee::get_emp_dept()
{
    return emp_dept;
}
double employee::get_emp_salary()
{
    return emp_salary;
}