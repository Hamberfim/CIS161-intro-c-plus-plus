/* Write a function SwapVectorEnds() that swaps the first and last elements of its vector parameter. Ex: sortVector = {10, 20, 30, 40} becomes {40, 20, 30, 10}. */

#include <iostream>
#include <vector>
using namespace std;

/* Your solution goes here  */
void SwapVectorEnds(vector<int>& sortVector) {
      int temp = sortVector.at(0);  // temp value holder
      sortVector.at(0) = sortVector.at(sortVector.size() - 1);
      sortVector.at(sortVector.size() - 1) = temp;
   }

// void SwapVectorEnds(vector<int>& sortVector) {
//  if (sortVector.empty()) {
//    return;  // Handle empty vector case
//  }

 // Safely swap first and last elements using std::swap:
//  std::swap(sortVector.front(), sortVector.back());
// }


int main() {
   vector<int> sortVector(4);
   unsigned int i;
   int userNum;

   for (i = 0; i < sortVector.size(); ++i) {
      cin >> userNum;
      sortVector.at(i) = userNum;
   }

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
