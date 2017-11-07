#include <iostream>
#include <string>

using namespace std;

class Car { // c_var name c is class variables
   private: // encapsulation  --> user cannot interact with these variables
   unsigned int c_year; //  unsigned types can only represent positive values (and zero)
   unsigned int c_id;
   string c_brand;
   string c_model;
   unsigned int c_mass;
   unsigned int c_horsepower;
   double c_gasTankSize;
   unsigned int c_milesPerGallon;

   public: // public
     void setIdenity(unsigned int year, unsigned int carId, string brand,
                     string model, unsigned int mass,
                     unsigned int horsepower, double gasTankSize,
                     unsigned int milesPerGallon) {
    c_year = year;
    c_id = carId;
    c_brand = brand;
    c_model = model;
    c_mass = mass;
    c_horsepower = horsepower;
    c_gasTankSize = gasTankSize;
    c_milesPerGallon = milesPerGallon;
  }

  int calculateMilesRange() {
    if (c_milesPerGallon > 0 && c_gasTankSize > 0) {
      int milesRange = c_milesPerGallon * c_gasTankSize;
      return milesRange;
    }
  }

  int calculateMassPerPower() {
    if (c_horsepower > 0 && c_gasTankSize > 0) {
      double lbsPerHp = c_mass / c_gasTankSize;
      return lbsPerHp;
    }
  }

  void printInfo() {
    cout << c_year << " " << c_brand << " " << c_model << endl;
    cout << c_mass << " lbs" << endl;
    cout << c_horsepower << " hp" << endl;
    cout << c_gasTankSize << " gallon tank" << endl;
    cout << c_milesPerGallon << " average mpg" << endl;
    cout << calculateMilesRange() << " miles range" << endl;
    cout << calculateMassPerPower() << " lbs per hp" << endl;
  }

}; // end of Car Class (blueprint for objects);

// main function

int main() {
  Car carOne;  // object realife things = Mercedes Benz
  carOne.setIdenity(2008, 1, "Mercedes Benz", "420 S", 4000, 315, 22.0, 22);
  carOne.printInfo();

  cout << "\n";

  Car carTwo; // object realife things = Ferrari
  carTwo.setIdenity(1989, 2, "Ferrari", "F40", 8000, 556, 33.0, 32);
  carTwo.printInfo();

  return 0;

  cout << "\n";
}
