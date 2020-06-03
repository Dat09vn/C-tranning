#include <iostream>
using namespace std;
int main12() {
	int side1, side2, side3;

  /* Input sides of a triangle */
  cout<<"Enter three sides of triangle: ";
  cin>>side1>>side2>>side3;

  if(side1==side2 && side2==side3)   
    /* If all sides are equal */
    cout<<"Equilateral triangle."<<endl;  
  else if(side1==side2 || side1==side3 || side2==side3)   
    /* If any two sides are equal */
    cout<<"Isosceles triangle."<<endl;  
  else   
   /* If none sides are equal */
    cout<<"Scalene triangle."<<endl;       
      
	return 0;
}
