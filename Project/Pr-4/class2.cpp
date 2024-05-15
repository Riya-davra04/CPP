#include <iostream>
using namespace std;

class Distance {
	
private:
    int km;
    int meter;

public:
    
    void setKm() {
        cout<<"Enter Km : ";
        cin>>km;
    }

    void setMeter() {
        cout<<"Enter meter : ";
        cin>>meter;
    }

    Distance operator+(Distance input2) {
         Distance result;
         result.km = km + input2.km;
         result.meter = meter + input2.meter;

         if(result.meter>=1000)
        {
           result.km+=result.meter/1000;
           result.meter %= 1000; 
        }
         return result;
    }

  
    void getDis() {
       cout << "Km: " << km << " Meter: " << meter <<endl;
    }
};

