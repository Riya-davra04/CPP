#include <iostream>

using namespace std;

int main()
{
    char p[40];

    cout << "Enter a string: ";
    cin >> p;

    try
    {
        for (int i = 0; p[i] != '\0'; i++)
        {
            if ((p[i] >= 'a' && p[i] <= 'z'))
            {
                throw '1';
            }
        }

        cout << "Password is correct." << endl;
    }
    catch (char c)
    {
        cout << "Password is wrong." << endl;
    }

    return 0;
}
