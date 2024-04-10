/* 11.6.2: Constructor initializer lists.
519134.1787752.qx3zqy7

Start
Add a constructor initializer list to the default Town constructor to initialize name with "Unavailable", population with -99, and tourism with 'X'.

Ex: If the input is Sundance 2198 N, then the output is:

Town: Unavailable, Population: -99, Tourism: X
Town: Sundance, Population: 2198, Tourism: N */

#include <iostream>
using namespace std;

class Town {
   public:
      Town();
      void SetInformation(string newName, int newPopulation, char newTourism);
      void Print() const;
   private:
      string name;
      int population;
      char tourism;
};

Town::Town() /* Your code goes here */ : name("Unavailable"), population(-99), tourism('X') {
}

void Town::SetInformation(string newName, int newPopulation, char newTourism) {
   name = newName;
   population = newPopulation;
   tourism = newTourism;
}

void Town::Print() const {
   cout << "Town: " << name << ", Population: " << population << ", Tourism: " << tourism << endl;
}

int main() {
   string newName;
   int newPopulation;
   char newTourism;
   Town myTown;
  
   myTown.Print();
  
   cin >> newName;
   cin >> newPopulation;
   cin >> newTourism;
   myTown.SetInformation(newName, newPopulation, newTourism);
   myTown.Print();
  
   return 0;
} 
