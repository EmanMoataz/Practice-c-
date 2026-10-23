// ----------------------------------------------
// -DECLAERATION

// -- Make a Date Program -- 

// ---------------------------

// store the date 
// set day , months , year 
// valid the Date 
// print Date
// counting a day number in the year 
// counting the day since 1901
// counting the week number 
// Add days

// ---------------------------------------------- 

#ifndef DATE_H
#define DATE_H

class date 

{

    private :

       int day ;            // day number: 1-31          
       int month ;         // month number: 1-12 
       int year ;         // year number: 1901-2099
 

    private :

       void set (int d , int m , int y );      // set date
       bool valid ();                    // check if date true
       // return true or false 
       void print ();              // display "Month dd, yyyy"  
       int year_day ();        // day number in current year  
       int days_1901 ();       // days since Jan 1,1901
       int week_day ();          // return weekday number in current year 
      void add (int n) ;      // Add n days to this date

};

#endif