/* Add a constructor initializer list to the overloaded constructor Participant(string newName, int newAge, char newGroup) to initialize name with newName, age with newAge, and group with newGroup.

Ex: If the input is Huy 28 B, then the output is:

Participant: Unspecified, Age: -1, Group: -
Participant: Huy, Age: 28, Group: B */

#include <iostream>
using namespace std;

class Participant {
   public:
      Participant();
      Participant(string newName, int newAge, char newGroup);
      void Print() const;
   private:
      string name;
      int age;
      char group;
};

Participant::Participant() : name("Unspecified"), age(-1), group('-') {
}

Participant::Participant(string newName, int newAge, char newGroup) /* Your code goes here */ : name(newName), age(newAge), group(newGroup)  {
}

void Participant::Print() const {
   cout << "Participant: " << name << ", Age: " << age << ", Group: " << group << endl;
}

int main() {
   Participant myParticipant;
   string newName;
   int newAge;
   char newGroup;
  
   cin >> newName;
   cin >> newAge;
   cin >> newGroup;
   Participant yourParticipant(newName, newAge, newGroup);

   myParticipant.Print();
   yourParticipant.Print();
  
   return 0;
} 
