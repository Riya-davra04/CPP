#include <iostream>
using namespace std;
class Shape
{
protected:
    int l;
    int b;
    int r;
    int h;
    float t;
};
class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Enter l: ";
        cin >> l;
        cout << "Enter b : ";
        cin >> b;
        r = l * b;
        cout << "Rectangle : " << r << endl;
    }
};
class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Enter h: ";
        cin >> h;
        cout << "Enter b: ";
        cin >> b;
        t = (1 * b * h) /2;

        cout << "Triangle : " << t << endl;
    }
};
