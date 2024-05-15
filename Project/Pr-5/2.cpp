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
            throw 0;
        }
        else 
        {
            cout << "Eligible to vote" <<endl;
        }
    }
    catch(int n)
    {
        cout << "Cannot eligible to vote" << endl;
    }
    return 0;
}