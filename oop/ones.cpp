// Write a C++ program to count the number of 1s in the binary representation of a
// hexadecimal number using bitwise operators and a while loop.

#include <iostream>
using namespace std;
int main ()
{
    unsigned int x , i , count = 0;

    cout <<"Enter a number :"<< endl;
    cin >> hex >>x;

    while (i <= 32)
    {
        if ( x & 1) 
        {
            count++;
        }
        x = x >> 1;
    }
    cout << "Number of ones :" << count << endl ;
}