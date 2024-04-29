#include "cust.cpp"

using namespace std;

int main()
{

    Customer c1 ,c2 , c3, c4, c5;

    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long m_number;
    int s_validity;
    string t_brand_name;

    cout << " ---- Enter 1st Customer Details : ---- " << endl ; 
    c1.CustomerDetails();
   

    cout << " ---- Enter 2nd Customer Details : ---- " << endl ; 
    c2.CustomerDetails();
   
    cout << " ---- Enter 3rd Customer Details : ---- " << endl ; 
    c3.CustomerDetails();
    

    cout << " ---- Enter 4th Customer Details : ---- " << endl ; 
    c4.CustomerDetails();
    
    cout << " ---- Enter 5th Customer Details : ---- " << endl ; 
    c5.CustomerDetails();
    
    cout << "---1st Customer : --- " << endl;
    c1.displayCustomerDetails();

    cout << "---2nd Customer : --- " << endl;
    c2.displayCustomerDetails();

    cout << "---3rd Customer : --- " << endl;
    c3.displayCustomerDetails();

    cout << "---4th Customer : --- " << endl;
    c4.displayCustomerDetails();

    cout << "---5th Customer : --- " << endl;
    c5.displayCustomerDetails();

    return 0;
}