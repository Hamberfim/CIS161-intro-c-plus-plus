/* Integer dataSize is read from input. Then, strings and integers are read and stored into string vector foodList and integer vector quantityList, respectively. Lastly, string foodAsked and integer quantityAsked are read from input.

Assign matchesFound with the number of element pairs that match both foodAsked and quantityAsked.
For each pair that matches foodAsked and quantityAsked, output "Found at index " followed by the element pair's index. End with a newline.
Ex: If the input is:

3
chicken 200 quail 64 quail 60
quail 60
Then the output is:

Found at index 2
Total: 1 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numElements;
   string foodAsked;
	int quantityAsked;
   int matchesFound;
   unsigned int i;
  
   cin >> numElements;

   vector<string> foodList(numElements);
   vector<int> quantityList(numElements);

   for (i = 0; i < foodList.size(); ++i) {
      cin >> foodList.at(i);
      cin >> quantityList.at(i);
   }

   cin >> foodAsked;
	cin >> quantityAsked;

   matchesFound = 0;
   int idxFound =0;
   for (i = 0; i < foodList.size(); ++i) {
      if(foodAsked == foodList.at(i) && quantityAsked == quantityList.at(i)) {
         matchesFound++;
         idxFound = i;
         
         cout << "Found at index " << idxFound << endl;
         }
   }
   
   
   cout << "Total: " << matchesFound << endl;

   return 0;
} 
