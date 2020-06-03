#include <iostream> 
using namespace std; 
  
void fun() 
{ 
   cout << "Hello"; 
  
   // We can write return in void 
   return;  
} 
  
int Return_from_void_01() 
{ 
   fun(); 
   return 0; 
}
/* Output */
// Hello
