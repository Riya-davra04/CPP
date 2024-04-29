#include<iostream>

using namespace std;

int Input()
{
    int n;

    cout<< "Enter DiamondCompany : ";
    cin >> n ;

    return n;
}

class DiamondCompany
{
private :
    int c_id;
    static int id;
    string c_name;
    int c_staff_quantity;
    double c_revenue;
    int c_import_raw_diamonds;
    int c_export_diamonds;
    string c_ceo;

public: 

    DiamondCompany()
    {
        
        this->setCompany();
    }

    DiamondCompany(int c_id , string c_name , int c_staff_quantity , double c_revenue , int c_import_raw_diamonds , int c_export_diamonds , string c_ceo)
    {
        this->c_name=c_name;
        this->c_staff_quantity=c_staff_quantity;
        this->c_revenue=c_revenue;
        this->c_import_raw_diamonds=c_import_raw_diamonds;
        this->c_export_diamonds=c_export_diamonds;
        this->c_ceo=c_ceo;
    }

    void setCompany()
    {
        c_id=id++;

        cout << "Name : ";
        cin >> c_name; 

        cout << "Staff Quantity : ";
        cin >> c_staff_quantity;

        cout << "Revenue : " ;
        cin >> c_revenue;

        cout << "Import Raw Diamonds : ";
        cin >> c_import_raw_diamonds;

        cout << "Export Diamonds : " ;
        cin >> c_export_diamonds;

        cout << "CEO : " ;
        cin >> c_ceo;
    }

    ~DiamondCompany()
    {
        this->getCompany();
        cout << endl << "DiamondCompany " << id << " deleted.." <<endl;
    }

    void getCompany()
    {
        cout << "ID : " << c_id <<endl;
        cout << "Name : " <<c_name <<endl;
        cout << "Staff Quantity : " << c_staff_quantity << endl;
        cout << "Revenue : " << c_revenue <<endl;
        cout << "Import Raw Diamonds : " << c_import_raw_diamonds <<endl;
        cout << "Export Diamonds : " << c_export_diamonds << endl;
        cout << "CEO : " << c_ceo <<endl;
    }
};

int DiamondCompany::id=101;