#include <iostream>
using namespace std;

class Admin
{
    string c_name;
    int m_salary, e_salary;
    int total_staff;
    int total_annual_revenue;
    string can_terminate;

public:
    void setAdmin()
    {
        cout << "Enter The Name Of The Company : ";
        cin >> c_name;
        cout << "Enter the salary of the manager : ";
        cin >> m_salary;
        cout << "Enter the salary of the employee : ";
        cin >> e_salary;
    }
    void getAdmin()
    {
        cout << "The Name Of The Company : " << c_name << endl;
        cout << "The salary of the manager : " << m_salary << endl;
        cout << "The salary of the employee : " << e_salary << endl;
    };
};

    class Manager : public Admin
    {
    protected:
        int total_staff, total_annual_revenue;

    public:
        void setData()
        {
            cout << "Total staff of the company:  ";
            cin >> total_staff;
            cout << "Total annual revenue of the company : ";
            cin >> total_annual_revenue;
        }
        void GetData()
        {
            cout << "The quantity of the staff : " << total_staff << endl;
            cout << "The total annual revenue of the company : " << total_annual_revenue << endl;
        }
    };

    class Employee : public Manager
    {
    protected:
        string can_terminate;

    public:
        void setD()
        {
            cout << "Does compnay terminated or not : ";
            cin >> can_terminate;
        }
        void getD()
        {
            cout << "compnay terminated or not :- " << can_terminate << endl;
        }
    };