#include <iostream>
using namespace std;
int main3() {
	int num;
    
    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;
    
    if(num > 0)
       printf("Number is POSITIVE");    
    else if(num < 0)   
       printf("Number is NEGATIVE");  
    else    
      printf("Number is ZERO");     
	return 0;
}
