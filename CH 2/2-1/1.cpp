#include<iostream>
#include "emp.cpp"

using namespace std;

int main()
{

    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;
    Employee e5;

    cout <<endl <<endl << "SetEmpData :" <<endl;

    cout << endl << "---- Enter 1st Employee Data : ----" << endl <<endl;
    e1.setEmployeeData();

    cout << endl << "---- Enter 2nd Employee Data : ----" << endl <<endl;
    e2.setEmployeeData();

    cout << endl << "---- Enter 3rd Employee Data : ----" << endl <<endl;
    e3.setEmployeeData();

    cout << endl << "---- Enter 4th Employee Data : ----" << endl <<endl;
    e4.setEmployeeData();

    cout << endl << "---- Enter 5th Employee Data : ----" << endl <<endl;
    e5.setEmployeeData();

    cout <<endl <<endl << "GetEmpData : "<<endl;

    cout << endl << "---- 1st Employee Data : ----" << endl <<endl;
    e1.getEmployeeData();

    cout << endl << "---- 2nd Employee Data : ----" << endl <<endl;
    e2.getEmployeeData();

    cout << endl << "---- 3rd Employee Data : ----" << endl <<endl;
    e3.getEmployeeData();

    cout << endl << "---- 4th Employee Data : ----" << endl <<endl;
    e4.getEmployeeData();

    cout << endl << "---- 5th Employee Data : ----" << endl <<endl;
    e5.getEmployeeData();

    return 0;
}