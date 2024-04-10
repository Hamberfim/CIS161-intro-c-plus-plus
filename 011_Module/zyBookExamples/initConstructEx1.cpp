
#include <iostream>
#include <string>
using namespace std;

class Bicycle {
   public:
      void SetType(string bicycleType);
      void SetYear(int bicycleYear);
      void Print();
   private:
      string type = "NoType";  // NoType indicates brand was not set
      int year = -1;           // -1 indicates year was not set
};

void Bicycle::SetType(string bicycleType) {
   type = bicycleType;
}

void Bicycle::SetYear(int bicycleYear) {
   year = bicycleYear;
}

void Bicycle::Print() {
   cout << type << " " << year << endl;
}

int main() {
   Bicycle commuterBike;
   
   commuterBike.Print();
   
   commuterBike.SetYear(1912);
   commuterBike.SetType("tandem");

   commuterBike.Print();
   
   return 0;
}
/* NoType -1
  tandem 1912
  
 */
 
 
#include <iostream>
#include <string>
using namespace std;

class Bicycle {
   public:
      Bicycle();
      void SetType(string bicycleType);
      void SetYear(int bicycleYear);
      void Print();
   private:
      string type;
      int year;
};

Bicycle::Bicycle() {
   type = "NoType";    // NoType indicates brand was not set
   year = -1;          // -1 indicates year was not set
}

void Bicycle::SetType(string bicycleType) {
   type = bicycleType;
}

void Bicycle::SetYear(int bicycleYear) {
   year = bicycleYear;
}

void Bicycle::Print() {
   cout << type << " " << year << endl;
}

int main() {
   Bicycle commuterBike;
   
   commuterBike.Print();
   
   commuterBike.SetType("mountain");
   commuterBike.SetYear(1917);

   commuterBike.Print();
   
   return 0;
}
/* NoType -1
   mountain 1917
 
*/
 
