// C++ program for function overloading 
#include <bits/stdc++.h>   
using namespace std; 

class imic 
{ 
    public: 
      
    // function with 1 int parameter 
    void func(int x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name but 1 double parameter 
    void func(double x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name and 2 int parameters 
    void func(int x, int y) 
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
    
    void func(float x, float y) 
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
}; 
  
int Function_Overloading_demo() { 
      
    imic obj; 
      
    // Which function is called will depend on the parameters passed 
    // The first 'func' is called  
    obj.func(7); 
      
    // The second 'func' is called 
    obj.func(9.132); 
      
    // The third 'func' is called 
    obj.func(85,64); 
    
    obj.func(8.5f,6.4f); 
    
    return 0; 
} 
/* Output *//*
value of x is 7
value of x is 9.132
value of x and y is 85, 64
*/
