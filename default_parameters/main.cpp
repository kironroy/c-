/*
A default parameter (also called an optional parameter or a default argument) is a function parameter that has a default value provided to it. If the user does not supply a value for this parameter, the default value will be used. If the user does supply a value for the default parameter, the user-supplied value is used instead of the default value.
*/

#include "default.h"
#include <iostream>
using namespace std;
 
void printValues(int x, int y)
{
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    
}
 
int main()
{
    
    printValues(6,47);
    cout << " printValues(6,47); will default to x: 6, y: 27"; 
    cout << "\n";
    cout << "\n";
    printValues(); // y is default to 10
    cout << " printValues() will default to x: 10, y: 20"; 
    cout << "\n";
 
    return 0;
}
