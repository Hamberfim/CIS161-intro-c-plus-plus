#include <iostream>
using namespace std;

double CalcPizzaVolume(double pizzaDiameter, double pizzaHeight) {
   double pizzaRadius;
   double pizzaArea;
   double pizzaVolume;
   double piVal = 3.14159265;

   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   pizzaVolume = pizzaArea * pizzaHeight;
   return pizzaVolume;
}

int main() {
   cout << "12.0 x 0.3 inch pizza is " << CalcPizzaVolume(12.0, 0.3);
   cout << " inches cubed." << endl;
   cout << "12.0 x 0.8 inch pizza is " << CalcPizzaVolume(12.0, 0.8);
   cout << " inches cubed." << endl;
   cout << "16.0 x 0.8 inch pizza is " << CalcPizzaVolume(16.0, 0.8);
   cout << " inches cubed." << endl;

   return 0;
}