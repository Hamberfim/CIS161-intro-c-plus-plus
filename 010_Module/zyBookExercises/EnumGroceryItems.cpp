/* Output "Fruit" if the value of userItem is a type of fruit. Otherwise, if the value of userItem is a type of drink, output "Drink". Otherwise, output "Unknown". End each output with a newline.

Ex: If userItem is GR_APPLES, then the output is:
Fruit */

#include <iostream>
using namespace std;

int main() {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};
   GroceryItem userItem;

   userItem = GR_APPLES; /* Your code will be tested with GR_APPLES and other values for userItem */

   /* Your solution goes here  */
   if(userItem == GR_APPLES || userItem == GR_BANANAS) {
      cout << "Fruit" << endl;
      } 
      else if(userItem == GR_JUICE || userItem == GR_WATER) 
      {
         cout << "Drink" << endl;
      }
      else 
      {
         cout << "Unknown" << endl;
      }


   return 0;
}