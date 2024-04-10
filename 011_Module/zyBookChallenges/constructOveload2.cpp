/* The Animal class has a default constructor with no parameters. Define an overloaded constructor that takes two string parameters and initializes the animal's type and color with the strings.

Ex: If the input is deer yellow, then the output is:

Animal: Unspecified, Unspecified
Animal: deer, yellow */

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
      Animal();
      Animal(string animalType, string animalColor);
      void Print();
   
   private:
      string type;
		string color;
};

// Default constructor
Animal::Animal() {
   type = "Unspecified";
	color = "Unspecified";
}

/* Your code goes here */
Animal::Animal(string animalType, string animalColor) {
   type = animalType;
   color = animalColor;
}

void Animal::Print() {
   cout << "Animal: " << type << ", " << color << endl;
}

int main() {
   string animalType;
	string animalColor;
   
   cin >> animalType;
	cin >> animalColor;
   
   Animal emptyAnimal;
   Animal animal1(animalType, animalColor);
   
   emptyAnimal.Print();
   animal1.Print();

   return 0;
}
