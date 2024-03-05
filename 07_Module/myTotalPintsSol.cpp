#include <iostream>
using namespace std;

bool GetVolume(int& totalPints, int gallons, int pints) {
      if(gallons >= 0 && pints >= 0) {
            totalPints = pints + (gallons * 8);
            return true;
         } else {
            return false;
         }
   
   }

int main() {
   int totalPints;
	int gallons;
	int pints;
   bool valid;

   totalPints = 0;
   cin >> gallons;
	cin >> pints;

   valid = GetVolume(totalPints, gallons, pints);

   if (valid) {
      cout << "Total pints: " << totalPints << endl;
   }
   else {
      cout << "Invalid. Total pints: " << totalPints << endl;
   }

   return 0;
}