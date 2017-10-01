#include <iostream>

// get value from user and return it to caller

int getValueFromUser()
{
  // ask user for an integer
  std::cout << "Enter an integer: ";
  // declare var for user input
  int num;
  std::cin >> num; // get user input from console
  return num; // return value to functions caller (main)
}

int main()
{
  int num1 = getValueFromUser(); // 1st func call
  int num2 = getValueFromUser(); // 2nd func call


std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
  return 0;
}

// std::cout << x << " + " << y << " = " << x + y << std::endl;
