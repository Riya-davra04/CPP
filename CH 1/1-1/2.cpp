#include<iostream>

using namespace std;

int main()
{

    int s,e,i;

    cout << "Enter array First year  : ";
    cin >> s;

    cout << "Enter array second year  : ";
    cin >> e;

    cout << "OUTPUT : ";

    for(i=s;i<=e;i++)
    {
        if(i%4==0)
        {
            cout << i << " , ";
        }
    }
    return 0;
}