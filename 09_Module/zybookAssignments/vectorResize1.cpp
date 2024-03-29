/* Given the integer vector myValues with seven elements and the input integer numRemoved, resize myValues to remove numRemoved elements from the vector.

Ex: If the input is 5, then the output is:

The beginning 10 12 9 15 11 13 14 The end
The beginning 10 12 The end

Note: Assume that numRemoved is a non-negative integer less than or equal to the vector's size. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> myValues(7);
   int myValuesSize = myValues.size();
   int numRemoved;
   int i;
   
   myValues.at(0) = 10;
	myValues.at(1) = 12;
	myValues.at(2) = 9;
	myValues.at(3) = 15;
	myValues.at(4) = 11;
	myValues.at(5) = 13;
	myValues.at(6) = 14;
   
   cin >> numRemoved;
   
   cout << "The beginning ";
	for (i = 0; i < myValues.size(); ++i) {
      cout << myValues.at(i) << " ";
   }
	cout << "The end" << endl;
   
   myValues.resize(myValues.size() - numRemoved);

   cout << "The beginning ";
	for (i = 0; i < myValues.size(); ++i) {
      cout << myValues.at(i) << " ";
   }
	cout << "The end" << endl;

   return 0;
}
