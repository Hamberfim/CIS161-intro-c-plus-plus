/* Integers are read from input and stored into a vector until 0 is read. Output the elements in the vector, replacing any elements less than the vector's last element with "BAM". End each number with a newline.

Ex: If the input is 6 -8 -9 -4 0, the vector's last element is -4. Thus, the output is:

6
BAM
BAM
-4 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> integerVector;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      integerVector.push_back(value);
      cin >> value;
   }

  for(i = 0; i < integerVector.size(); i++) {
      if(integerVector[i] < (integerVector[integerVector.size() -1] )) 
         {
         cout << "BAM" << endl;
         }
         else
         {
            cout << integerVector[i] << endl;;
         }
     }

   return 0;
}
