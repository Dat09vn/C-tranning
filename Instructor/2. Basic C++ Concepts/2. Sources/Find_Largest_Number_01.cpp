/* Example 1: Find Largest Number Using if Statement */
#include <iostream>
using namespace std;

int Sample105()
{    
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
    {
        cout << "Largest number: " << n1;
    }

    if(n2 >= n1 && n2 >= n3)
    {
        cout << "Largest number: " << n2;
    }

    if(n3 >= n1 && n3 >= n2) {
        cout << "Largest number: " << n3;
    }

    return 0;
}
/* Output */
// Enter three numbers: 2.3
// 8.3
// -4.2
// Largest number: 8.3
