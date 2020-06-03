#include <iostream>
using namespace std;
int main8() {
	char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')    
       cout<<ch<<" is uppercase alphabet."<<endl;   
    else if(ch >= 'a' && ch <= 'z')    
       cout<<ch<<" is lowercase alphabet."<<endl;    
    else    
       cout<<ch<<" is not an alphabet."<<endl;          
      
	return 0;
}
