
#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
    stack s;
    int choice, x;

    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Retrieve";
        cout << "\n4. Check Empty";
        cout << "\n5. Check Full";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter an element: ";
            cin >> x;
            s.push(x);
            break;

        case 2:
            s.pop(x);
            if (!s.empty() || x != 0)
                cout << "Popped element: " << x << endl;
            break;

        case 3:
            s.retrieve(x);
            if (!s.empty())
                cout << "Top element: " << x << endl;
            break;

        case 4:
            if (s.empty())
                cout << "Stack is empty\n";
            else
                cout << "Stack is not empty\n";
            break;

        case 5:
            if (s.full())
                cout << "Stack is full\n";
            else
                cout << "Stack is not full\n";
            break;

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);

    return 0;
}
