/* 10.2.3: Accessing a struct's data members.
Write a statement to print the data members of InventoryTag. End with newline. Ex: if itemID is 314 and quantityRemaining is 500, print:
Inventory ID: 314, Qty: 500 */

#include <iostream>
using namespace std;

struct InventoryTag {
   int itemID;
   int quantityRemaining;
};

int main() {
   InventoryTag redSweater;

   cin >> redSweater.itemID;
   cin >> redSweater.quantityRemaining;

   /* Your solution goes here  */
   cout << "Inventory ID: " << redSweater.itemID << ", Qty: " << redSweater.quantityRemaining << endl;

   return 0;
}