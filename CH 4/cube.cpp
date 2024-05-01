#include <iostream>

using namespace std;

class X
{
    protected : 
        int a;
        int b;
        int c;
};

class Y : public X
{
    public:
        void setData()
        {
            cout << "Enter A : ";
            cin >> a;

            cout << "Enter B : ";
            cin >> b;

            cout << "Enter C : ";
            cin >> c;
        }

        void getData()
        {
            cout << "A : " << a <<endl;
            cout << "B : " << b <<endl;
            cout << "C : " << c <<endl;
        }

        void cube()
        {
            cout << "---- Cube : ----" <<endl;
            cout << "A : " << a*a*a <<endl;
            cout << "B : " << b*b*b <<endl;
            cout << "C : " << c*c*c <<endl;
        }

        void Sum()
        {
            cout << "---- Sum : ----" <<endl;
            cout << "Sum : " << a*a*a + b*b*b + c*c*c <<endl;
        }
};