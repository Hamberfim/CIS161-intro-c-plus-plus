#include <iostream>
#include <iomanip>
using namespace std;

int main() {   
   double peachWeight1 = 30442.25;
   double peachWeight2 = 51.9375;
   double totalWeight;
   totalWeight = peachWeight1 + peachWeight2;
   cout << fixed << setprecision(4) << right;

   cout << setw(16) << peachWeight1 << endl;
   cout << "+ ";
   cout << setw(14) << peachWeight2 << endl;

   cout << setfill('-') << setw(16) << "" << endl; // Output the horizontal separator
   cout << setfill(' ') << setw(16) << totalWeight << endl; // Output result

   return 0;
}