#include"train.cpp"

int main()
{

    int n= TrainInput();

    Train t[n];

     int ch;
     do{
        cout << "0. Exit " <<endl;
        cout << "1. Train Input " <<endl;
        cout << "2. Display All Train Records" <<endl;
        cout << "3. By Searching Train Number" <<endl;
       
        cout << "Enter your choice : ";
        cin >>ch;

    switch (ch)
    {
    case 0: 
         cout << "Exit..." <<endl;
         break;
    case 1:
        for(int i=0 ; i<n;i++)
        {
            t[i].InputRecord();
        }
        break;
    case 2:
        for(int i=0;i<n;i++)
        {
            t[i].displayRecord();
        } 
        break;

    case 3:
         for(int i=0;i<n;i++)
        {
            t[i].BySearch();
        } 
        break;


    default:
        cout << "Invaild Choice....." <<endl;
        break;
    }
    }while (ch!=0);

    return 0 ;
}