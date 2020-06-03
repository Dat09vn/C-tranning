#include <iostream>
using namespace std;
int main10() {
	int month;
	int year;

  /* Input month number from user */
  cout<<"Enter month number (1-12): ";
  cin>>month;

  /* Group all 31 days conditions together using logical OR operator */
  if(month < 1 || month > 12)
  	cout<<"Invalid input! Please enter month number between (1-12)."<<endl;	
	else{
		switch(month){
	  	case 4:
	  	case 6:
	  	case 9:
	  	case 11: cout<<"30 days"<<endl;break;
	  	case 2:{
	  		cout<<"Enter year number (1900-9999): ";
	      cin>>year;
	  
	  		if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))   
	        cout<<"29 days"<<endl;    
	 		  else   
	        cout<<"28 days"<<endl;			
			}break;
			default: cout<<"31 days"<<endl;
		}
	}	
	return 0;
}
