#include <iostream>
using namespace std;

void top3(int arr[], int arr_size){
	int x1, x2, x3;
	if(arr_size<3){
		cout<<"Array is invalid";
	}
	x1 = x2 = x3 = INT_MIN;
	for (int i=0; i < arr_size; i++){
	if(arr[i]>x1){
		x3 = x2; 
		x2 = x1;
		x1 = arr[i];	
	}
	else if(arr[i]>x2){
		x3 = x2;
		x2 = arr[i];
	}
	else x3 = arr[i];	
cout<<" Result is "	<<x1<<" "<<x2<<" "<<x3;
}
}
int main(){
	int m;
	int a[] = {5, 4, 9, 12, 8};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Resul: ";
	for(int i =0; i<n; i++)
	cout<<a<< " ";
	top3(a, n);
	return 0;
	}

	
