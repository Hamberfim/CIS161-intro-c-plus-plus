/* Integer numValues is read from input, representing the size of vectors, marMostPopular and julMostPopular. Then, the remaining strings are read and stored into vector marMostPopular and julMostPopular, respectively. Perform the following tasks:

If marMostPopular is equal to julMostPopular, output "March's most popular furniture are identical to July's most popular furniture."
Otherwise, output "March's most popular furniture are not identical to July's most popular furniture."
Assign julBackup as a copy of julMostPopular.
Ex: If the input is:

2
cupboard mattress
organizer bureau
then the output is:

March's most popular furniture: cupboard mattress 
July's most popular furniture: organizer bureau 
March's most popular furniture are not identical to July's most popular furniture.
July's backup: organizer bureau  */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numValues;
   unsigned int i;
   vector<string> marMostPopular;
   vector<string> julMostPopular;
   vector<string> julBackup;
   
   cin >> numValues;
   
   marMostPopular.resize(numValues);
   julMostPopular.resize(numValues);
   
   cout << "March's most popular furniture: ";
   for (i = 0; i < marMostPopular.size(); ++i) {
      cin >> marMostPopular.at(i);
      cout << marMostPopular.at(i) << " ";
   }
   cout << endl;
   
   cout << "July's most popular furniture: ";
   for (i = 0; i < julMostPopular.size(); ++i) {
      cin >> julMostPopular.at(i);
      cout << julMostPopular.at(i) << " ";
   }
   cout << endl;

   /* Your code goes here */

   if(marMostPopular == julMostPopular) 
   {
      cout << "March's most popular furniture are identical to July's most popular furniture." << endl;   
   }else {
      cout << "March's most popular furniture are not identical to July's most popular furniture." << endl;
   }
      
   julBackup = julMostPopular;

   cout << "July's backup: ";
   for (i = 0; i < julBackup.size(); ++i) {
      cout << julBackup.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
