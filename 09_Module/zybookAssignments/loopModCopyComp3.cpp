/* Integer numValues is read from input, representing the number of integers to be read next. Then, the remaining integers are read and stored into vector scoresList. Write a loop that assigns vector newList with scoresList's elements shifted to the left by one index. The element at index 0 of scoresList should be copied to the end of newList.

Ex: If the input is:

3
90 50 75
then the output is:

Original scores: 90 50 75 
Updated scores: 50 75 90 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numValues;
   unsigned int i;
   vector<int> scoresList;
	vector<int> newList;
   
   cin >> numValues;
   
   scoresList.resize(numValues);
	newList.resize(numValues);
	
	for (i = 0; i < scoresList.size(); ++i) {
		cin >> scoresList.at(i);
	}

   /* Your code goes here */
   for (i = 0; i < scoresList.size()-1; ++i) {
		newList.at(i) = scoresList.at(i + 1);
	}
   newList.at(numValues - 1) = scoresList.at(0);
   

   cout << "Original scores: ";
   for (i = 0; i < scoresList.size(); ++i) {
      cout << scoresList.at(i) << " ";
   }
   cout << endl;
	
	cout << "Updated scores: ";
	for (i = 0; i < newList.size(); ++i) {
		cout << newList.at(i) << " ";
	}
	cout << endl;
   
   return 0;
}
