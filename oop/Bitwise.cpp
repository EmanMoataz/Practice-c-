//----------------------------------------------------------
//                 BITWISE OPERATIONS 

//   (AND,OR,XOR,NOR,LIFT SHIFT,RIGHT SHIF,NOT,SET,RESET)

//----------------------------------------------------------

#include <iostream>
using namespace std ;

int main ()

{
    unsigned int A , B , mask1 , mask2 , mask3 , mask4 , mask5 , mask6 , mask7 , a , b , c , d , e , f, mask8 , mask9 , mask10 , mask11;

    A = 0x00FF;
    B = 0xFF00;

    // cout << hex;  // بدل ما اكتبها جمب كل واحده 
    cout << "A = " << hex << A << endl;
    cout << "B = " << B << hex << endl << endl ;

    // AND:
    mask1 = A & B ;
    cout << "A AND B in bitwise = " << hex << mask1  << endl ;
    cout << "A AND B in bitwise = " << dec << mask1 << endl << endl ;

    // OR:
    mask2 = A | B ;
    cout << "A OR B in bitwise = " << hex << mask2 << endl;
    cout << "A OR B in bitwise = " << dec << mask2 << endl  << endl;

    // XOR:
    mask3 = A ^ B ;
    cout << "A XOR B in bitwise = " << hex << mask3 << endl;
    cout << "A XOR B in bitwise = " << dec << mask3 << endl << endl;

    // NOR:
    mask4 = ~( A | B) ;
    cout << "A NOR B in bitwise = " << hex << mask4 << endl;
    cout << "A NOR B in bitwise = " << dec << mask4 << endl  << endl;

    // NOT:
    mask5 = ~A ;
    cout << "NOT A in bitwise = " << hex << mask5 << endl ;
    cout << "NOT A in bitwise = " << dec << mask5 << endl << endl ;

    mask6 = ~B ;
    cout << "NOT B in bitwise = " << hex << mask6 << endl;
    cout << "NOT B in bitwise = " << dec << mask6 << endl  << endl << endl;

    // LIFT SHIFT:
    a = A << 4 ;
    cout << "A after LIFT SHIT : " << " A " << "<<" << " 4 " << hex << a << endl ;
    cout << "A after LIFT SHIT : " << " A " << "<<" << " 4 " << dec << a << endl << endl ;

    // RIGHT SHIFT:
    b = B >> 4 ; 
    cout << "B after RIGHT LIFT : " << " B " << ">>" << " 4 " << hex << b << endl;
    cout << "B after RIGHT LIFT : " << " B " << ">>" << " 4 " << dec << b << endl << endl << endl;


    // SET

    // SET(بتستخدم | )
    // SET => (عايزه اخلي بيت معينه 1)'on'
    // SET => (لو طلب في السؤال اخلي بيت معينه ب 1 )=>بعمل ماسك اقدر اعمل عليها اور مع القيمه اللي مديهالي 

    mask8 = 0xFF0F;
    c = A | mask8 ;
    cout << "A after set :" << hex << c << endl ; 
    cout << "A after set :" << dec << c << endl << endl ;

    mask9 = 0x00f8;
    d = A | mask9;
    cout << "A after turned bit 4 of : " << hex << d << endl ; 
    cout << "A after turned bit 4 of : " << dec << d << endl << endl << endl ;


    // RESET:

    // RESET (بستخدم & )
    // RESET =>(عايزه اخلي بيت معينه = 0)'of'
    // RESET (لو طلب في السوال اقفل بيت معينه )=> بعمل ماسك اقدر اعمل عليها اند تقفلي البيت دي 

    mask10 = 0x0000;
    e = B & mask8;
    cout << "A after reset = " << hex << e << endl ;
    cout << "A after reset = " << dec << e << endl << endl ;

    // make bit 7 = 0
    mask11 = 0x00B0;
    f = B & mask9 ;
    cout << "B after turned bit 7 off :" << hex << f << endl ;
    cout << "B after turned bit 7 off :" << dec << f << endl << endl ;

}
