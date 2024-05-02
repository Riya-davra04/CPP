#include <iostream>

using namespace std;
class Number
{
protected:
    int square;
    int cube;
    int num;
};
class Square : public Number
{
public:
    void getsquare()
    {
        cout << "Enter a number: ";
        cin >> num;
        square = num * num;
        cout << "Square: " << square << endl;
    }
};
class Cube : public Number
{
public:
    void getcube()
    {
        cout << "Enter a number: ";
        cin >> num;
        cube = num * num * num;
        cout << "Cube: " << cube << endl;
    }
};