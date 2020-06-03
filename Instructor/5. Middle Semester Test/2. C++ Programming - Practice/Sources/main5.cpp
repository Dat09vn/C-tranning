#include <iostream>
using namespace std;
int main5() {
	int num;

    /* Input number from user */
    cout<<"Enter any number to check even or odd: ";
    cin>>num;
    
    /* Check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)    
        /* num % 2 is 0 */
        cout<<"Number is Even.";   
    else    
        /* num % 2 is 1 */
        cout<<"Number is Odd.";    
      
	return 0;
}
