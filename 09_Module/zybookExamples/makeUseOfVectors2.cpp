/* Integers are read from input and stored into a vector until -1 is read. For each vector element E, output the sum between E and the vector's last element. End each number with a newline.

Ex: If the input is 4 14 10 8 -1, the vector's last element is 8. Thus, the output is:

12
22
18
16
Note: The input has at least three integers. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> numberVect;
   int value;
   int i;

   cin >> value;
   while (value != -1) {
      numberVect.push_back(value);
      cin >> value;
   }

   for(i = 0; i < numberVect.size(); i++) {
      numberVect.at(i) = numberVect.at(i) + numberVect.at(numberVect.size() -1);
      cout << numberVect.at(i) << endl;
      
      }

   return 0;
}
