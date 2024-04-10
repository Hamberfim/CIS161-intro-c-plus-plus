/* Use currPurchase's ReadDetails() function to read each pair of inputs, string food and integer quantity, until "completed" is read from input and currPurchase's ReadDetails() function returns false. If currPurchase's ReadDetails() function returns true, append currPurchase to vector purchaseList.

Ex: If the input is zucchini 8 pepper 7 eggplant 10 cucumber 26 completed, then the output is:

Purchase: zucchini, Quantity: 8
Purchase: pepper, Quantity: 7
Purchase: eggplant, Quantity: 10
Purchase: cucumber, Quantity: 26 */

#include <iostream>
#include <vector>
using namespace std;

class Purchase {
   public:
      bool ReadDetails();
      void Print() const;
   private:
      string food;
      int quantity;
};

bool Purchase::ReadDetails() {
	string newFood;
	
	cin >> newFood;
	if (newFood == "completed") {
		return false;
	}
	else {
		food = newFood;
		cin >> quantity;
		return true;
	}
}

void Purchase::Print() const {
   cout << "Purchase: " << food << ", Quantity: " << quantity << endl;
}

int main() {
   vector<Purchase> purchaseList;
   Purchase currPurchase;
   bool result;
   unsigned int i;

   /* Your code goes here */
   while (currPurchase.ReadDetails()) {
      purchaseList.push_back(currPurchase);
   }

   for (i = 0; i < purchaseList.size(); ++i) {
      currPurchase = purchaseList.at(i);
      currPurchase.Print();
   }
   
   return 0;
}
