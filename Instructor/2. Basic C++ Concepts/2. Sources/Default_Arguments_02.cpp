#include<iostream>  
using namespace std;  
  
// A function with default arguments, it can be called with  
// 2 arguments or 3 arguments or 4 arguments.  
int sum(int x, int y, int z=0, int w=0)  
{  
    return (x + y + z + w);  
}  
int sum(int x, int y, float z=0, float w=0)  
{  
    return (x + y + z + w);  
}  
/* Driver program to test above function*/
int Default_Arguments_02()  
{  
    cout << sum(10, 15) << endl;  
    cout << sum(10, 15, 25) << endl;  
    cout << sum(10, 15, 25, 30) << endl;  
    return 0;  
}
/* Error *//*
prog.cpp: In function 'int main()':
prog.cpp:17:20: error: call of overloaded 
'sum(int, int)' is ambiguous
  cout << sum(10, 15) << endl; 
                    ^
prog.cpp:6:5: note: candidate: 
int sum(int, int, int, int)
 int sum(int x, int y, int z=0, int w=0) 
     ^
prog.cpp:10:5: note: candidate: 
int sum(int, int, float, float)
 int sum(int x, int y, float z=0, float w=0) 
     ^
*/
