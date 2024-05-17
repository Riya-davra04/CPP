#include <iostream>

using namespace std;

class Calculator
{

    int a, b;

public:
    void set()
    {
        cout << "Enter a : ";
        cin >> a;

        cout << "Enter b : ";
        cin >> b;
    }

    void get()

    {
        try
        {
            if (b != 0)
            {
                cout << "DIV : " << a / b << endl;
            }
            else
            {
                throw 1;
            }
        }
        catch (int n)
        {
            cout << "Cannot divied by ZERO!";
        }
    }
};

int main()
{
    Calculator c;
    c.set();
    c.get();

    return 0;
}