/* Modifying a vector during iteration example: Doubling element values.
Complete the following program to double each number in the vector. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 5;         // Number of elements
   vector<int> userVals(NUM_ELEMENTS); // User values
   unsigned int i;                     // Loop index
   
   // Prompt user to populate vector
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: " << endl;
      cin >> userVals.at(i);
   }

   /* Type your code here */
   for(i = 0; i < userVals.size(); i++) {
         cout << "You entered: " << userVals.at(i) << endl;
         userVals.at(i) = userVals.at(i) * 2;
      }
   
   // Print numbers
   cout << "New values:";
   for (i = 0; i < userVals.size(); ++i) {
      cout << " " << userVals.at(i);
   }
   cout << endl;
   
   return 0;
}

