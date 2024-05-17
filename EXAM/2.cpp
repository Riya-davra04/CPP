#include <iostream>

using namespace std;

class Employee
{
    string name;
    int salary;
    string designation ;

    public:

    void setEmp()
    {
        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Salary : ";
        cin >> salary;

        cout << "Enter Designation : ";
        cin >> designation;
    }

    void getEmp()
    {
        cout << endl<< endl<<"-----:OUTPUT:-----"<< endl;
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Designation : " << designation << endl;
    }
};

int main()
{

    Employee e;

    e.setEmp();
    e.getEmp();
    return 0;
}