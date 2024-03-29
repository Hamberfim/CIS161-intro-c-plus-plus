/* Given the integer vector listVals and the input integers newSize and startNum, resize listVals to newSize. Then, assign the elements of listVals with integers startNum - 2 * i, where i is the index of each element in the vector.

Ex: If the input is 3 29, then the output is:

29 27 25  */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> listVals;
   int numVals;
   unsigned int i;
   int newSize;
   int startNum;

   cin >> newSize;
   cin >> startNum;

   /* Your code goes here */
   listVals.resize(newSize);
   for(i = 0; i < listVals.size(); i++) {
      listVals.at(i) = startNum - 2 * i;
      }

   for (i = 0; i < listVals.size(); ++i) {
      cout << listVals.at(i) << " ";
   }
   cout << endl;

   return 0;
}
