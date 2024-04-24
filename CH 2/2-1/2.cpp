#include<iostream>
#include "car.cpp"

using namespace std;

int main()
{
    Car c1;
    Car c2;
    Car c3;
    Car c4;

    cout <<endl <<endl << "SetCarData : " <<endl; 
    cout << endl << "---- Enter 1st Car Data : ----" << endl <<endl;
    c1.setCarData();

    cout << endl << "---- Enter 2nd Car Data : ----" << endl <<endl;
    c2.setCarData();

    cout << endl << "---- Enter 3rd Car Data : ----" << endl <<endl;
    c3.setCarData();

    cout << endl << "---- Enter 4th Car Data : ----" << endl <<endl ;
    c4.setCarData();

    cout <<endl <<endl << "GetCarData : "<<endl;

    cout << endl << "---- 1st Car Data : ----" << endl <<endl;
    c1.getCarData();

    cout << endl << "---- 2nd Car Data : ----" << endl <<endl;
    c2.getCarData();

    cout << endl << "---- 3rd Car Data : ----" << endl <<endl;
    c3.getCarData();

    cout << endl << "---- 4th Car Data : ----" << endl <<endl;
    c4.getCarData();

    return 0;
}