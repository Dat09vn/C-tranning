/* Example: Program to Add Two Integers */
#include <iostream>
using namespace std;

int Sample101()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     

    return 0;
}
/* Output */
// Enter two integers: 4
// 5
// 4 + 5 = 9
