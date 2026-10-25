#include <iostream>
using namespace std;
int main ()
{
    unsigned char x [4] = { 0xf3 , 0xc3 , 0xa , 0x8 };
    unsigned int z = 0x0 ;
    cout << "numbsers before packink :" << endl ;
    for (int i = 0 ; i < 4 ; i++ )
    {
        cout << hex << (int)x[i] << endl ; 
    }

    for (int i = 0 ; i < 4 ; i++)
    {
        // جمعت الارقام الموجوده في ارراي في فريابل واحد 
        z = z << 8;
        z = z | x[i];
    }
    cout << "number after packing :" << endl ;
    
    cout << z << endl ; 
    return 0;
}