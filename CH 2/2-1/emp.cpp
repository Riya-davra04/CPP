#include<iostream>

using namespace std;

class Employee
{
private :
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    void setEmployeeData()
    {
        
        cout << "Enter Employee ID : ";
        cin >> emp_id;

        cout << "Enter Employee Name : ";
        cin >> emp_name;

        cout << "Enter Employee Age : ";
        cin >> emp_age;

        cout << "Enter Employee Role : ";
        cin >> emp_role;

        cout << "Enter Employee Salary : ";
        cin >> emp_salary;

        cout << "Enter Employee City : ";
        cin >> emp_city;

        cout << "Enter Employee Experience : ";
        cin >> emp_experience;

        cout << "Enter Employee Company Name : ";
        cin >> emp_company_name;
    }

    void getEmployeeData()
    {

        cout << "ID : " << emp_id <<endl;
        cout << "Name : " << emp_name <<endl;
        cout << "Age : " << emp_age <<endl;
        cout << "Role : " << emp_role <<endl;
        cout << "Salary : " << emp_salary <<endl;
        cout << "City : " << emp_city <<endl;
        cout << "Experience : " << emp_experience <<endl;
        cout << "Company Name : " << emp_company_name <<endl;
    }

};