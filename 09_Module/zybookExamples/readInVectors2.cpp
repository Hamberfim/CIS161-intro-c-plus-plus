/* Integer numElements is read from input. Then, strings and integers are read and stored into string vector productList and integer vector labelList, respectively. Lastly, string productAsked is read from input. Find productAsked in productList and output the following:

"The product "
the value of productAsked
" matches the label "
the element in labelList at the index of productAsked in productList
" and is at index "
the index of productAsked in productList
End with a newline.

Ex: If the input is:

3
melon 10 turnip 43 carrot 54
carrot
Then the output is:

The product carrot matches the label 54 and is at index 2
Note: productAsked is an element in productList. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numElements;
   string productAsked;
   unsigned int i;

   cin >> numElements;

   vector<string> productList(numElements);
   vector<int> labelList(numElements);

   for (i = 0; i < productList.size(); ++i) {
      cin >> productList.at(i);
      cin >> labelList.at(i);
   }

   cin >> productAsked;

   int foundIndex=0;
   int lableNum = 0;
   for (i = 0; i < productList.size(); ++i) {
      if (productAsked == productList.at(i)) {
         foundIndex = i;
         lableNum = labelList.at(i);
      }
   }
   
   cout << "The product " << productAsked << " matches the label " << lableNum << " and is at index " << foundIndex << endl;  


   return 0;
}
