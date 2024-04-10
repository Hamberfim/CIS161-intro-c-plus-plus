/* Define a default constructor that initializes the data members, integer age, string type, and string color, with the default values 0, "Empty", and "Unknown", respectively.

Ex: If the input is 18 tiger birch, then the output is:

Age: 0, Type: Empty, Color: Unknown
Age: 18, Type: tiger, Color: birch

Note: The class's print function is called first after the default constructor, then again after the inputs are passed to the setters. */

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      Animal();
      void SetAge(int animalAge);
		void SetType(string animalType);
		void SetColor(string animalColor);
      void Print();

   private:
      int age;
		string type;
		string color;
};

/* Your code goes here */
Animal::Animal() {
      age = 0;
      type = "Empty";
      color = "Unknown";
   }


void Animal::SetAge(int animalAge) {
	age = animalAge;
}

void Animal::SetType(string animalType) {
	type = animalType;
}

void Animal::SetColor(string animalColor) {
	color = animalColor;
}

void Animal::Print() {
   cout << "Age: " << age << ", Type: " << type << ", Color: " << color << endl;
}

int main() {
   int newAge;
	string newType;
	string newColor;
   Animal favoriteAnimal;

   favoriteAnimal.Print();
   
   cin >> newAge;
	cin >> newType;
	cin >> newColor;

   favoriteAnimal.SetAge(newAge);
	favoriteAnimal.SetType(newType);
	favoriteAnimal.SetColor(newColor);

   favoriteAnimal.Print();

   return 0;
}
