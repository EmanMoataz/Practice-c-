// Write a C++ program to count the number of 0s in the 32-bit binary representation of a hexadecimal
// number using bitwise operators and a while loop

#include <iostream>
using namespace std;
int main ()
{
    unsigned int x , i ,  count = 0 ;

    cout << "Enter a number to compute 1's in it : " << endl ;
    cin >> hex >> x;

    i=0;
    while (i<=32)
    {
        if ((x & 1))
        {
            count ++;
        }
        x = x >> 1;
        i++;
    }
    cout << "Number of zeros : " << count << endl ;

}