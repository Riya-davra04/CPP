#include<iostream>

using namespace std;

class Employee
{
    int salary;
    public:
    
    void set()
    {
        cout << "Enter Emp salary : ";
        cin >> salary;
    }

    Employee operator+(Employee e2)
    {
        Employee result;

        result.salary = salary + e2.salary;

        return result;
    }
    
     void getSal() 
     {
        cout << endl<< endl<<"-----:OUTPUT:-----"<< endl;
       cout << endl << "Total Salary: " << salary <<endl;
    }
   
};

int main()
{
    Employee e1;
    Employee e2;

    e1.set();
    e2.set();

    Employee total =  e1 + e2;

   total.getSal();
   
    return 0;
}