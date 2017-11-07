/*
 Member initializer lists
  - programmer can declare const variables
  - better style then assignment, may be more efficent 
  - member initializer list
  - constructors are more useful when we allow the caller to pass in the initialization values
*/

/*
 Member initializer lists
  - programmer can declare const variables
  - better style then assignment, may be more efficent
  - member initializer list
  - constructors are more useful when we allow the caller to pass in the
 initialization values
*/

/*
 Member initializer lists
  - programmer can declare const variables
  - better style then assignment, may be more efficent
  - member initializer list
  - constructors are more useful when we allow the caller to pass in the
 initialization values
*/

/*
 Member initializer lists
  - programmer can declare const variables
  - better style then assignment, may be more efficent
  - member initializer list
  - constructors are more useful when we allow the caller to pass in the
 initialization values
*/

#include <iostream>
#include <string>
using namespace std;

class ChickenWingDetails {
private:
  string c_flavor;
  double c_spice_level;
  char c_size;

public:
  ChickenWingDetails(string value1, double value2, char value3 = 'M')
      : c_flavor(value1), c_spice_level(value2),
        c_size(value3) // directly initialize our member variables
  {
    // No need for assignment here
  }

  void print() {
    cout << "Chicken Wing Details: ("
         << "Flavor: " << c_flavor << ", "
         << "Spice level: " << c_spice_level << ", "
         << "Size: " << c_size << ")\n";
    // cout << "Chicken Wing Order: ("flavor: ")
  }
};

int main() {
  ChickenWingDetails order1("Buffalo", 2.2); // Buffalo, 2.2, m
  order1.print();
  
  cout << "\n";
  
  ChickenWingDetails order2("Cajun", 7.0, 'L'); // Buffalo, 2.2, m
  order2.print();
  
  return 0;
}



