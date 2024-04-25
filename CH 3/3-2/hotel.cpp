#include<iostream>

using namespace std;

int Input()
    {
        int n;
        cout << "Enter Hotel : ";
        cin >> n;

        return n;
    }


class Hotel
{
private:
    int hotel_id;
    static int id;
    static string hotel_name;
    string hotel_type ;
    string hotel_rating ;
    string hotel_location ;
    int hotel_establish_year;
    int hotel_staff_quantity;
    static int hotel_room_quantity;
public :
    
    void setHotelDetails()
    {

        hotel_id = id++;

        cout << "Enter Type : " ;
        cin >> hotel_type;

        cout << "Enter Rating : ";
        cin >> hotel_rating;

        cout << "Enter Location : ";
        cin >> hotel_location;

        cout << "Enter Year : " ;
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity : ";
        cin >> hotel_staff_quantity;

    }

    void getHotelDetails()
    {
        cout << "ID : " << hotel_id <<endl;
        cout << "Name : " << hotel_name <<endl;
        cout << "Type : " << hotel_type <<endl;
        cout << "Rating : " << hotel_rating <<endl;
        cout << "Location : " << hotel_location <<endl;
        cout << "Year : " << hotel_establish_year <<endl;
        cout << "Staff Quantity : " << hotel_staff_quantity <<endl;
        cout << "Room Quantity : " << hotel_room_quantity <<endl;
    }

    
};

int Hotel::id=101;
string Hotel::hotel_name="Glory";
int Hotel::hotel_room_quantity=40;