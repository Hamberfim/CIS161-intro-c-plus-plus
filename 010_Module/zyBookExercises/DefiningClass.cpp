void/* 10.5.3: Defining a class.

In the Cow class, complete the function definition for SetColor() with the string parameter customColor.

Ex: If the input is 14 Rob brown, then the output is:

Age: 14
Name: Rob
Color: brown
*/

#include <iostream>
using namespace std;

class Cow {
   public:
      void SetAge(int customAge);
	  void SetName(string customName);
      void SetColor(string customColor);
      int GetAge();
	  Rstring GetName();
      string GetColor();
   private:
      int age;
	  string name;
      string color;
};

void Cow::SetAge(int customAge) {
   age = customAge;
}

void Cow::SetName(string customName) {
	name = customName;
}

/* Your code goes here */ {   
   color = customColor;
}

int Cow::GetAge() {
   return age;
}

string Cow::GetName() {
	return name;
}

string Cow::GetColor() {
   return color;
}

int main() {
   Cow cow1;
   int userAge;
	string userName;
   string userColor;

   cin >> userAge;
	cin >> userName;
   cin >> userColor;

   cow1.SetAge(userAge);
	cow1.SetName(userName);
   cow1.SetColor(userColor);
   
   cout << "Age: " << cow1.GetAge() << endl;
	cout << "Name: " << cow1.GetName() << endl;
   cout << "Color: " << cow1.GetColor() << endl;

   return 0;
}