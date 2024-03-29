/* Define a function EndsWith() that has two string parameters. If the first string ends with the second string, the function prints the first string followed by "$" and the second string. Otherwise, the function prints "Failed to match.". End with a newline. The function does not return any value.

Ex: If the input is vintaging ing, then the output is:

vintaging$ing

Note: userText.find("xy") returns the index of the first occurrence of "xy" in userText, or string::npos if userText does not contain "xy" */

#include <iostream>
using namespace std;

/* Your code goes here */
void EndsWith(const string& str, const string& endStr) {
 if (str.size() >= endStr.size() && 
     str.compare(str.size() - endStr.size(), endStr.size(), endStr) == 0) {
   cout << str << "$" << endStr << endl;
 } else {
   cout << "Failed to match." << endl;
 }
}

int main() {
   int i;
   string inputString1;
   string inputString2;

   cin >> inputString1;
   cin >> inputString2;

   EndsWith(inputString1, inputString2);

   return 0;
}
