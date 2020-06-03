/* C code for function with no arguments but have return value */
#include <iostream>
#include <math.h>
using namespace std;
  
int sum(); 

int Function_Argument_03() 
{ 
    int num; 
    num = sum(); 
    cout<<"Sum of two given values = "<< num <<endl; 
    return 0; 
} 
  
int sum() 
{ 
    int a = 50, b = 80, sum; 
    sum = sqrt(a) + sqrt(b); 
    return sum; 
}
/* Output */
//Sum of two given values = 16


