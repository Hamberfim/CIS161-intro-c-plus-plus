/* 11.2.2: Initialization and constructors.

In the class definition, initialize the data members, string name, string color, and string type, with the default values "Empty", "Undefined", and "Unknown", respectively.

Ex: If the input is Guy cream whale, then the output is:

Name: Empty, Color: Undefined, Type: Unknown
Name: Guy, Color: cream, Type: whale

Note: The class's print function is called first after the default constructor, then again after the inputs are passed to the setters. */

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      void SetName(string animalName);
      void SetColor(string animalColor);
      void SetType(string animalType);
      void Print();

   private:

      /* Your code goes here */
      string name = "Empty";
      string color = "Undefined";
      string type = "Unknown";

};

void Animal::SetName(string animalName) {
	name = animalName;
}

void Animal::SetColor(string animalColor) {
	color = animalColor;
}

void Animal::SetType(string animalType) {
	type = animalType;
}

void Animal::Print() {
   cout << "Name: " << name << ", Color: " << color << ", Type: " << type << endl;
}

int main() {
   string newName;
   string newColor;
   string newType;
   Animal myAnimal;

   myAnimal.Print();

   cin >> newName;
   cin >> newColor;
   cin >> newType;

   myAnimal.SetName(newName);
	myAnimal.SetColor(newColor);
	myAnimal.SetType(newType);

   myAnimal.Print();

   return 0;
}
