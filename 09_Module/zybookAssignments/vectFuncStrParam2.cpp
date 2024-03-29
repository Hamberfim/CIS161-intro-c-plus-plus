/* Define a function ChooseIndices() that has one input string parameter, one character parameter, and one output vector parameter passed by reference. The function should not return any value. The function finds the characters in the input string that are equal to the character parameter, and stores the index of each such character in the output vector in the same order as the input string.

Ex: If the input is nfnps n, then the output is:

0
2 */

#include <iostream>
#include <vector>
using namespace std;

/* Your code goes here */
void ChooseIndices(const string& str, char c, vector<int>& idx) {
  for (size_t i = 0; i < str.size(); ++i) {
    if (str[i] == c) {
      idx.push_back(i);
    }
  }
}

int main() {
   string inputString;
   int i;
   char x;
   vector<int> results;
   
   cin >> inputString;
   cin >> x;

   ChooseIndices(inputString, x, results);

   for (i = 0; i < results.size(); ++i) {
      cout << results.at(i) << endl;
   }

   return 0;
}
