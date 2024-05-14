#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Age : ";
    cin >> age;

    try{
        if(age<18)
        {
            throw 1;
        }
        else 
        {
            cout << "Able to vote" <<endl;
        }
    }
    catch(int n)
    {
        cout << "Cannot be able to vote if his/her age is less than 18 . Vote after " << 18 - age << " Year "<< endl;
    }

    catch (...)
    {
        cout << "Genral Exception..." << endl;
    }
    return 0;
}