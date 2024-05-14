#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:

    Number operator<(Number num)
    {
        if (value < num.value)
            return num;
       
    }
    void setValue()
    {
        int num1, num2;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        if(num1<num2)
        {
            cout << num2  << " is maximum " << endl;
        }
        else if (num2<num1)
        {
            cout << num1  << " is maximum " << endl;
        }
        else
        {
            cout << "Both number are same " << endl;
        }
    }

};

