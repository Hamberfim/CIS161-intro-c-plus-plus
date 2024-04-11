/* Name: Factory
 * Author: Provided by instructor, modified by Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * In main create at least 2 factories and 5 products. Call makeProduct to start
 * making the products at the factories.
 */

#include <iostream>
using namespace std;

class Product {
private:
  /* Edited name to make it more specific so the declaration
  doesn't 'shadow' the other member with the same name */
  string product_name;

public:
  Product(string name) : product_name(name) {}
  string getName() { return product_name; }
};

class Factory {
private:
  /* Edited names to make them more specific so the declaration
  doesn't 'shadow' the other member with the same names */
  string factory_location;
  int factory_capacity;

public:
  Factory(string location, int capacity)
      : factory_location(location), factory_capacity(capacity) {}
  void makeProduct(Product product);
};

void Factory::makeProduct(Product product) {
  if (factory_capacity > 0) {
    cout << "Factory is now making " << product.getName() << endl;
  } else {
    cout << "Factory out of capacity." << endl;
  }
}

int main() {
  // TODO: your code goes here
  // INSTRUCTIONS
  // 1. Create at least 2 factories and 5 products.
  // 2. Call makeProduct to start making the products at the factories.

  // Create Michigan factory
  Factory michigan_factory("Michigan", 5); // (location, product capacity)

  // Create products for Michigan location
  Product m_prod1("Tires");
  Product m_prod2("Tire rims");
  Product m_prod3("Disc Brakes");
  Product m_prod4("Drive Axles");
  Product m_prod5("Hub Bearings");

  // making products at Michigan factory
  cout << "\n=== Michigan ===" << endl;
  michigan_factory.makeProduct(m_prod1);
  michigan_factory.makeProduct(m_prod2);
  michigan_factory.makeProduct(m_prod3);
  michigan_factory.makeProduct(m_prod4);
  michigan_factory.makeProduct(m_prod5);

  // Create Atlanta factory
  Factory atlanta_factory("Atlanta", 5); // (location, product capacity)

  // Create products for Atlanta location
  Product a_prod1("Dish Washers");
  Product a_prod2("Refrigerator");
  Product a_prod3("Microwaves");
  Product a_prod4("Cloths Washers");
  Product a_prod5("Cloths Dryers");

  // making products at Atlanta factory
  cout << "\n=== Atlanta ===" << endl;
  atlanta_factory.makeProduct(a_prod1);
  atlanta_factory.makeProduct(a_prod2);
  atlanta_factory.makeProduct(a_prod3);
  atlanta_factory.makeProduct(a_prod4);
  atlanta_factory.makeProduct(a_prod5);

  // factory with no capacity for the 'Factory::makeProduct' else clause
  Factory chicago_factory("Chicago", 0); // (location, product capacity)

  // Create products for Atlanta location
  Product c_prod1("Bulk Italian Beef");
  Product c_prod2("Bulk Italian Hoagie Buns");
  Product c_prod3("Bulk Italian Pepperoncini");

  // making products at Atlanta factory
  cout << "\n=== Chicago ===" << endl;
  chicago_factory.makeProduct(c_prod1);
  chicago_factory.makeProduct(c_prod2);
  chicago_factory.makeProduct(c_prod3);

  return 0;
}