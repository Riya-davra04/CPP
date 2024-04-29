#include<iostream>

using namespace std;

int Input()
{
    int n;

    cout<< "Enter cafe : ";
    cin >> n ;

    return n;
}

class Cafe 
{
private :
    int c_id;
    static int id;
    string c_name;
    string c_type;
    int c_rating;
    string c_location;
    int c_year;
    int c_staff_quantity;

public:
    Cafe()
    {
        
        c_id = id++;

        cout << "Enter Cafe " << c_id << " Detail" <<endl;
 
        cout << "Enter Cafe Name : ";
        cin >> c_name;

        cout << "Enter Cafe Type : ";
        cin >> c_type;

        cout << "Enter Cafe Rating : ";
        cin >> c_rating;

        cout << "Enter Cafe Location : ";
        cin >> c_location;

        cout << "Enter Cafe Established Year : ";
        cin >> c_year;

        cout << "Enter Staff Quantity : ";
        cin >> c_staff_quantity;
    }

    ~Cafe()
    {
        this->getCafe();
        cout << endl << "Cafe " << c_id << " deleted.." <<endl;
    }

    void getCafe()
    {
        cout << endl << "ID : " <<c_id <<endl;
        cout << "Name : " <<c_name <<endl;
        cout << "Type : " <<c_type <<endl;
        cout << "Rating : " <<c_rating <<endl;
        cout << "Location : " << c_location <<endl;
        cout << "Year : " <<c_year <<endl;
        cout << "Quantity : " <<c_staff_quantity <<endl;
    }
};

int Cafe::id=101;