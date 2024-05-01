#include<iostream>

using namespace std;

class P
{
    protected:
        float c;
        float feh;
        float kel;

};

class Q : public P
{
    public :

    void ToFehrenheit()
    {
        cout << "Enter Celsius : ";
        cin >> c;
        feh = c * 9/5 + 32;
    }
}; 

class R : public Q
{
    public :

    void ToKelvin()
    {
        kel = (feh - 32) * 5/9 + 273.15;

        cout << endl << "-- : Convert Celsius Fehrenheit : --"<<endl;
        cout << "Fehrenheit : " << feh << endl;

        cout << endl << "-- : Fehrenheit Celsius Kelvin : --"<<endl;
        cout << "Kelvin : " << kel <<endl;
    }
};