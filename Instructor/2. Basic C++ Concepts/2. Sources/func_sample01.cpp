#include <iostream> 
using namespace std; 
  
int max(int x, int y);
  
int func_sample01() { 
    int a = 10, b = 20;
  
    // Calling above function to find max of 'a' and 'b'  
    int m = max(a, b);  
  
    cout << "m is " << m;  
    
    return 0;  
}

int max(int x, int y)  
{  
    if (x > y)  
    	return x;     
    return y;  
} 
/* Output */
// m is 20