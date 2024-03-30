/* Find the maximum value and minimum value in milesTracker. Assign the maximum value to maxMiles, and the minimum value to minMiles.

Ex: If the input is:

-10 20 30 40

the output is:
Min miles: -10
Max miles: 40 */

#include <iostream>
using namespace std;

int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0; // Assign with first element in milesTracker before loop
   int minMiles = 0; // Assign with first element in milesTracker before loop
   int value;

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         cin >> value;
         milesTracker[i][j] = value;
      }
   }

   /* Your solution goes here  */
   maxMiles = milesTracker[0][0];
   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         value = milesTracker[i][j];
         // is maxMiles value is greater
         if (value > maxMiles) {
           maxMiles = value;
         }
         // is inMiles value is smaller
         else if (value < minMiles) {
           minMiles = value;
         }
      }
   }

   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}
