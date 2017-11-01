#include <iostream>
using namespace std;

int main() {
 cout << "Enter a number from 1 to 10 ";
 int num; // defintion of a variable as an integer with name of num 
 cin >> num; // initialize variable num with the value user input 
 if (num == 2 || num == 3 || num == 5 || num == 7) 
    cout << "Prime number" << endl;
 else
    cout << "Non-prime number" << endl;
    return 0; 
}
  
