#include <iostream>
#include <string>
using namespace std;

class FoodType {
   public:
      FoodType(string foodType);
      static int nextId;
      void Print();
   private:
      string type = "None";
      int id = 0;                
};

FoodType::FoodType(string foodType) {
   type = foodType;
   id = nextId;

   nextId += 4;
}

void FoodType::Print() {
   cout << id << ": " << type << endl;
}

int FoodType::nextId = 30;

int main() {
   FoodType order1("Hamburger");
   FoodType order2("Burrito");
   FoodType order3("Pasta");

   order3.Print();

   return 0;
}



#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
   public:
      FoodOrder(string foodType);
      static int GetNextId();
   private:
      string type = "None";
      int id = 0;        
      static int nextId;
};

FoodOrder::FoodOrder(string foodType) {
   type = foodType;
   id = nextId;

   nextId += 1;  
}

int FoodOrder::GetNextId() {
   return nextId;
}

int FoodOrder::nextId = 10;

int main() {
   FoodOrder order1("Sushi");
   FoodOrder order2("Noodles");
   FoodOrder order3("Muffins");

   cout << "Next ID: " << FoodOrder::GetNextId() << endl;

   return 0;
}
