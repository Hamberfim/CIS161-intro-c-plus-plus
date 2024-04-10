/* The Person class has a default constructor with no parameters. Define an overloaded constructor that takes a string parameter, an integer parameter, and a double parameter for the name, the age, and the height of the person.

Ex: If the input is Jan 26 4.75, then the output is:

Person: None, 0, 0.00
Person: Jan, 26, 4.75 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person {
   public:
      Person();
      Person(string personName, int personAge, double personHeight);
      void Print();
   
   private:
      string name;
      int age;
      double height;
};

// Default constructor
Person::Person() {
   name = "None";
   age = 0;
   height = 0.0;
}

/* Your code goes here */
Person::Person(string personName, int personAge, double personHeight) {
   name = personName;
   age = personAge;
   height = personHeight;
}

void Person::Print() {
   cout << fixed << setprecision(2) << "Person: " << name << ", " << age << ", " << height << endl;
}

int main() {
   string personName;
   int personAge;
   double personHeight;
   
   cin >> personName;
   cin >> personAge;
   cin >> personHeight;
   
   Person emptyPerson;
   Person person1(personName, personAge, personHeight);
   
   emptyPerson.Print();
   person1.Print();

   return 0;
}
