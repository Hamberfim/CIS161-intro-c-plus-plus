/* Define a private helper function called ConvertToFeet() that converts the data member inches to feet and returns a double.

Ex: If the input is 804.0, then the output is:

67.0 feet
Note: The equation to convert from inches to feet is: feet = inches / 12 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Length {
   public:
      void SetInches(double lengthInches);      
      double GetInches() const;                        
      void PrintInFeet();
   private:
      double inches;
      double ConvertToFeet();                
};

void Length::SetInches(double lengthInches) {
   inches = lengthInches;
}

double Length::GetInches() const {
   return inches;
}

/* Your code goes here */
double Length::ConvertToFeet() {
    return inches / 12.0;
   }


void Length::PrintInFeet() {
   cout << fixed << setprecision(1) << ConvertToFeet() << " feet" << endl;
}

int main() {
   Length length1;
   double inputInches;

   cin >> inputInches;
   length1.SetInches(inputInches);

   length1.PrintInFeet();

   return 0;
}
