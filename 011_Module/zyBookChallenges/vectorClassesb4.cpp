/* Write the InputOrders() function in the Deliveries class. Within InputOrders(), use cin to read pairs of input, character currOption and string currFood, until '%' is read from input. Create each Order object with currOption and currFood as arguments and append each object to vector orderList.

Ex: If the input is C gourd B honeydew A chard D guava %, then the output is:

Order option: C, Food: gourd
Order option: B, Food: honeydew
Order option: A, Food: chard
Order option: D, Food: guava */

#include <iostream>
#include <vector>
using namespace std;

class Order {
   public:
      void SetDetails(char newOption, string newFood);
      void Print() const;
   private:
      char option;
      string food;
};

void Order::SetDetails(char newOption, string newFood) {
	option = newOption;
	food = newFood;
}

void Order::Print() const {
   cout << "Order option: " << option << ", Food: " << food << endl;
}

class Deliveries {
   public:
      void InputOrders();
      void PrintOrders();
   private:
      vector<Order> orderList;
};

/* Your code goes here */
void Deliveries::InputOrders() {
   Order currOrder;
   char currOption;
   string currFood;

   while (cin >> currOption >> currFood, currOption != '%') {
      currOrder.SetDetails(currOption, currFood);
      orderList.push_back(currOrder);
   }
}

void Deliveries::PrintOrders() {
   Order currOrder;
   unsigned int i;

   for (i = 0; i < orderList.size(); ++i) {
      currOrder = orderList.at(i);
      currOrder.Print();
   }
}

int main() {
   Deliveries deliveries;

   deliveries.InputOrders();
   deliveries.PrintOrders();
 
   return 0;
}
