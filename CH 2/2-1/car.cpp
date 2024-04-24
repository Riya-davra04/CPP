#include<iostream>

using namespace std;

class Car
{
private :
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

public:
    void setCarData()
    {

        cout << "Enter Car ID : ";
        cin >> car_id;

        cout << "Enter Car Company Name : ";
        cin >> car_company_name;

        cout << "Enter Car Color : ";
        cin >> car_color;

        cout << "Enter Car Model : ";
        cin >> car_model;

        cout << "Enter Car Release Year : ";
        cin >> car_release_year;

    }

    void getCarData()
    {

        cout << "ID : " << car_id << endl;
        cout << "Company Name : " << car_company_name << endl;
        cout << "Color : " << car_color << endl;
        cout << "Model : " << car_model << endl;
        cout << "Release Year : " << car_release_year << endl;
    }
};