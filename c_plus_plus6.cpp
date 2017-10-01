/* function parameter --> is a variable used in a
  function where the value
  is provided by the caller of the function.
  An argument is a value --> that is passed from the caller to the
  function when a function call is made:
  When a function is called,
  all of the parameters of the function are created as variables,
  and the value of each of the arguments is copied into the matching parameter.
  This process is called pass by value.
*/

#include <iostream>

int add(int x, int y)
{
  return x + y;
}

// main taked no parameters
int main()
{
  std::cout << add(4, 5) << std::endl; // args 4, 5 passed in function
  return 0;
}
