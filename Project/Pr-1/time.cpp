#include<iostream>

using namespace std;

class Time
{

private : 
    int second;
    int hours;
    int min;
    int sec;
    
public:

    void setSecond()
    {
        cout << "Enter second : " ;
        cin >> second;
    }

    void getSecond()
    {
        hours = second / 3600;
        min = (second - 3600) / 60 ;
        sec= (second - 3600 - 60) % 60;

        cout << hours << ":" << min << ":" << sec <<endl;
    }
};