#include <iostream>
#include <math.h>
using namespace std;
int main13() {
	  float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin>>a>>b>>c;
    
    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);
       
    /* Find the nature of discriminant */
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout<<"Two distinct and real roots exists: "<< root1 <<"and "<<root2<<endl;
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout<<"Two equal and real roots exists: "<<root1<<"and "<<root2<<endl;
    }
    else if(discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout<<"Two distinct complex roots exists: "<< root1 <<"and "<<imaginary<<endl;
    }     
      
	return 0;
}
