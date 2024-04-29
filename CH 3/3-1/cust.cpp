#include<iostream>

using namespace std;

class Customer
{

private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long m_number;
    int s_validity;
    string t_brand_name;

public:

    void setCustomer(int cust_id , string cust_name , int cust_age , string cust_city , long m_number , int s_validity , string t_brand_name)
    {
        this->cust_id = cust_id;
        this->cust_name=cust_name;
        this->cust_age=cust_age;
        this->cust_city=cust_city;
        this->m_number=m_number;
        this->s_validity=s_validity;
        this->t_brand_name=t_brand_name;
    }

    int getCustomerID()
    {
        return cust_id;
    }

    string getCustomerName()
    {
        return cust_name;
    }

    int getCustomerAge()
    {
        return cust_age;
    }

    string getCustomerCity()
    {
        return cust_city;
    }

    long getCustomerNumber()
    {
        return m_number;
    }

    int getCustomerValidity()
    {
        return s_validity;
    }

    string getCustomerTelecomName()
    {
        return t_brand_name;
    }

    void CustomerDetails()
    {
        cout << "ID : ";
        cin >> cust_id;
        cout << "Name : ";
        cin >> cust_name;
        cout << "Age : ";
        cin >> cust_age;
        cout << "City : ";
        cin >> cust_city;
        cout << "Mobile Number : ";
        cin >> m_number;
        cout << "Simcard_vaildity : ";
        cin >> s_validity;
        cout << "Telecom_brand_name : ";
        cin >> t_brand_name;
    }

    void displayCustomerDetails()
    {
        cout << "Customer ID : " << getCustomerID() << endl;
        cout << "Customer Name : " << getCustomerName() << endl;
        cout << "Customer Age : " << getCustomerAge() << endl;
        cout << "Customer City : " << getCustomerCity() << endl;
        cout << "Customer Mobile Number : " << getCustomerNumber() << endl;
        cout << "Customer Simcard Validity : " << getCustomerValidity() << endl;
        cout << "Customer Telecom Brand Name : " << getCustomerTelecomName() << endl;
    }

};