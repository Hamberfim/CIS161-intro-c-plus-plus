#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Loop index, current element in phone number string
   char currChar;     // Current char in phone number string
   
   cout << "Enter phone number: " << endl;
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
                ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      else if ( ((currChar >= 'd') && (currChar <= 'g')) ||
                ((currChar >= 'D') && (currChar <= 'G')) ) {
         cout << "3";
      }
      else if ( ((currChar >= 'h') && (currChar <= 'j')) ||
                ((currChar >= 'H') && (currChar <= 'J')) ) {
         cout << "4";
      }
      else if ( ((currChar >= 'k') && (currChar <= 'm')) ||
                ((currChar >= 'K') && (currChar <= 'M')) ) {
         cout << "5";
      }
      else if ( ((currChar >= 'n') && (currChar <= 'p')) ||
                ((currChar >= 'N') && (currChar <= 'P')) ) {
         cout << "6";
      }
      else if ( ((currChar >= 'q') && (currChar <= 's')) ||
                ((currChar >= 'Q') && (currChar <= 'S')) ) {
         cout << "7";
      }
      else if ( ((currChar >= 't') && (currChar <= 'v')) ||
                ((currChar >= 'T') && (currChar <= 'V')) ) {
         cout << "8";
      }
      else if ( ((currChar >= 'w') && (currChar <= 'z')) ||
                ((currChar >= 'W') && (currChar <= 'Z')) ) {
         cout << "9";
      }
   }
   
   cout << endl;
   
   return 0;
}