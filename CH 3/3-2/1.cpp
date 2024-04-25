#include "hotel.cpp"

int main()
{
    
    int n = Input();

    Hotel h[n];

  //  Input();

    for(int i=0 ; i< n ; i++)
    {
        h[i].setHotelDetails();
    }
    
    for(int i=0 ; i< n ; i++)
    {
        h[i].getHotelDetails();
    }

    return 0;
}