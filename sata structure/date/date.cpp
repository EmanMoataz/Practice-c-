// -----------------------------------
// -- IMPLIMENTATION 
// Body of functions
// -----------------------------------

#include <iostream>
#include "date.h"

using namespace std ;

void date::set (int d , int m , int y )

// void مش بترجع قيمه 
// date اسم الكلاس 
// :: scope resolution operator => بتوضح ان الفنسكشن سيت تابعه للكلاس ديت 

{
    day = d;
    month = m;
    year = y;

    // هقدر اطلع اوبجيكت من الكلاس و ابعتله براميترز في الميين 

}

bool date::valid () 
{
    int months_days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (year < 1901 || year > 2099)
       {
          return false ;
       };

    if (month < 1 || month > 12 )
       {
           return false ;
       };
    
    if (year % 4 == 0) 
       {
          months_days[2]=29;
       };

    if (day < 1 || day > months_days[month])
       {
           return false ;
       };

    return true ;
    // معناها ان التاريخ عدى كل الشروط و الكود صح 
};

void date::print ()
{
    char*name [] = 
    {

        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
     };

    if (!valid())
       {
          cout << "Invalid date " << endl ;
       }

    else 
       {
           cout << name[month] << " " << day << " , " << year << endl;

       }
}

int date::year_day ()
{
    if (!valid())
       {
           return -1;
           // معناها التاريخ غير صالح 
       }

    int sum_days[] =
    //بتخزن جميع ايام الشهور قبل الشهر الحالي 
       {
          0,31,59,90,120,151,181,212,243,273,304,334
        };

    int yr_day= sum_days [month-1] + day;

    if (year % 4 == 0 && month > 2)
       {
          yr_day++;
       }
    return yr_day;
}


int date::days_1901()
{
    if (!valid())
       {
           return -1;
       }
    return (int)((year - 1901) * 365.25
                 + year_day() - 1);
}


int date::week_day()
{
    if (!valid())
        return -1;

    return (days_1901() + 2) % 7;
}

