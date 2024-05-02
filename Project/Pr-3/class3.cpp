#include <iostream>
using namespace std;
class A
{
protected:
    int id;
    string name;
    string role;
    float salary;
    int experience;
    string comp_name;
    string address;
    string email;
    long contact;

public:
    void setA()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Role: ";
        cin >> role;
    }
};
class B : public A
{
public:
    void setB()
    {
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Experience: ";
        cin >> experience;
    }
};

class C : public B
{
public:
    void setC()
    {
        cout << "Enter Company Name: ";
        cin >> comp_name;
        cout << "Enter Address : ";
        cin >> address;
    }
    void getC()
    {
        cout << "Name: " << name << endl;
        cout << "Role: "<< role <<endl;
        cout << "Salary: " << salary << endl;
    }
};
class D : public C
{
public:
    void setD()
    {
        cout << "Enter Email : ";
        cin >> email;
        cout << "Enter Contact:";
        cin >> contact;
    }
    void getD()
    {
        cout << endl
             << endl
             << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Role : " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience : " << experience << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Address : " << address << endl;
        cout << "Email : " << email << endl;
        cout << "Contact : " << contact << endl;
    }
};