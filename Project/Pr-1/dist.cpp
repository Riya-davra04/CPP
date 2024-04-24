#include<iostream>

using namespace std;

class Distances
{

private:
    int feet;
    int inch;

public :
    void setDistances()
    {
        cout << "Enter Feet : ";
        cin >> feet;

        cout << "Enter Inch : ";
        cin >> inch;
    }

    void addition(Distances d1 , Distances d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;

        feet += (inch/12);
        inch = inch % 12;
    }

    void getDistances()
    {
        cout << "Feet : " << feet << "\t"
             << "Inch : " << inch <<endl;
    }
};