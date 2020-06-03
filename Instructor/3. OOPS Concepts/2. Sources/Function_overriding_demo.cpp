// C++ program for function overriding 
  
#include <bits/stdc++.h>
using namespace std;

class base
{
	public:
    virtual void print ()
    { cout<< "print base class" <<endl; }

    void show ()
    { cout<< "show base class" <<endl; }
};

class derived01 : public base
{
    public:
    //print () is already virtual function in derived class,
	//we could also declared as virtual void print () explicitly
    void print ()
    { cout<< "Ha ha ha :D" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

class derived02 : public base
{
    public:
    //print () is already virtual function in derived class,
	//we could also declared as virtual void print () explicitly
    void print ()
    { cout<< "Hi hi hi hi :D" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

//main function
int main()
{
    base *bptr;
    derived01 d;
    derived02 e;

    int i;
    cout<<"Input i = ";
    cin>>i;

    if(i==0)
    	bptr = &d;
    else
    	bptr = &e;

    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}
/* Output *//*
print derived class
show base class
*/
