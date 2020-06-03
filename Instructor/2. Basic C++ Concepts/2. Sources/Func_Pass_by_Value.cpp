#include <iostream> 
using namespace std; 
  
void fun(int x) { 
    x = 30;
} 
  
int Func_Pass_by_Value() { 
    int x = 20;
    fun(x); 
    cout << "x = " << x; 
    return 0; 
}

/* Output */
// x = 20
