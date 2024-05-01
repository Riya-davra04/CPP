#include<iostream>

using namespace std;

class RBI
{
    protected:
    float rate = 6;

    public:
    void getROI()
    {
        cout << "RBI Interest : " <<rate <<endl;
    }
};

class SBI:public RBI
{
    public:
    void getROI()
    {
        cout << "SBI Interest : " <<rate + 1 <<endl;
    }
};

class BOB:public RBI
{
    public:
    void getROI()
    {
        cout << "BOB Interest : " <<rate + 1.25 <<endl;
    }
};

class ICICI:public RBI
{
    public:
    void getROI()
    {
        cout << "ICICI Interest : " <<rate + 1.5 <<endl;
    }
};