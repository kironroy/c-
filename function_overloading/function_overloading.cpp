#include <iostream>
using namespace std;

int add(int x, int y) // two numbers
{
  return x + y;
}

double add(double x, double y) // double numbers
{
  return x + y;
}

int add(int x, int y, int z) // adding three numbers
{
  return x + y + z;
} 

int main()
{
 cout << add(2, 3); // calls(int y, int x) -> 5
 cout << "\n"; // space
 cout << add(2.2, 3.2); // calls add(double x, double y) -> 5.4
 cout << "\n"; // space
 cout << add(1, 2, 3); // calls add(int x, int y, int z) -> 6
 cout << "\n"; // space

 return 0; 
}
