/* Integer numValues is read from input, representing the number of integers to be read next. Then, the remaining integers are read and stored into vector numbersList. For each element in numbersList that is even:

Output the element, followed by ": adjusted to an odd number" and a newline.
Assign the element with the element's current value plus 1.
Ex: If the input is:

3
85 24 14
then the output is:

Original numbers: 85 24 14 
24: adjusted to an odd number
14: adjusted to an odd number
Nearest odd numbers: 85 25 15 
Note: (x % 2 == 0) returns true if x is even. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numValues;
   unsigned int i;
   vector<int> numbersList;
   
   cin >> numValues;
   
   numbersList.resize(numValues);
   
   for (i = 0; i < numbersList.size(); ++i) {
      cin >> numbersList.at(i);
   }
   
   cout << "Original numbers: ";
   for (i = 0; i < numbersList.size(); ++i) {
      cout << numbersList.at(i) << " ";
   }
   cout << endl;

   /* Your code goes here */
   for(i = 0; i < numbersList.size(); ++i) {
         if(numbersList.at(i) % 2 == 0) {
            cout << numbersList.at(i) << ": adjusted to an odd number" << endl;
            numbersList.at(i)++;
            }
      }

   cout << "Nearest odd numbers: ";
   for (i = 0; i < numbersList.size(); ++i) {
      cout << numbersList.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
