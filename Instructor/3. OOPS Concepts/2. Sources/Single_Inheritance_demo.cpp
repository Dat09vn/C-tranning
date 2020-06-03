/* Syntax:
class subclass_name : access_mode base_class
{
  //body of subclass
};*/
// C++ program to explain  
// Single inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle01 { 
  public: 
    Vehicle01() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// sub class derived from two base classes 
class Car01: public Vehicle01{ 
  
}; 
  
// main function 
int Single_Inheritance_demo() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car01 obj; 
    
    return 0; 
}
/* Output */
// This is a vehicle
