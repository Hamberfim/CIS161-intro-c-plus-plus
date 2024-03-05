#include <iostream>
using namespace std;

void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {
   numQuarters = totCents / 25;
   int remainder = totCents % 25;

   numDimes = remainder / 10;
   remainder %= 10;

   numNickels = remainder / 5;
   numPennies = remainder % 5;
   
   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickles: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;

   cout << "Enter total cents: " << endl;
   cin >> userCents;
   
   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   return 0;
}