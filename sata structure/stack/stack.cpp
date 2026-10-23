#include "stack.h"
#include <iostream>
using namespace std;

stack::stack ()
{

    top=-1;

}

bool stack::empty()
{
    return top==-1;
}

bool stack::full()
{
    return top==stacksize-1;
}

void stack::push (Elem item)
{
    if (full()) cerr <<"stack is empty\n";
    else 
    {

        top++;
        storage [top] = item;

    }
}

void stack::pop(Elem & item)
{

    if(empty()) cerr <<"the stack is empty \n";
    else
    {


        item=storage[top];
        top--;
    }
}

void stack::retrieve(Elem & item )
{

    if (empty()) cerr <<"stack is empty\n";
    else
    {
        item = storage[top];
    }
}
