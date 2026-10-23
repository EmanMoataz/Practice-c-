#ifndef stack_h
#define stack_h

const int stacksize = 5 ;
typedef int Elem ;

class stack 
{

    public:
    
    stack ();
    
    void push(Elem item);
    void pop(Elem&item);
    void retrieve(Elem&item);
   
    bool empty();
    bool full();

    private :
    
    int top ;
    Elem storage[stacksize];
};

#endif