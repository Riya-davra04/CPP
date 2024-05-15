#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter A : ";
    cin >> a;

    cout << "Enter B : ";
    cin >> b;

    try{
        if(b==0)
        {
            throw 1;
        }
        else 
        {
            cout << "Answer : " << a/b <<endl;
        }
    }
    catch(double n)
    {
        cout << "Cannot be divided by zero ! " << endl;
    }
    catch (...)
    {
        cout << "Genral Exception..." << endl;
    }
    return 0;
}