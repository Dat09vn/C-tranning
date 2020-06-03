// C++ program to implement  
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle03  
{ 
  public: 
    Vehicle03() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler03: public Vehicle03 
{  public: 
    fourWheeler03() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
// sub class derived from two base classes 
class Car03: public fourWheeler03{ 
   public: 
     Car03() 
     { 
       cout<<"Car has 4 Wheels"<<endl; 
     } 
}; 
  
// main function 
int Multilevel_Inheritance_demo() 
{    
    //creating object of sub class will 
    //invoke the constructor of base classes 
    Car03 obj; 
    return 0; 
}
/* Output *//*
This is a Vehicle
Objects with 4 wheels are vehicles
Car has 4 Wheels
*/
