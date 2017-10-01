/*
  The function initiating the function call
  is called thecaller,
  and the function being called
  is the callee or called function.
*/

#include <iostream>
// Definition of function toPrint()
void toPrint() // function
{
  std::cout << "In toPrint()" << std::endl;
}

// Definition of function main()
int main()
{
  std::cout << "Starting main()" << std::endl;
  // interrupt main() by making function call toPrint
  toPrint();
  std::cout << "Ending main()" << std::endl;

  return 0;

}
