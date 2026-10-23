
#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    date oneday;

    oneday.set(5, 3, 2024);

    oneday.print();

    cout << "Day of year: "
         << oneday.year_day() << endl;

    return 0;
}
