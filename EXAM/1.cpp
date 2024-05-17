#include <iostream>

using namespace std;

class Rectangle
{
    int l;
    int w;
    double area ;
    public:

    void set()
    {
        cout <<"Enter Length : ";
        cin >> l;

        cout << "Enter Width : ";
        cin >> w;
    }

    void calc()
    {
        
        area = l*w;
    }

    void get()
    {
        cout << endl<< endl<<"-----:OUTPUT:-----"<< endl;
        cout << "Rectangle : " << area << endl;
    }

};



int main()
{
    Rectangle r;

    r.set();
    r.calc();
    r.get();
    
    return 0;
}
