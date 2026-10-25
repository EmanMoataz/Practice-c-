// Write a C++ program to display the uppercase English alphabet letters (A–Z)
// alongside their corresponding decimal ASCII values using a loop.

#include <iostream>
using namespace std;

int main () 
{
    char x = 'A';
    cout << " Letter\tinteger : " << endl ;

    for (int i = 0 ; i < 27 ; i++)

    {
        cout << x << "\t" << (int)x << endl ;
        x++;
    }
    return 0 ;
}
