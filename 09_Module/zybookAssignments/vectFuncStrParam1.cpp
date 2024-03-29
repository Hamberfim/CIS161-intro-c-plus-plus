/* Complete the function GetLastIndex() that has one string parameter and one character parameter. The function returns the index of the last character in the string that is not equal to the character parameter. If no such character is found, the function returns -1.

Ex: If the input is jwzwc w, then the output is:

4 */

#include <iostream>
using namespace std;

int GetLastIndex(string inputString, char x) {

   /* Your code goes here */
  for (int i = inputString.size() - 1; i >= 0; i--) {
    if (inputString.at(i) != x) {
      return i;
    }
  }


  return -1;
}

int main() {
   string inString;
   char x;
   int result;

   cin >> inString;
   cin >> x;

   result = GetLastIndex(inString, x);

   cout << result << endl;

   return 0;
}
