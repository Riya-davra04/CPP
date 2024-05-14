#include <iostream>
using namespace std;

class A {
protected:
    int a, b, c, d, e;

public:
    void set() {
        cout << "Enter a: ";
        cin >> a;

        cout << "Enter b: ";
        cin >> b;

        cout << "Enter c: ";
        cin >> c;

        cout << "Enter d: ";
        cin >> d;

        cout << "Enter e: ";
        cin >> e;
    }

    int getA() 
    { 
        return a; 
    }
    int getB() 
    {
         return b; 
    }
    int getC() 
    { 
        return c; 
    }
    int getD() 
    {
         return d; 
    }
    int getE() 
    { 
        return e;
    }

    int calc(int x, int y) {
        int result;
        result = x / y;
        cout << "Division: " << result << endl;
        return result;
    }

    int calc(int x, int y, int z) {
        int res;
        res = x - y - z;
        cout << "Subtraction: " << res << endl;
        return res;
    }

    int calc(int x, int y, int z, int w) {
        int r;
        r = x * y * z * w;
        cout << "Multiplication: " << r << endl;
        return r;
    }

    int calc(int x, int y, int z, int w, int v) {
        int re;
        re = x + y + z + w + v ;
        cout << "Addition: " << re << endl;
         return re;
    }
};

