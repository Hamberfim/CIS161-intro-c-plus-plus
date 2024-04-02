/* 10.1.2: Soda machine with enums.
The following program reads a number from input to indicate the coin inserted into a soda machine. Complete the code provided to add the appropriate amount to totalDeposit.
	Enumerator ADD_QUARTER has a value of 0 (add 25).
	Enumerator ADD_DIME has a value of 1 (add 10).
	Enumerator ADD_NICKEL has a value of 2 (add 5). 
*/

#include <iostream>
using namespace std;

int main() {
   enum AcceptedCoins {ADD_QUARTER, ADD_DIME, ADD_NICKEL};
   int totalDeposit;
   int userInput;

   totalDeposit = 0;
   cin >> userInput;

   if (userInput == ADD_QUARTER) {
      totalDeposit = totalDeposit + 25;
   }
   /* Your solution goes here  */
   else if (userInput == ADD_DIME) {
      totalDeposit = totalDeposit + 10;
   }
   else if (userInput == ADD_NICKEL) 
   {
      totalDeposit = totalDeposit + 5;}
   else 
   {
      cout << "Invalid coin selection." << endl;
   }

   cout << "totalDeposit: " << totalDeposit << endl;

   return 0;
}
}