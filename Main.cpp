#include "pch.h"
#include "employeeHandler.h"
using namespace System;
using namespace std;
int main()
{
    employeeHandler emp_handler;
    //Initialization 
    emp_handler.addData(1, "Ravikumar", 32, "Developer", 50000);
    emp_handler.addData(2, "Hariharan", 21, "Developer", 50000); 
    emp_handler.addData(3, "Kishore", 22, "Tester", 60000);
    emp_handler.addData(4, "Gunaseelan", 22, "Tester", 60000);
    emp_handler.addData(5, "Rathnakumar", 23, "Developer", 50000);
    emp_handler.addData(6, "Arunkumar", 32, "Developer", 50000);
    emp_handler.addData(7, "Naveen", 25, "Webdeveloper", 50000);
    emp_handler.addData(8, "Ravishastri", 32, "Tester", 60000);
    emp_handler.addData(9, "Dhoni", 45, "Developer", 80000);
    emp_handler.addData(10, "Sachin", 48, "Developer", 80000);
    int id;
    string name;
    int age;
    string dept;
    string value;
    string svalue;
    double salary;
    char yn;
    do
    {
        int ch;
        cout << "\n1.Add Employee Data\n2.List all Employee Data\n3.Delete Employee Data\n4.Search Employee" << endl;
        cout << "Enter your Choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("CLS");
            cout << "Enter your ID:" << endl;
            for (;;)
            {
                if (cin >> id)
                {
                    break;
                }
                else
                {
                    cout << "Enter Valid ID" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            cout << "Enter your Name:" << endl;
            cin >> name;

            cout << "Enter your Age:" << endl;
            for (;;)
            {
                if (cin >> age)
                {
                    break;
                }
                else
                {
                    cout << "Enter Valid Age" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            cout << "Enter your Department:" << endl;
            cin >> dept;

            cout << "Enter your Salary:" << endl;
            for (;;)
            {
                if (cin >> salary)
                {
                    break;
                }
                else
                {
                    cout << "Enter Valid Salary" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            if (emp_handler.addData(id, name, age, dept, salary) == true)
            {
                cout << "Employee Added Sucessfully" << endl;
            }
            else
            {
                cout << "Employee Data Not added sucessfully" << endl;
            }
            break;
        case 2:
            if (emp_handler.ListData() == 1)
            {
                cout << "Listed Sucessfully" << endl;
            }
            else
            {
                cout << "No Data / Error while Listing Data" << endl;
            }
            break;
        case 3:
            int id_num;
            cout << "Enter ID to Delete Employee Data :" << endl;
            cin >> id_num;
            if (emp_handler.deleteData(id_num) == true)
            {
                cout << "Deleted Sucessfully" << endl;
            }
            else
            {
                cout << "No Data Found" << endl;
            }
            break;
        case 4:
            int opt;
            cout << "Searching Criteria \n1.ID \n2.Name \n3.Age \n4.Department \n5.Salary \nEnter searching option:";
            cin >> opt;
            if (opt == 1)
            {
                cout << "Enter ID to Search " << endl;
                cin >> svalue;
                if (emp_handler.searchData(svalue,e_id) == true)
                {
                    cout << "Data Fetched Sucessfully" << endl;
                }
                else
                {
                    cout << "Data Not Found" << endl;
                }
            }
            else if (opt == 2)
            {
                cout << "Enter Name to Search " << endl;
                cin >> svalue;
                if (emp_handler.searchData(svalue, e_name) == true)
                {
                    cout << "Data Fetched Sucessfully" << endl;
                }
                else
                {
                    cout << "Data Not Found" << endl;
                }
            }
            else if (opt == 3)
            {
                cout << "Enter Age to Search " << endl;
                cin >> svalue;
                if (emp_handler.searchData(svalue, e_age) == true)
                {
                    cout << "Data Fetched Sucessfully" << endl;
                }
                else
                {
                    cout << "Data Not Found" << endl;
                }
            }
            else if (opt == 4)
            {
                cout << "Enter Department to Search " << endl;
                cin >> svalue;
                if (emp_handler.searchData(svalue, e_dept) == true)
                {
                    cout << "Data Fetched Sucessfully" << endl;
                }
                else
                {
                    cout << "Data Not Found" << endl;
                }
            }
            else if (opt == 5)
            {
                cout << "Enter Salary to Search " << endl;
                cin >> svalue;
                if (emp_handler.searchData(svalue, e_salary) == true)
                {
                    cout << "Data Fetched Sucessfully" << endl;
                }
                else
                {
                    cout << "Data Not Found" << endl;
                }
            }
            else
            {
                cout << "Invalid Search Input !!" << endl;
            }
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
        cout << "Do you want to Continue? Press y/n :";
        cin >> yn;
    } while (yn != 'n');
}

