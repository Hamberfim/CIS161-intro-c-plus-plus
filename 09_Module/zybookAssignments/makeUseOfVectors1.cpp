/* Write a while loop to read positive integers from input until a non-positive integer is read. For each positive integer read before the non-positive integer, add the positive integer plus three to vector intVector.

Ex: If the input is 4 1 6 8 -99, then the output is:

7
4
9
11
Note: Positive integers are greater than 0. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> intVector;
   int value;
   int i;

 bool isPos = true;
   while(isPos) {
      cin >> value;
      if(value > 0) {
         value = value + 3;
         intVector.push_back(value);    
      } else {isPos = false;}
      
   }

   for (i = 0; i < intVector.size(); ++i) {
      cout << intVector.at(i) << endl;
   }

   return 0;
}
