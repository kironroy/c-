#include <iostream>
#include "constants.h"
#include <string>
using namespace std; 

int main()

{
 cout << "Enter a radius for the circle"; 
 int radius; // def of a variable as an int with name of radius 
 cin >> radius; // initialize var num with the value from the user
 string circumferenceSentence("The circumference of the circle is: ");
 double circumference = 2 * radius * constants::pi; 
 // print out @ line 15 
 cout << circumferenceSentence << circumference; 
}
