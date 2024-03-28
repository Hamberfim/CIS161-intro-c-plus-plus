/* Integers are read from input and stored into a vector until -1 is read. Output the odd elements in the vector in reverse order. End each number with a newline.

Ex: If the input is -7 2 -10 15 -1, then the output is:

15
-7
Note: (x % 2 != 0) returns true if x is odd. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> intVect;
   int value;
   int i;

   cin >> value;
   while (value != -1) {
      intVect.push_back(value);
      cin >> value;
   }

   for(i = intVect.size()-1; i >= 0; i--) {
      if(intVect.at(i) % 2 != 0) {
         cout << intVect.at(i) << endl;
         }
      }

   return 0;
}
