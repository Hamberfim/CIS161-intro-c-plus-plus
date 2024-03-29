/* The string serves as function input and output. The string parameter must be pass by reference, achieved using &, so that the function modifies the original string argument (userStr) and not a copy.

zyDE 9.9.1: Modifying a string parameter: Spaces to hyphens.
Run the program, noting correct output.
Remove the & and run again, noting the string is not modified, because the string is pass by value and thus the function modifies a copy. When done replace the &
Modify the function to also replace each '!' by a '?'. */


#include <iostream>
#include <string>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(string& modStr) {
   unsigned int i;  // Loop index
   
   for (i = 0; i < modStr.size(); ++i) {
      if (modStr.at(i) == ' ') {
         modStr.at(i) = '-';
      }
   }
}

int main() {
   string userStr;  // Input string from user
   
   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   getline(cin, userStr);
   
   // Call function to modify user defined string
   StrSpaceToHyphen(userStr);
   
   // Output modified string
   cout << "String with hyphens: ";
   cout << userStr << endl;
   
   return 0;
}
