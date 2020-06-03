/* 5) Local classes can access global types, variables and functions. Also, local classes 
can access other local classes of same function..  */
#include<iostream> 
using namespace std; 
  
int x; //Global variables  
void fun()   
{   
      // First Local class 
      class Test1 { 
      public: 
         Test1() { cout << "Test1::Test1()" << endl; } 
      }; 
  
      // Second Local class 
      class Test2 
      { 
           // Fine: A local class can use other local classes of same function 
           Test1 t1; 
      public: 
          void method() { 
              // Fine: Local class member methods can access global variables. 
              cout << "x = " << x << endl; 
          } 
      }; 
  
      Test2 t; 
      t.method(); 
} 
  
int main() 
{ 
    fun(); 
    return 0; 
} 
/* Output *//*
Test1::Test1()
x = 0
*/
