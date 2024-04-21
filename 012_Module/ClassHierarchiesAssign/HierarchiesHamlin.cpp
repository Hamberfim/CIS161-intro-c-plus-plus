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
 * & the ship’s cargo capacity.
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

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Base Ship class
class Ship {
public:
  // Constructor
  Ship(string shipName, string yearBuilt)
      : shipName(shipName), yearBuilt(yearBuilt) {}

  // Accessors (getters)
  string getName() { return shipName; }
  string getYearBuilt() { return yearBuilt; }

  // Mutators (setters)
  void setName(string shipName) { this->shipName = shipName; }
  void setYearBuilt(string yearBuilt) { this->yearBuilt = yearBuilt; }

  // Virtual print function
  virtual void print() {
    cout << "Name: " << shipName << ", Year Built: " << yearBuilt << endl;
  }

private:
  string shipName;
  string yearBuilt;
};

// Derived CruiseShip class
class CruiseShip : public Ship {
public:
  // Constructor
  CruiseShip(string shipName, string yearBuilt, int maxPassengers)
      : Ship(shipName, yearBuilt), maxPassengers(maxPassengers) {}

  // Accessors (getters)
  int getMaxPassengers() { return maxPassengers; }

  // Mutators (setters)
  void setMaxPassengers(int maxPassengers) {
    this->maxPassengers = maxPassengers;
  }

  // Print function
  void print() override {
    cout << "Name: " << getName() << ", Max Passengers: " << maxPassengers
         << endl;
  }

private:
  int maxPassengers;
};

// Derived CargoShip class
class CargoShip : public Ship {
public:
  // Constructor
  CargoShip(string shipName, string yearBuilt, int cargoCapacity)
      : Ship(shipName, yearBuilt), cargoCapacity(cargoCapacity) {}

  // Accessors (getters)
  int getCargoCapacity() { return cargoCapacity; }

  // Mutators (setters)
  void setCargoCapacity(int cargoCapacity) {
    this->cargoCapacity = cargoCapacity;
  }

  // Print function
  void print() override {
    cout << "Name: " << getName() << ", Cargo Capacity: " << cargoCapacity
         << endl;
  }

private:
  int cargoCapacity;
};

int main() {
  // Vector of Ship pointers
  vector<Ship *> ships;

  // Add CruiseShip and CargoShip objects onto the vector of Ship
  ships.push_back(new CruiseShip("Cruise1", "2000", 500));
  ships.push_back(new CargoShip("Cargo1", "2005", 10000));

  // Step through the vector, calling each object’s print function
  for (Ship *ship : ships) {
    ship->print();
  }

  // Clean up
  for (Ship *ship : ships) {
    delete ship;
  }

  return 0;
}
