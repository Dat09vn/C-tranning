#include <iostream>
using namespace std;
int main7() {
	char ch;

    /* Input a character from user */
    cout<<"Enter any character: ";
    cin>>ch;
		//ASCII
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))   
        printf("Character is an ALPHABET.");   
    else   
        printf("Character is NOT ALPHABET.");      
      
	return 0;
}
