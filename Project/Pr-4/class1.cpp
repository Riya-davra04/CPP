#include<iostream>
#include<string>
using namespace std;

class message
{
    protected:
    string m;


    public:
    void print()
    {
        m="hello ";
        cout<<m<<endl;
    }
    void print(string m1)
    {
        cout<<m<<" "<<m1<<endl;
    }
};
