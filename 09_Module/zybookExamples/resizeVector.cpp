/* The program below asks a user to indicate the number of values the user will enter, allocates that number of elements for a vector, assigns the vector's elements with user-entered values, and then displays the vector's elements. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals; // No elements yet
   int numVals;
   unsigned int i;
   
   cout << "Enter number of integer values: ";
   cin >> numVals;
   
   userVals.resize(numVals); // Allocate elements
   
   cout << "Enter " << numVals << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
