/* Define a function ReverseVector() that takes an input integer vector parameter and an output integer vector parameter passed by reference. The function copies all the elements in the input vector to the output vector in reversed order.

Ex: If the input is:

4
5 3 -9 8
then the vector has 4 elements {5, 3, -9, 8} and the output is:

8
-9
3
5 */

#include <iostream>
#include <vector>
using namespace std;

/* Your code goes here */
void ReverseVector(vector<int>& inVctr, vector<int>& reversedVctr) {
   for (int i = inVctr.size() - 1; i >= 0; --i) {
    reversedVctr.push_back(inVctr.at(i));
  }
}

int main() {
   int i;
	vector<int> inputVector;
	vector<int> reversed;
	int size;
	int input;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector.push_back(input);
	}

   ReverseVector(inputVector, reversed);

	for (i = 0; i < reversed.size(); ++i) {
		cout << reversed.at(i) << endl;
	}

   return 0;
}
