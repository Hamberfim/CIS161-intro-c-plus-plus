/* Define a function SumElements() that takes one integer vector parameter and one integer parameter. The function returns the sum of the vector's elements that are not equal to the integer parameter.

Ex: If the input is:

4
2 -21 22 14
2
then the vector has 4 elements {2, -21, 22, 14}, and the integer parameter is 2. The output is:

15
Note: The sum is zero if all elements are equal to the integer parameter */

#include <iostream>
#include <vector>
using namespace std;

/* Your code goes here */
int SumElements(const vector<int>& inVctr, int x) {
   int sum = 0;
   for(unsigned int i = 0; i < inVctr.size(); i++) {
         if(inVctr.at(i) != x) {
            sum += inVctr.at(i);
            }
      }
      return sum;
  }


int main() {
   vector<int> inVector;
   int size;
   int input;
   int i;
   int x;
   int result;

   // Read the vector's size, and then the vector's elements
   cin >> size;
   for (i = 0; i < size; ++i) {
      cin >> input;
      inVector.push_back(input);
   }

   cin >> x;

   result = SumElements(inVector, x);

   cout << result << endl;

   return 0;
}
