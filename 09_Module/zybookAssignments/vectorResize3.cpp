/* Given the double vector valElements with two elements, the input integer listSize, and the input double begNum, resize valElements to listSize. Then, assign the new elements of valElements with begNum - 1.5 * i, where i is the index of each element in the vector.

Ex: If the input is 4 12.5, then the output is:

36.5 30.5 9.5 8.0 */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
   unsigned int i;
   int initSize = 2;
   vector<double> valElements(initSize);
   int listSize;
   double begNum;
   
   valElements.at(0) = 36.5;
	valElements.at(1) = 30.5;
   
   cin >> listSize;
   cin >> begNum;

   /* Your code goes here */
   valElements.resize(listSize);
   for(i = 2; i < valElements.size(); i++) {
      valElements.at(i) = begNum - 1.5 * i;
      }

   for (i = 0; i < valElements.size(); ++i) {
      cout << fixed << setprecision(1) << valElements.at(i) << " ";
   }
   cout << endl;

   return 0;
}
