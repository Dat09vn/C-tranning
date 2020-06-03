#include <iostream> 
using namespace std; 
  
void fun(int *ptr) 
{ 
    *ptr = 30; 
} 
  
int Func_Pass_by_Reference() { 
    int x = 20; 
    fun(&x); 
    cout << "x = " << x; 
      
    return 0; 
}
/* Output */
// x = 30
