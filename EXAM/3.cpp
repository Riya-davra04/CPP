#include<iostream>

using namespace std;

class Shape
{
    protected:
    string color;
    double area;
    int r,l,w;
};

class Circle : public Shape
{
    public :
    void setColor()
    {
        cout << endl<<"Enter Circle Color : ";
        cin >> color;
    }

    void getColor()
    {
        cout <<  endl << endl << "Circle Color : " << color <<endl ;
    }

    void calc()
    {
        cout << "Enter R : ";
        cin >> r;
        area = 3.14 * r *r;

        cout << "Circle : " << area << endl <<endl;
    }
};

class Rectangle : public Shape
{
    public :
    void setColor()
    {
        cout << "Enter Rectangle Color : ";
        cin >> color;
    }

    void getColor()
    {
        cout << "Rectangle Color : " <<color << endl << endl ;
    }

    void calc()
    {
        cout <<"Enter Length : ";
        cin >> l;

        cout << "Enter Width : ";
        cin >> w;

        area = l*w;

         cout << endl<<"Rectangle : " << area << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    c.setColor();
    r.setColor();
    
    c.getColor();
    r.getColor();
    c.calc();
    r.calc();
}