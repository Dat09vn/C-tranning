#include <iostream>
using namespace std;
int main14() {
	int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    cout<<"Enter five subjects marks: ";
    cin>>phy>>chem>>bio>>math>>comp;

    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;
    cout<<"Percentage = "<<per<<endl;

    /* Find grade according to the percentage */
    if(per >= 90)    
      cout<<"Grade A"<<endl;   
    else if(per >= 80)    
       cout<<"Grade B"<<endl;    
    else if(per >= 70)    
       cout<<"Grade C"<<endl;    
    else if(per >= 60)    
       cout<<"Grade D"<<endl;    
    else if(per >= 40)    
       cout<<"Grade E"<<endl;    
    else    
       cout<<"Grade F"<<endl;         
      
	return 0;
}
