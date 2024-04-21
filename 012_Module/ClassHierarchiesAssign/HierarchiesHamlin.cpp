/* Name: Class Hierarchies
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Ship, CruiseShip and CargoShip Classes ...
 *
 * Design a Ship class that has the following members:
 *      A member variable for the name of the ship (a string )
 *      A member variable for the year that the ship was built (a string)
 *      A constructor and appropriate accessors and mutators
 *      A virtual print function that displays the ship’s name & year built.
 *
 * Design a CruiseShip class that is derived from the Ship class.
 * The CruiseShip class should have the following members:
 *      A member variable for the maximum number of passengers (an int)
 *      A constructor and appropriate accessors and mutators
 *      A print function that overrides the print function in the base class.
 *      The CruiseShip class’s print function should display only the ship’s
 *      name & maximum number of passengers.
 *
 * Design a CargoShip class that is derived from the Ship class.
 * The CargoShip class should have the following members:
 *      A member variable for the cargo capacity in tonnage (an int)
 *      A constructor and appropriate accessors and mutators
 *      A print function that overrides the print function in the base class.
 *      The CargoShip class’s print function should display only the ship’s name
 *      & the ship’s cargo capacity.
 *
 * Demonstrate the classes in a program that has a vector of Ship.
 *      Add (using push_back) CruiseShip and CargoShip objects onto the vector
 *      of ship.
 *      The program should then step through (use a loop) the vector,
 *      calling each object’s print function.
 */
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

// Base Ship class
class Ship {
public:
  // Constructor
  Ship(const string &sName, const int &yearBlt)
      : shipName(sName), yearBuilt(yearBlt) {}

  // Accessors (getters)
  string getName() { return shipName; }
  int getYearBuilt() { return yearBuilt; }

  // Mutators (setters)
  void setShipName(const string &sName) { shipName = sName; }
  void setYearShipBuilt(const int &yearBlt) { yearBuilt = yearBlt; }

  // Virtual print function
  virtual void print() {
    cout << "The " << getName() << " ship was built in " << getYearBuilt()
         << endl;
  }

private:
  string shipName;
  int yearBuilt;
};

// Derived CruiseShip class
class CruiseShip : public Ship {
public:
  // Constructor
  CruiseShip(const string &sName, const int &yearBlt, const int &mPassengers)
      : Ship(sName, yearBlt), maxPassengers(mPassengers) {}

  // Accessors (getters)
  int getMaxPassengers() { return maxPassengers; }

  // Mutators (setters)
  void setMaxPassengers(const int &mPassengers) { maxPassengers = mPassengers; }

  // Print function
  void print() override {
    cout << "The " << getName() << " cruise ship can hold a maximum of "
         << getMaxPassengers() << " passengers." << endl;
  }

private:
  int maxPassengers;
};

// Derived CargoShip class
class CargoShip : public Ship {
public:
  // Constructor
  CargoShip(const string &sName, const int &yearBlt, const int &cargoCap)
      : Ship(sName, yearBlt), cargoCapacity(cargoCap) {}

  // Accessors (getters)
  int getCargoCapacity() { return cargoCapacity; }

  // Mutators (setters)
  void setCargoCapacity(const int &cargoCap) { cargoCapacity = cargoCap; }

  // Print function
  void print() override {
    cout << "The cargo ship " << getName() << " has a cargo capacity of "
         << getCargoCapacity() << " tons." << endl;
  }

private:
  int cargoCapacity;
};

int main() {
  // Vector of Ship pointers
  vector<Ship *> ships;

  // test base Ship class
  cout << "=== Test Base Ship Class ===" << endl;
  Ship baseShip("Small Steam", 1905);
  baseShip.print();

  // test base mutators
  cout << "\n=== Test Base Ship Mutators ===" << endl;
  baseShip.setShipName("Large Hull");
  baseShip.setYearShipBuilt(1956);
  baseShip.print();

  // Test Hierarchies
  cout << "\n=== Test Other Classes ===" << endl;
  CruiseShip cruise("Little Debbie", 2005, 25);
  cruise.print();
  CargoShip cargo("Scarlet Barge", 1968, 10000);
  cargo.print();

  // test mutators
  cout << "\n=== Test Other Class Mutators ===" << endl;
  cruise.setShipName("Clark");
  cruise.setYearShipBuilt(1946);
  cruise.setMaxPassengers(150);
  cruise.print();

  cargo.setShipName("Standard Oil");
  cargo.setYearShipBuilt(1972);
  cargo.setCargoCapacity(200000);
  cargo.print();

  // Add CruiseShip and CargoShip objects onto the vector of Ship
  CruiseShip tinyCruise("SS Minnow", 1964, 7);
  ships.push_back(&tinyCruise);
  CargoShip oldCargo("Rust Bucket", 1886, 1000);
  ships.push_back(&oldCargo);

  // syntax for inline object creation and push to vector
  ships.push_back(new CruiseShip("Princess", 1999, 1500));
  ships.push_back(new CargoShip("Valdez", 1985, 150000));

  cout << "\n=== Vector Loop Ships ===" << endl;
  // Loop through the vector, calling each object’s print function
  for (Ship *ship : ships) {
    ship->print();
  }

  return 0;
}
