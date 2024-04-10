/* 11.1.2: Mutators, accessors, and private helpers.

Define the Message class's SetGreeting() mutator that sets data member greeting to "Hi, you have reached ", followed by messageGreeting, and the SetAreaCode() mutator that sets data member areaCode to messageAreaCode.

Ex: If the input is Dax 435, then the output is:

Message: Hi, you have reached Dax
Area Code: 435 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Message {
   public:
      void SetGreeting(string messageGreeting);      
      void SetAreaCode(int messageAreaCode);     
      void Print() const;   
   private:
      string greeting;
      int areaCode;
};

/* Your code goes here */
void Message::SetGreeting(string inputGreeting) {
      greeting =  "Hi, you have reached " + inputGreeting;
   }
void Message::SetAreaCode(int inputAreaCode){
      areaCode = inputAreaCode;
   }

void Message::Print() const {
   cout << "Message: " << greeting << endl;
   cout << "Area Code: " << areaCode << endl;
}

int main() {
   Message voicemail;
   string inputGreeting;
   int inputAreaCode;

   cin >> inputGreeting;
   cin >> inputAreaCode;
   voicemail.SetGreeting(inputGreeting);
   voicemail.SetAreaCode(inputAreaCode);

   voicemail.Print();

   return 0;
}
