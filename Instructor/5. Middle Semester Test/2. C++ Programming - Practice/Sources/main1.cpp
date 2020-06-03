#include <iostream>
using namespace std;
int main1() {
		int num1, num2;

    /* Input two numbers from user */
    cout<<"Enter one numbers: ";
    cin>>num1;
    
    cout<<"Enter two numbers: ";
    cin>>num2;

    /* Compare num1 with num2 */
    if(num1 > num2)   
        /* True part means num1 > num2 */
        cout<<num1<<" is maximum";          
    else    
        /* False part means num1 < num2 */
        cout<<num2<<" is maximum";   
	return 0;
}
