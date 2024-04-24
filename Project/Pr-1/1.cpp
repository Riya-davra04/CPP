#include<iostream>
#include "dist.cpp"

using namespace std;

int main()
{

    Distances d1;
    Distances d2;
    Distances total;

    cout << "Enter 1st Distances : " << endl;
    d1.setDistances();

    cout << "Enter 2nd Distances : " << endl;
    d2.setDistances();

   //"Addition : " 

    total.addition(d1,d2);

    cout << endl <<"OUTPUT : " <<endl;

    total.getDistances();
    
    return 0;
}