/* 10.5.3: Defining a class.
In the Robin class, declare the following public member functions:

SetColor() with one string parameter
SetName() with one string parameter
and the following private data members:

string color
string name
Ex: If the input is tan Jan, then the output is:

Color: tan
Name: Jan */

#include <iostream>
using namespace std;

class Robin {
   public:
      string GetColor();
      string GetName();
      /* Member function declarations go here */
      void SetColor(string color);
      void SetName(string name);
   private:
      /* Data members go here */
      string color;
      string name;
};

void Robin::SetColor(string newColor) {
   color = newColor;
}

void Robin::SetName(string newName) {   
   name = newName;
}

string Robin::GetColor() {
   return color;
}

string Robin::GetName() {
   return name;
}

int main() {
   Robin robin1;
   string inputColor;
   string inputName;

   cin >> inputColor;
   cin >> inputName;

   robin1.SetColor(inputColor);
   robin1.SetName(inputName);
   
   cout << "Color: " << robin1.GetColor() << endl;
   cout << "Name: " << robin1.GetName() << endl;

   return 0;
}