/* Following is simple C++ program without transform(). */
// A C++ code to add two arrays 
#include <bits/stdc++.h> 
using namespace std; 
  
int program_without_transform() 
{ 
  int arr1[] = {1, 2, 3}; 
  int arr2[] = {4, 5, 6}; 
  int n = sizeof(arr1)/sizeof(arr1[0]); 
  int res[n]; 
  
  // Code to add two arrays 
  for (int i=0; i<n; i++) 
    res[i] = arr1[i] + arr2[i]; 
  
  for (int i=0; i<3; i++) 
    cout << res[i] << " "; 
}
/* Output */
// 5 7 9
