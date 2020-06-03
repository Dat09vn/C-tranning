// C++ program to demonstrate private 
// access modifier 
  
#include<iostream> 
using namespace std; 
  
class Circle02 
{    
    // private data member 
    private:  
        double radius;
       
    // public member function     
    public:     
        void compute_area(double r) 
        {   // member function can access private  
            // data member radius 
            radius = r; 
              
            double area = 3.14*radius*radius; 
              
            cout << "Radius is: " << radius << endl; 
            cout << "Area is: " << area; 
        } 
      
}; 
  
// main function 
int Access_Modifiers_Private_02() 
{    
    // creating object of the class 
    Circle02 obj; 
      
    // trying to access private data member 
    // directly outside the class 
    obj.compute_area(1.5); 
      
      
    return 0; 
}
/* Output *//*
Radius is: 1.5
Area is: 7.065
*/
