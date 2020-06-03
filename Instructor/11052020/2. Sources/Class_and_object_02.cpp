// C++ program to demonstrate  
// accessing of data members   
#include <bits/stdc++.h> 
using namespace std; 
class Person01 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string fullName; 
  	
    // Member Functions() 
    void printName() 
    { 
       cout << "FullName is: " << fullName; 
    } 
}; 
  
int Class_and_object_02() { 
  
    // Declare an object of class geeks 
    Person01 obj; 
  
    // accessing data member 
    obj.fullName = "IMIC Technology"; 
  
    // accessing member function 
    obj.printName(); 
    
    return 0; 
}
/* Output */
// Geekname is: IMIC Technology

