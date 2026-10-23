#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time time;

    time.reset(11, 121, 131);

    cout << "Before normalization: ";
    time.print();

    time.normalize();

    cout << "After normalization: ";
    time.print();

    int h, m, s;

    cout << "Enter hours: ";
    cin >> h;

    cout << "Enter minutes: ";
    cin >> m;

    cout << "Enter seconds: ";
    cin >> s;

    time.advance(h, m, s);

    cout << "After advancing: ";
    time.print();

    return 0;
}