// Cpp program to illustrate the 
// concept of Constructors 
#include <iostream> 
using namespace std; 
  
class Person04 { 
	public: 
	    int id;
		string fullName;   		
  		
    // Default Constructor 
    Person04() 
    { 
       id = 100;
	   fullName = "IMIC Technology";	   
    }	    
}; 

int Default_Constructors_demo() 
{ 
    // Default constructor called automatically 
    // when the object is created 
    Person04 obj;
	
	// Print object information 
    cout << "id: " << obj.id << endl 
         << "fullName: " << obj.fullName<<endl;    
		  
    return 0; 
} 
/* Output */
// id: 100
// fullName: IMIC Technology
