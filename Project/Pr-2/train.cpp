#include<iostream>

using namespace std;

int TrainInput()
{
    int n;

    cout<< "Enter Train : ";
    cin >> n ;

    return n;
}


class Train
{
private : 

    int t_number;
    int number;
    string t_name;
    string source;
    string destination;
    int t_time;

public:

    void InputRecord()
    {
        cout << "Enter Train Number : ";
        cin >> t_number;

        cout << "Enter Train Name : ";
        cin >> t_name;

        cout << "Enter Source : ";
        cin >> source;

        cout << "Enter Destination : ";
        cin >> destination;

        cout << "Enter Train Time :" ;
        cin >> t_time;

    }
    void displayRecord()
    {
        cout << "Train Number : " << t_number <<endl;
        cout << "Train Name : " << t_name <<endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Train Time : " <<t_time << endl;
    }

    void BySearch()
    {
        cout << "Enter number : ";
        cin >> number;

        if(number==t_number)
        {
            displayRecord();
        }
        else
        {
            cout << "Invaild Train Number..."<<endl;
        }
    }
};