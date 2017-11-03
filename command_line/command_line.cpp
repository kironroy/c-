#include <iostream>
#include <string>
#include <sstream> // for std::stringstream 
#include <cstdlib> // for exit() 

int main(int argc, char *argv[])
{
  if (argc <= 1)
  {
    if (argv[0])
        std::cout << "Usage: " << argv[0] << " <number>" << '\n';
    else 
      std::cout << "Usage: <program name> <number>" << '\n';
   
     exit(1);
  }

  std::stringstream convert(argv[1]); 

  int myint; 
  if (!(convert >> myint)) 
      myint = 0; 

  std::cout << "Got integer: " << myint << '\n'; 

  return 0; 
}
